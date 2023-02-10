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
    
    return 0;
}