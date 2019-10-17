#include <iostream>
using namespace std;

int main() 
{
    system("echo '> Compiling C'");
    system("gcc -o c_hello c_hello.c");
    system("echo '> Compiling C++'");
    system("g++ -o cpp_hello cpp_hello.cc");
    system("echo '> Compiling Java'");
    system("javac java_hello.java");
    system("echo '> Compiling Haskell'");
    system("ghc haskell_hello.hs");
    system("rm haskell_hello.hi");
    system("rm haskell_hello.o");
    system("echo '> Compiling Go'");
    system("go build go_hello.go");

    cout << "compiled: \n";
    system("ls -a");

    system("./.bash_hello");
    system("./c_hello");
    system("./cpp_hello");
    system("./go_hello");
    system("./haskell_hello");
    system("java Hello");
    system("python3 py_hello.py");
    system("perl perl_hello.pl");
    system("ruby ruby_hello.rb");
}