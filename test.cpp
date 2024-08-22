#include <iostream>
 
void foo(int x)
{
    int buf[10];
    if (x == 1000){
        buf[x] = 0; // <- ERROR
    }
}
 
int main()
{
    foo(1000);
    return EXIT_SUCCESS;
}