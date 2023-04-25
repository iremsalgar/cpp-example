#include <iostream>

int main()
{
    try
    {
        int x = 5;
        int y = 0;
        if (y == 0)
        {
            throw std::runtime_error("Division by zero");
        }
        int z = x / y;
    }
    catch (const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}