#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int sides = 6;

inline int r_sides()
{
  return (rand() % sides + 1);
}

int main()
{
  const int n_dice = 2;
  srand(clock());
  cout << "\nEnter no. of trials: ";
  int trials;
  cin >> trials;
  
  int * outcomes = new int[n_dice * sides + 1];

  for (int j = 0; j < trials; j++)
  {
    int roll = 0;
    for (int k = 1; k <= n_dice; k++)
    {
      roll += r_sides();
    }
    outcomes[roll]++;    
  }
   
  cout << "probability\n";     
  for (int j = 2; j < n_dice * sides + 1; ++j)
  cout << "j = " << j << " p = " << static_cast<double>(outcomes[j])/trials << endl;
}


