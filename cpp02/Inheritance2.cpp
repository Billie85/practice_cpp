#include <iostream>

class color1
{
public:
	void get_name1();
};

class color2 :public color1 //継承
{
public:
	void get_name2();
};

void color1::get_name1()//関数を作ってる
{
	std::cout << "PINK" << std::endl;
}

void color2::get_name2()
//get_name2はget_name1と同じ挙動だから、そのままget_name1()を呼び出してもOK
{
	color2::get_name1();
	std::cout << "RED" << std::endl;
	return ;
}

int main(void)
{
	color2 c;
	c.get_name1();
	c.get_name2();
	return 0;
}