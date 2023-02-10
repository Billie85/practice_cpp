#include <iostream>

//operator+ and get set
class test_class
{
private:
	int num;
public:
	int get(void);
	void set(int i);
	test_class operator+(test_class t);
};

int test_class::get(void)
{
	return(this->num);
}
void test_class::set(int i)
{
	this->num = i;
}

test_class test_class::operator+(test_class t)
{
	test_class total;
	total.num =  this->num + t.num;
	return (total);
}

int main(void)
{
	test_class x, y;
	x.set(10);
	y.set(10);
	x = x + y;
	std::cout << x.get() << std::endl;
}