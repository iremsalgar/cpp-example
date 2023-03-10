#include <iostream>
#include <cmath>

int main()
{
    //pow() sayıların üssünü almamızı sağlar
    std::cout << pow(3, 2) << std::endl;
    std::cout << pow(3, 5) << std::endl;

    //sqrt() sayıların karekökünü bulur
    std::cout << sqrt(3) << std::endl;
    std::cout << sqrt(36) << std::endl;
    std::cout << sqrt(4.4) << std::endl;

    //round() sayıları en yakın tam sayıya yuvarlar
    std::cout << round(4.3) << std::endl;
    std::cout << round(6.5) << std::endl;

    //floor() sayıları bir önceki tam sayıya yuvarlar
    std::cout << floor(2.1) << std::endl;
    std::cout << floor(2.999999) << std::endl;

    //ceil() sayılaro bir sonraki tam sayıya yuvarlar
    std::cout << ceil(3.3) << std::endl;
    std::cout << ceil(7) << std::endl;

    //fmax() sayılardan maksimumu bulur
    std::cout << fmax(30, 10) << std::endl; 
    std::cout << fmax(3, 10) << std::endl; 
    //fmin() sayılardan minimum olanı bulur
    std::cout << fmin(30, 10) << std::endl;
    std::cout << fmin(3, 10) << std::endl;  
}