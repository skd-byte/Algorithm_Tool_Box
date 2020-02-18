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
#include <stdio.h>

void func1();
void func2();
void func3();
void func4();

typedef struct __context_t context_t;
typedef (*functionHandler)(context_t*);

struct __context_t
{
    functionHandler *funcHandler;
};


const unsigned long int handler[2][2] = 
{
    (unsigned long int)func1,
    (unsigned long int)func2,
    (unsigned long int)func3,
    (unsigned long int)func4,
};

static context_t a = {
                    (functionHandler *)handler,
                  };



void func1(context_t*d)
{
    printf("1\n");
}

void func2(context_t*d)
{
    printf("2\n");
}

void func3(context_t* d)
{
    printf("3\n");
}

void func4(context_t* d)
{
    printf("4\n");
}

int main()
{
    context_t* c =&a;
    functionHandler z=func1;
    
    //void (*fun_ptr)(context_t*) = func1;
    (z)(c);
    (*c->funcHandler)(c);
    

    return 0;
}
