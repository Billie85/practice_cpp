#include <iostream>

class lesson1_class
{
private:
	std::string name;
	void print(std::string n);
public:
	lesson1_class(std::string zombi);
};

void lesson1_class::print(std::string n)
{
	std::cout << n << std::endl;
}

lesson1_class::lesson1_class(std::string zombi)
{
	this->name = zombi;
	print(this->name);
}

int main(void)
{
	lesson1_class lesson1_class("ayumi");
	return 0;
}