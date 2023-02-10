#include <iostream>

class test
{
private:
	int num;
public:
	int get(void);
	void set(int);
	test operator=(const test &);
	test operator+(const test &);
};

int test::get(void)
{
	return (this->num);
}

void test::set(int i)
{
	this->num = i;
}

test test::operator+(const test &other)
{
	this->num + other.num;
	return *this;
}

test test::operator=(const test &other)
{
	this->num = other.num;
	return *this;
}

int main(void)
{
	test a, b;
	a.set(20);
	b.set(100);

	a = a + b;
	std::cout << a.get() << std::endl;
	a = b;
	std::cout << a.get() << std::endl;
}