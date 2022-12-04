#include <iostream>
#include <fstream>

int main()
{
    std::ifstream dosyaOku("dosya.txt");
    char karakter;

    if(dosyaOku.is_open())
    {
        while (dosyaOku.get(karakter))
        {
            std::cout << karakter <<std::endl;
        }
        dosyaOku.close();
    }
}