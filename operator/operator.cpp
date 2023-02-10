#include <iostream>

//operator NO get set
class o_class
{
private:
	int _value;
public:
	o_class(int v)
	{
		this->_value = v;
	}
	int operator+(o_class value)
	{
		return (this->_value + value._value);
	}
};

int main(void)
{
	o_class x(10);
	o_class y(20);
	std::cout << x + y << std::endl;
}