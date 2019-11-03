#include <iostream>

using namespace std;

int sumOfTwoInt(const int &a, const int &b)
{
  int res = a + b;
  return res;
}

int main()
{
  int num1;
  int num2;
  
 // cout << "num1 = ";
  cin >> num1;
 // cout << "num2 = ";
  cin >> num2;
  
  cout << "sum of two integers = " << sumOfTwoInt(num1,num2);
}