#include <iostream>

class kisi{
public:
    std::string adi;
    std::string soyadi;
};

int main()
{
    kisi k1;
    k1.adi = "irem";
    k1.soyadi = "salgar";

    std::cout << "k1 adı: " << k1.adi << std::endl;
    std::cout << "k1 soyadi: " << k1.soyadi << std::endl;
}