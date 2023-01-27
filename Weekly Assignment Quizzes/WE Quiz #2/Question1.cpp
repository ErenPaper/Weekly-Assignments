#include <iostream>

int main() {

// int * const ptr = NULL, var;     #Error a)
// ptr = &var;

// long *ptr = 0x7ffeebfa2a9c;      #Error b)


// char word[20] = "first name";    #Error c)
// &word[4] = NULL;


unsigned int var = 10;              d)
const unsigned int * ptr = &var;
var += *ptr;

short * ptr = NULL, var;            e)
ptr = &var;


return 0;
}