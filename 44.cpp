#include<iostream>
int fib(int n);
 int main() 
{
 int n;
 std::cin >> n;
std::cout << fib(n);
 return 0;
}
 int fib(int n)
{
 if(n < 2) {return n;}
  else
     return  fib(n-1) + fib(n - 2);
}
