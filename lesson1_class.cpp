#include <iostream>

class lesson1_class
{
private:
		int x;
		int y;
public:
	int getValue ()
	{
		return (this->x + this->y);
	}

	void setValue (int value1, int value2)
	{
		this->x = value1;
		this->y = value2;
	}
};

int main(void)
{
	lesson1_class hoge;
	int total;

	hoge.setValue(10, 30);
	total = hoge.getValue();
	std::cout << total << std::endl;
}