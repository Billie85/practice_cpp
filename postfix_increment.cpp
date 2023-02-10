#include <iostream>
#include <fstream>

//後置インクリメントのやりかた(x++)

class test
{
private:
	int x;
public:
	int get(void);
	void set(int);
	test operator++(int);
};

test test::operator++(int)
{
	test r = *this;
	++(this->x);
	return (r);
}

int test::get(void)
{
	return(this->x);
}

void test::set(int i)
{
	this->x = i;
}

int main(void)
{
	test a;
	a.set(10);
	a++;
	std::cout << a.get() << std::endl;
}