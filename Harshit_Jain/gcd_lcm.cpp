#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int n1=num1;                //storing nos. in temporary variables
    int n2=num2;
    
    while(n1!=n2)
    {
        if(n1>n2)
        n1=n1-n2;
        
        else
        n2=n2-n1;
    }
    
    cout<<n1<<endl;             //GCD
    
    cout<<(num1*num2)/n1;       //gcd*lcm=num1*num2
}