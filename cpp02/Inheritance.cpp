#include <iostream>

//多重継承
class color1
{
public:
	void getName1();
};

class color2
{
public:
	void getName2();
};

class color3 :public color1 , public color2
{
public:
	void getName3();
};

void color1::getName1()
{
	std::cout << "It's RED" << std::endl;
	return ;
}

void color2::getName2()
{
	std::cout << "It's PINK" << std::endl;
	return ;
}

void color3::getName3()
{
	std::cout << "It's BLUE" << std::endl;
	return ;
}

int main(void)
{
	color3 C;
	C.getName1();
	C.getName2();
	C.getName3();
	return 0;
}