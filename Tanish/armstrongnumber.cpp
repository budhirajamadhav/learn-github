#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,dig=0,sum=0;
    cin>>n;
    for(int i=n;i>0;i/=10)
        dig++;
    for(int i=n;i>0;i/=10)
        sum+=pow(i%10,dig);
    cout<<sum<<endl;
    if(sum==n)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
