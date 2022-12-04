#include <iostream>
#include <fstream>

int main()
{
    std::ofstream dosyaYaz("dosya.txt");

    if(dosyaYaz.is_open())
    {
        dosyaYaz << "dosyaya yazılacak yazı" ;
        dosyaYaz.close();
    }
}