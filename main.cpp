#include <iostream>

class Hello{
public:
Hello(std::string msg) : message(msg){}
void hello(){
std::cout<<message;
}

private:
std::string message;
};

int main(){
Hello hello("Hello, World!");
hello.hello();
}
