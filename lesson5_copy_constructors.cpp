#include <iostream>
#include <string>

class test
{
public:
	std::string s;
	test(std::string set_s);
	test(test &pointer);
};

test::test(std::string set_s)
{
	std::cout << "1" << std::endl;
	s = set_s;
}

 test::test(test &
 
 
 
 
 
 
 pointer)//ayumi
{
	std::cout << "2" << std::endl;
	this->s = "kimura";
}

int  main(void)
{
	test num_1("ayumi"); //1
	test p = num_1; //2

	std::cout << num_1.s << std::endl;
	std::cout << p.s << std::endl;
}