#include <iostream>
using namespace std;

int main()
{
    int n;                                          //No. till which Fibonacci nos. to be printed
    cin >> n;

    if(n>0)
    {

    
        int arr[n]={0};                                //Keeping the first no. of series fixed as 0
        cout<<arr[0]<<endl;
    
            for(int count=1; count<n; count++)
            {   
                if(count==1)
                {
                    arr[count]=1;                       //Keeping the second no. of series fixed as 1
                }
                
                else
                {
                    arr[count]=arr[count-1]+arr[count-2];
                }
            
                cout<<arr[count]<<endl;
            }
    }        
}