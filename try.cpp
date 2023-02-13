#include <iostream>

int main(void)
{
    try
    {
        int x = 10;
        int y = 20;

        if (x < y)
        {
            //throw 99;
        }
    }
    catch(int x_1)
    {
        std::cout << "Error Number: " << x_1 << std::endl;
    }
    return 0;
}
