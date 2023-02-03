#include <iostream>

int main() {
    int * ptr;
    int ** d_ptr = &ptr;

    std::cout << ptr + 1 << "\n";
    std::cout << d_ptr + 1 << "\n";
    std::cout << &d_ptr[1] << "\n";
    std::cout << &ptr + 1 << "\n";
    
}