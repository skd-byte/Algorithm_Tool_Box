#include <iostream>
#include <complex>
using namespace std;

namespace skd
{
  template <class T>
  void swap(T&d, T&s)
  {
    T temp = d;
    d = s;
    s = temp;
  }
}

int main()
{
  int m = 5, n = 10;
  double x = 6.5, y = 10.9;
  complex<double> r(5,6.7), s(9,11.5);
  
  cout << "inputs:" << m << " " << n << endl;
  skd::swap(m,n);
  cout << "outputs:" << m << " " << n << endl;
  

  cout << "inputs:" << x << " " << y << endl;
  skd::swap(x,y);
  cout << "outputs:" << x << " " << y << endl;

  cout << "complex inputs:" << r << " " << s << endl;
  skd::swap(r,s);
  cout << "complex outputs:" << r << " " << s << endl;
  return 0;
}
