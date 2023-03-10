#include <iostream>

int main ()
{
    std::string c ("selam");

    std::cout << c.length() << std::endl;
    std::cout << c.find("el", 0) << std::endl;
    std::cout << c.substr(2, 2) << std::endl;

    //number

    double a(5.5);
    a++;
    std::cout << a << std::endl;
    std::cout << 10 / 3 << std::endl;
    std::cout << 10.0 / 3.0 << std::endl;
}   