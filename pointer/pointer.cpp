#include <iostream>

int main()
{
    int sayi = 123;

    std::cout << "sayının kendisi: " << sayi << std::endl;
    std::cout << "sayının adresi: " << &sayi << std::endl;

    std::cout << std::endl;

    int *ptr = &sayi;

    std::cout << "pointerın gösterdiği adres: " << ptr << std::endl;
    std::cout << "pointerın gösterdiği adres değeri: " << *ptr << std::endl;
    std::cout << "pointer adresi: " << &ptr << std::endl;

}