#include <iostream>

class lesson1_class
{
	public:
		int x;
		int y;
		int count_function()//関数をクラスの中に入れてあげることで、hoge.count_functionで呼んであげることができる。
		{
			return (x + y);
		}
};

int main(void)
{
	int store;
	lesson1_class hoge;
	hoge.x = 4;
	hoge.y = 5;
	store = hoge.count_function();
	std::cout << store << std::endl;
}