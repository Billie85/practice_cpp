#include <iostream>
#include <fstream>

//前置インクリメントのやりかた
class test
{
private:
	int x;
public:
	int get();
	void set(int);
	test& operator++(void);

};

int test::get()
{
	return (this->x);
}

void test::set(int i)
{
	this->x = i;
}

test& test::operator++(void)
{
	++this->x;
	return (*this);
}

int main(void)
{
	test a;

	a.set(100);
	++a;
	std::cout << a.get() << std::endl;
}