#include <iostream>
#include <vector>
#include <cstdlib>




using std::vector;
using std::cin;
using std::cout;
using std::max;

long long MaxPairWiseProduct(const vector<int> &number)
{
  long long max_product = 0;
  int n = number.size();
  long long result = 0;

  for(int first = 0; first < n; first++)
  {
    for(int second = first + 1; second <  n; second++)
    {
      result = ((long long)number[first]*number[second]);
      max_product = max(max_product,result);
    }
  }
  return max_product;
}


long long MaxPairWiseProductFast(const vector<int> &numbers)
{
  int maxNum1_idx = -1;
  int maxNum2_idx = -1;
  
  int n = numbers.size();

  for(int i = 0; i < n; i++)
  {
    if((maxNum1_idx == -1)||(numbers[maxNum1_idx] < numbers[i]))
    {
      maxNum1_idx = i;
    }
  }
 

  for(int i = 0; i < n; i++)
  {
    if((maxNum1_idx != i ) && ((maxNum2_idx == -1)||(numbers[maxNum2_idx] < numbers[i])))
    {
      maxNum2_idx = i;
    }
  }
   //cout << maxNum1_idx << ' ' << maxNum2_idx << ' ';
   return ((long long)numbers[maxNum1_idx]*numbers[maxNum2_idx]);
}

  
int main()
{
  int n;
  
  while(1)
  {
    n = rand() % 1000 + 2;
    cout << n << "\n\r";
    vector<int> a(n);

    for (int i =0; i < n ; i++)
    {
      a[i] = rand() % 100000;
      cout << a[i]<< ' ';
    }

    long long result1 = MaxPairWiseProductFast(a);
    long long result2 = MaxPairWiseProduct(a);

    cout <<"\n\r"<< result1 << " "<< result2;
    if(result1 !=result2)
    {
      break;
    }
    else
    {
      cout << "\nOK\n";
    }
  }

  cin >> n;
  vector<int>numbers(n);
  for (int i = 0; i < n ; i++)
  {
    cin >> numbers[i];
  }
  cout << MaxPairWiseProductFast(numbers);
  return 0;
}
