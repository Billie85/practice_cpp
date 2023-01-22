#include <iostream>

class test
{
private:
    int i;
public:
    test(){i = 0;}
    test(int x){i = x;}
   test(test &x){i = x.get_i();}
    void operator=(test &x) {this->i = x.get_i();}
    int get_i(){return this->i;}
    //~test();
};

int main()
{
    test t(42);
    test t_cpy;

    t_cpy.operator=(t);//42
    std::cout<< "t" << t.get_i() << std::endl;//42
    std::cout<< "t_cpy" << t_cpy.get_i() << std::endl;//42
    return 0;
}