#include<iostream>
#include<string>
std::string  foo(std::string str );
int main()
{
 std::string str;
 std::string result;

 std::cout << "mutqagreq tox" << std::endl;
  std::cin >> str;
 result = foo(str);
  std::cout << result; 
}
std::string  foo(std::string  str)
{
   std::string str2;	

  for(int  i = str.size(); i >= 0; --i)
  {
	str2 += str[i];
  }	  
     return str2; 
}
