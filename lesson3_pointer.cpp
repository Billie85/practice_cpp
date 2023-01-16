#include <iostream>

void chanege(int *hoge)
{
	int i = 30;
	hoge = &i;
	std::cout << hoge << std::endl;
}

int main(void)
{
	int i = 10;
	int *hoge = &i;
	std::cout << hoge << std::endl;
	chanege(&i);
}
