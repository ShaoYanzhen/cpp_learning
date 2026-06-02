#include <iostream>

int main () 
{
    int file_size =100;
    int sales = 9;
    int temp = file_size;
    /*
    std::cout << file_size << std::endl;
    std::cout << sales << std::endl;
    */
    file_size = sales;
    sales = temp;
    std::cout << sales << std::endl;
    std::cout << file_size << std::endl;
    return 0;
}