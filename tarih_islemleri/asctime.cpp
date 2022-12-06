#include <iostream>
#include <ctime>

int main()
{
    time_t tarih = time(0);
    struct tm *tarih_bilgisi = localtime(&tarih);
    char mTarih[50];

    std::cout << asctime(tarih_bilgisi) << std::endl;

    strftime(mTarih, sizeof(mTarih), "%d-%m-%y %H:%M:%S", tarih_bilgisi);

    std::cout << mTarih << std::endl;
}