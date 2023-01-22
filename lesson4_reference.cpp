/* #include <iostream>

void value(int *hoge)
{
	(*hoge)++;
}

int main(void)
{
	int i = 1;
	int *hoge = &i;

	value(hoge);
	std::cout << i << std::endl;
	return 0;
}
 */

#include <iostream>

int main(void)//NO
{
	int a = 5;
	int b = 10;

	int &ref = a;
	ref = b;
	std::cout << &ref << std::cout;
}


#define LOG(x) std::cout << x << std::endl;

#include <iostream>

int main(void)//NO
{
	int a = 5;
	int b = 10;

	int *ref = &a; //5
	*ref = 100;
	ref = &b; //200
	*ref = 200;

	LOG(a);
	LOG(b);


}