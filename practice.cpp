#include <stdlib.h>
#include <iostream>
#include <math.h>

class test
{
private:
    int i;
public:
    test(/* args */);//0に設定
    test(int hoge);//引数をそのまま設定
    test(int *hoge);//先頭の要素を設定
    test(char const *hoge);//文字列を数値に直して設定
    test(double hoge);//整数の部分を設定

    int get_i(){return this->i;}
    //~test();
};

test::test()//0に設定
{
	this->i = 0;
}

test::test(int hoge)
{
	this-> i = hoge;
}

test::test(int *hoge)
{
	this->i = *hoge;
}

test::test(char const *hoge)
{
	this->i = atoi(hoge);
	std::cout << "total " << this->i + 10 << std::endl;
}

test::test(double hoge)
{
	this->i = floor(hoge);
}


#include <iostream>

int main()
{
    int x = 21;
    test t0;
    test t1(42);
    test t2(&x); 
    test t3("36"); 
    test t4(99.87);
    std::cout<< "t0" << t0.get_i() << std::endl;//0
    std::cout<< "t1" << t1.get_i() << std::endl;//42
    std::cout<< "t2" << t2.get_i() << std::endl;//21
    std::cout<< "t3" << t3.get_i() << std::endl;//36
    std::cout<< "t4" << t4.get_i() << std::endl;//99
    return 0;

}