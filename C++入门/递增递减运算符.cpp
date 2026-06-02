#include <iostream>

int main () 
{
    int x = 10;
    std::cout << x << std::endl;
    //int y = x++;
    //std::cout << y << std::endl;
    int z = x++;
    std::cout << z << std::endl;
    return 0; 

}