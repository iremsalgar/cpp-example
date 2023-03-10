#include <iostream>

int main()
{
    int a = 4;
    int *b = &a;
    int c = a;

    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << *b << std::endl;
    std::cout << b << std::endl;
    std::cout << &b << std::endl;
    std::cout << c << std::endl;
    std::cout << &c << std::endl;
    
}