#include <iostream>

class test
{
private:
    int i;
    int j;
public:
    test(){i = 0; j = 0;}
    test(int x, int y){i = x; j = y;}
    void operator=(test&a)
	{ this->i = a.get_i();
	  this->j = a.get_j();
	};
    int get_i(){return this->i;}
    int get_j(){return this->j;}
    //~test();
};

int main()
{
    test t(42, 21);
    test t_cpy;

    t_cpy=(t);
    std::cout<< "t\t" << t.get_i() <<' '<< t.get_j() << std::endl;//42
    std::cout<< "t_cpy\t" << t_cpy.get_i()  <<' '<< t_cpy.get_j() << std::endl;//21
    return 0;
}
