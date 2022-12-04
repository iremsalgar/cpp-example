#include <iostream>

int main()
{
    int sonuc = remove("dosya.txt");

    if (sonuc == 0)
        std::cout << "dosya silindi";
    else
    {
        std::cerr << "dosya silinemedi";
        return -1;
    }
    return 0;
}