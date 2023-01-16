#include <iostream>

class lesson1_class
{
private:
		int x;
		int y;
public:
	 int count();
};

int lesson1_class::count()
{
	this->x = 5;
	this->y = 9;
	return (this->x + this->y);
}

int main(void)
{
	lesson1_class hoge;

	std::cout << hoge.count() << std::endl;
}