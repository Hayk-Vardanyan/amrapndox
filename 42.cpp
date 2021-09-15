#include<iostream>
void foo(int n);
int main()
{
 int n;
 std::cout << "murqagreq tiv";
 std::cin >> n;
 foo(n);
}
 void foo(int n)
{
 if(n < 0){return;}
 std::cout << n;
 foo(n - 1);
 

}
