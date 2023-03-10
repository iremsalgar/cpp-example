#include <iostream>

int main()
{
    std::string a ("selam");
    std::string &b = a;
    char &c  = a[1]; 
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}