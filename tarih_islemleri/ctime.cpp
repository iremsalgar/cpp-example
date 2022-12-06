#include <iostream>
#include <ctime>

int main()
{
    time_t tarih = time(0);
    std::cout << ctime(&tarih) << std::endl;
}