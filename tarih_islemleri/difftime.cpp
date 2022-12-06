#include <iostream>
#include <ctime>

int main()
{
    time_t tarih = time(0);
    struct tm *tarih_bilgisi = localtime(&tarih);

    tarih_bilgisi->tm_hour = 0;
    tarih_bilgisi->tm_min = 0;
    tarih_bilgisi->tm_sec = 0;
    tarih_bilgisi->tm_mon = 0;
    tarih_bilgisi->tm_mday = 1;

    int gecenGunSayisi = difftime(tarih, mktime(tarih_bilgisi)) / (60 * 60 * 24);

    std::cout << gecenGunSayisi << std::endl;
}