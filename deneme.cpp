#include <iostream>

int deneme(int *c, int *d)
{
    std::cout << *c << std::endl;
    std::cout << &c << std::endl;
    std::cout << c << std::endl;

    *c = 10;
    *d = 20;

    std::cout << *c << std::endl;
    std::cout << &c << std::endl;
    std::cout << c << std::endl;
    return 0;
}

int main()
{
    int a = 5;
    int b (4);

    std::cout << "ilk:" << a << std::endl;
    std::cout << "ilk adres:" << &a << std::endl;

    deneme(&a, &b);
    std::cout << "son:" << a << std::endl;
    std::cout << "son adress:" << &a << std::endl;


}