#include <iostream>

// @ Hello World, IMPL_CppHelloWorld, impl, [AOU__COMP_1__IMPLEMENTATION]
void print_hello_world() {
    std::cout << "Hello, World!" << std::endl;
}

/*
@rst
.. impl:: Hello World 2
   :id: IMPL_CppHelloWorld2

   This is the second implementation of the Hello World example in C++.
@endrst
*/
void print_hello_world2() {
    std::cout << "Hello, World2!" << std::endl;
}

// @need-ids: AOU__COMP_1__IMPLEMENTATION
int main() {
    print_hello_world();
    print_hello_world2();
    return 0;
}
