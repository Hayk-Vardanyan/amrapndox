#include<iostream>
void foo(int x);
int main()
{
	int x;
	std::cin >> x;
	foo(x);	
	return 0;
}

 void foo(int x )
{

	while(x >= 0 ){
		std::cout << x;
		--x;}

}
































