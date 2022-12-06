#include <iostream>

int toplama (int s1, int s2)
{
    return s1 + s2;
}

int carpma (int s1, int s2)
{
    return s1 * s2;
}

int main()
{
    int (*fonksiyon)(int, int);

    fonksiyon = &carpma;
    std::cout << fonksiyon(10, 20) << std::endl;

    fonksiyon = &toplama;
    std::cout << fonksiyon(10, 20) << std::endl;
}