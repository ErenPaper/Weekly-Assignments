#include <iostream>
#include <cstring>

int main() {
// Actual byte size of cmput 101 in char
std::cout << sizeof("cmput 101") << "\n"; 
// Number of characters that are before first null character
std::cout << strlen("cmput 101") << "\n";
// Added 1 to represent actual number of bytes required
std::cout << 1 + strlen("cmput 101") << "\n";
}
