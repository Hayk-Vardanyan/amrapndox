#include <iostream>
void foo(std::string str);
int main()
{
	std::string str;
	std::cout << "Enter your string please\t";
	std::cin >> str;
	foo(str);
}
void foo(std::string str)
{
for(int i = 0; i < str.size(); ++i){
if(str[i] >= 'a' && str[i] <= 'z'){
	str[i] -= 32;}
}
std::cout << str;
}
