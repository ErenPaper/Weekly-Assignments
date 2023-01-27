#include <iostream>

int main() {

pointB[1].x = -1;
pointB[0].x = 2.1;
Point2D * ptr = pointB + 1;
std::cout << ptr->x << std::endl;

}