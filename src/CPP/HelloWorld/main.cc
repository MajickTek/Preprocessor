/*
This is all legal because the preprocessor/compiler combines all the headers into one file.
This means that (during compilation) this code will become:
std::cout << "Hello, world!" << std::endl;
*/

#include <iostream>

int main() {
    #include "cout.cc" // std::cout
    #include "pipe.cc" // <<
    #include "helloworld.cc" // "hello, world
    #include "pipe.cc" // << (you can include it twice)
    #include "endl.cc" // std::endl;
    #include "semicolon.cc" // ;
}
