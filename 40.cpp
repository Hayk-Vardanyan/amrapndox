#include<iostream>
int main()
{
 int n;
 std::cin >> n;
  int res = 1;
  for(int i = 1; i <= n; ++i)
	  res = res * i;
 
  std::cout << res;
}
