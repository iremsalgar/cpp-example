#include<iostream>

int main()
{
    int faktoriyel = 1;
    int sayi = 0;

    std::cout << "sayı giriniz" << std::endl;
    std::cin >> sayi;

    for (int i = 2; i <= sayi; i++)
    {
        faktoriyel *= i;
    }
    std::cout << faktoriyel;
}