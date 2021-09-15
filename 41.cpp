#include<iostream>
int foo(int n);
 int main()
{
 int n;
 std::cin >> n;
std::cout << foo(n);
return 0;
}
 int foo(int n)
{
 if(n < 2) {return 1;}
  
   else
        return n * foo(n - 1);
}
