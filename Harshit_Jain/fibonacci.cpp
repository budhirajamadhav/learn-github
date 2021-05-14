#include <iostream>
using namespace std;

int main()
{
    int number;                                          //No. till which Fibonacci nos. to be printed
    cin >> number;

    if(number>0)
    {

    
        int arr[number]={0};                                //Keeping the first no. of series fixed as 0
        cout<<arr[0]<<endl;
    
            for(int count=1; count<number; count++)
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
