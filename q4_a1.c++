#include <iostream>
using namespace std;
int main() {
    int low,high,i,c,j;
    cout<<"Enter lower limit\n";
    cin>>low;
    cout<<"Enter upper limit\n";
    cin>>high;
    for(i=low;i<=high;++i)
    {
        c=0;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        
        
            if(c==0)
            
            {
        
             cout<<"prime numbers are\n"<<i;
             cout<<"\n";
            }
        
        
    }
    
    
            
        
    
    

    return 0;
}
