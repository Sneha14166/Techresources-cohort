#include <iostream>
using namespace std;

int main() {
    int t,n,i,c,j;
    cout<<"Enter no. of times you want to test\n";
    cin>>t;
    for(i=1;i<=t;i++)
    {
    cout<<"Enter number you want to test\n";
    cin>>n;
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
            {
             c++;
           
            }
        }
            if(c==2)
            {
            cout<<"Number is prime\n";
            }
            else{
                cout<<"Number is not prime\n";
            }
            
        
    }
