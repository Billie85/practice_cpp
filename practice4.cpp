#include <iostream>
#include <fstream>

class test
{
private:
public:
    int i;
    const int j ;
    //test(){i = 0; j = 0;}
    test(int x, int y) : j(y)
	{i = x;
	}
	test(test& hoge) :j(hoge.get_j())//constが未定義のまま走るのはよくない。後々いじれないから。ここで初期化する。
	{
		std::cout << " Copy constructor called " << std::endl;
		//this->operator=(hoge);
	}

    int get_i(){return this->i;}
    int get_j(){return this->j;}
 /*    test &operator=(test&b)//operator=は外に出してはいけない。
	{ 
		std::cout << " Copy assignment operator called " << std::endl;
		this->i = b.get_i();
	  	this->j = b.get_j();
	 	return(b);
	} */
    //~test();
};

	std::ostream &operator<< (std::ostream &os, test &t)
	{
		os << t.get_i() <<' '<< t.get_j();
		return(os);
	}

int main()
{
    test t(42, 21);
   /*  test t_cpy(t);
	test t_cpy2;
	test t_cpy3;

    t_cpy3=t_cpy2=t_cpy=t;
    std::cout << "t\t" << t << std::endl;//42
    std::cout << "t_cpy\t" << t_cpy << std::endl;//21 */
    return 0;
}
