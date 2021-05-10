#include<iostream>
using namespace std;

void fib(int number)
{
    int nextTerm=0 , term1=0 , term2=1;
     
     for(int index = 0; index <= number ; index++)
     {
         cout<< term1 << " ";
         nextTerm = term1 + term2;
         term1 = term2;
         term2 = nextTerm;
     }
     return;
}

int main()
{
    int number;
    cin >> number;

    fib(number);

    return 0;
}