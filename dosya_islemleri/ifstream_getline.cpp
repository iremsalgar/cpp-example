#include <iostream>
#include <fstream>

int main()
{
    std::ifstream dosyaOku("dosya.txt");
    std::string satir;

    if (dosyaOku.is_open())
    {
        while ( std::getline(dosyaOku, satir))
        {
            std::cout << satir << std::endl;
        }
        dosyaOku.close();
    }
}