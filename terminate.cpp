#include <iostream>
#include <string>

int main(void)
{
	int i;

	std::cout << "Enter a number ";
	std::cin >> i;
	try
	{
		if (i != 0)
		{
			std::string *N = new std::string("This is it's not a zero!");
			throw N;
			//string型のもの
		}
		else
		throw 100;　//int型のもの
	}
	//catch は基本的にchar*しか受け取らないので、
	//もしもほかの型が来た場合にterminateが呼びだされて終了してしまう。
	catch(std::string *e)
	{
		std::cout << "Error  string:" << std::endl;
	}
	catch(int e)
	{
		std::cout << "Error int:" << std::endl;
	}
	
}