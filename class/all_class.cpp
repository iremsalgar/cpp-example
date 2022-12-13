#include <iostream>

class kisi
{
private:
    std::string adi;
protected:
    std::string soyadi;
public:
    static int nesneSayisi;
    kisi(std::string a, std::string s)
    {
        std::cout << "nesne olusuyor" << std::endl;
        this->adi = a;
        (*this).soyadi = s;
        kisi::nesneSayisi++;
    }
    std::string yaz()
    {
        return this->adi + " " + this->soyadi;
    }
    ~kisi()
    {
        std::cout << "nesne siliniyor." << std::endl;
    }
};

int kisi:: nesneSayisi = 0;

int main()
{
    kisi *k;
    kisi k1("irem", "salgar");
    kisi k2("ömer", "piltan");

    k = &k2;

    std::cout <<  k1.yaz() << std::endl;
    std::cout << k->yaz() << std::endl;

    std::cout << "kopya sayisi : " << kisi::nesneSayisi << std::endl; 
}