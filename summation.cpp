#include <iostream>
#include <vector> // include vector library

using namespace std;

const int vectorSize = 40; // define vector size

namespace skd
{
  template <class summable>
  inline void sum(summable &p, summable n, vector<summable> &d)
  {
    p = 0;
    for(int i = 0; i < n; ++i)
    {
      p = p + d[i];
    }
  }
}

int main()
{
  vector<int>data;

  for(int i = 0; i < vectorSize; ++i)
  {
    data.push_back(i);
  }
    
  int accum;
  skd::sum(accum, vectorSize, data);

  cout << "sum is " << accum <<endl ;

  return 0;
}
