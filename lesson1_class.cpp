#include <iostream>

class test_class
{
private:
	std::string name;
	void print(std::string n);
public:
	test_class(std::string zombi);
};

void test_class::print(std::string n)
{
	std::cout << n << std::endl;
}

test_class::test_class(std::string zombi)
{
	this->name = zombi;
	print(this->name);
}

int main(void)
{
	test_class test_class("ayumi");
	return 0;
}