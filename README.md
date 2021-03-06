# Overview

![Build status](https://dev.azure.com/ankurverma0037/ankurverma/_apis/build/status/ankurverma85.stencil)

A code generation tool that is inspired by [MVVM](https://en.wikipedia.org/wiki/Model%E2%80%93view%E2%80%93viewmodel) Data-Binding techniques often utilized in GUI programming for binding IDL representations of structs and interfaces to built-in or easy to write custom templates for boiler plate code generation providing lighting fast implementations without subjecting the developers to [RSI Injuries](https://en.wikipedia.org/wiki/Repetitive_strain_injury)

Currently support IDL representations 

* Custom [Thrift](https://en.wikipedia.org/wiki/Apache_Thrift)-like IDL 

Built-in templates for 

* JSON import/export 
* Command line parsing 
* Table Based disk read/write of records represented in IDL 
* C++ based REST HTTP Web-service (JSON) based on IDL interface definition. 
* MySQL records and tables (TODO)


# Example Code Usage (JSON, Command Line)
Consider a simple IDL (foo.pidl)
```
struct Foo 
{
  string       s	(Description = "Some String"),
  list<string> l	(Description = "List of strings"),
  i32          i = 3443	(Description = "Some integer value"),
  bool         b = false	(Description = "A switch")
}
```
C++ Code
```
#include <foo.pidl.h>

#include <DataHandlerJson.h>
#include <CommandLineArgsReader.h>

#include <iostream>

int main(int arg, char* argv[])
{
  // Command line: foo -s "some-string" -l val1,val2, -i 3444
  std::unique_ptr<Foo> foocliobj = CommandLineArgsReader::Parse<Foo>(argc, argv);
  // {"s": "some-string", "l": ["val1", "val2"], "i": 3444 }
  std::string foojsonstr = Json::Stringify(foo);
  auto foojsonobj = Json::Parse<Foo>(foojsonstr);
  return 0;
}

```

# Example Code Usage: MySQL/Simple Table Based read/write

IDL example
```

struct UserData
{
    //databaseref<wstring> name;
    timestamp modified;
    timestamp creation;
}

struct Identity
{
    db_encrypted_unique_wstring username;
    db_encrypted_unique_wstring password;
    db_encrypted_unique_wstring privatekey;
    db_encrypted_unique_wstring clientcert;
    db_encrypted_unique_wstring secretcode;
}

struct RemoteHost
{
    db_encrypted_unique_wstring name;
    db_encrypted_unique_wstring uri;
    uuidref<Identity> identity;
}

relationship database owner = UserData : object = RemoteHost, Identity
relationship uuidbasedobject object = RemoteHost, Identity
relationship encryptedobject object = Identity
relationship timestamped object = RemoteHost, Identity, UserData
```
C++ Code
```
#include <UserData.pidl.h>
#include <Database2.h>
int main(int argc, char *argv[])
{
// TODO
}
```

# Example Code Usage: Web Interface
IDL example (Service.pidl)
```

struct Data
{
	i32 result;
}

interface TestInterface
{
	Data AddNumber(i32 num1, i32 num2);
}

```
C++ Code
```
#include <Service.pidl.h>
#include <WebService.h>

class TestInterfaceImpl : public TestInterface
{
    public:
    // Inherited via TestInterface
    virtual Data AddNumber(int32_t num1, int32_tnum2) override { return Data{ num1 + num2}; }

};

template <> struct ReflectionBase::InterfaceActivator<TestInterface>
{
   std::unique_ptr<TestInterface> Activate()
   {
       return new TestInterfaceImpl();
    }
};

int main(int argc, char* argv[])
{
        WebService<TestInterface> svc;
        svc.StartOnPort(8080);
        svc.WaitForStop();
}
```
