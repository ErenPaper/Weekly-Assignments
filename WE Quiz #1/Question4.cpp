#include <iostream>
#include <typeinfo>

int main() {

char* p1, p2;

std::cout << typeid(p1).name() << "\n";
std::cout << typeid(p2).name() << "\n";

}