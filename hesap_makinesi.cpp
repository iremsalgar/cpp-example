#include <iostream>

int main()
{
    double sayi1 = 0.0;
    double sayi2 = 0.0;
    double sonuc = 0.0;
    char islem = 'x';

    std::cout << "<sayi1> <islem> <sayi2> :" << std::endl;
    std::cin >> sayi1 >> islem >> sayi2;

    switch (islem)
    {
        case '+':
        sonuc = sayi1 + sayi2;
            break;
        case '-':
        sonuc = sayi1 - sayi2;
            break;
        case '*':
        sonuc = sayi1 * sayi2;
            break;
        case '/':
        sonuc = sayi1 / sayi2;
            break;
        default:
            break;
    }

    std::cout << sonuc << std::endl;
}