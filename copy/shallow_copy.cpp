#include <string>
#include <iostream>

//operator= と　コピーコンストラクタの違いが分かるコード
//we don't need to write it manually and this is called as shallow copy
class test
{
private:
	/* data */
public:
test();
	test(const test &other);
	test &operator=(test const &other);
	void getvalue();
	~test();
};

test::test()
{
	std::cout << "default called" << std::endl;
}

void test::getvalue()
{
	std::cout << "value" << std::endl;
}

test::test(const test &other)
{
	std::cout << "copy constructor called" << std::endl;
}

test &test::operator=(test const &other)
{
	std::cout << "operator= called" << std::endl;
	return *this;
}

test::~test()
{
	//std::cout << "finish" << std::endl;
}

int main(void)
{
	test obj1;

	std::cout << "====copy constructor====" << std::endl;
	test obj2 = obj1;

	std::cout << std::endl;
	std::cout << "==== operator= ====" << std::endl;
	test obj3;
	obj3 = obj1;
	return 0;
}