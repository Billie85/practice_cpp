#include <iostream>

class lesson2_constructors
{
private:
public:
	float x, y;
	lesson2_constructors(float a, float b)
	{
		x = a;
		y = b;
	}
	void print(void)
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int main(void)
{
	lesson2_constructors hoge(10, 10.90);
	hoge.print();
	return 0;
}
