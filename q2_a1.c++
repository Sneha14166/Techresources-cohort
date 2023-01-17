#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter marks of student\n";
    cin>>a;
    if(a>90)
    {
        cout<<"Excellent";
    }
    else if(a>80 && a<=90)
    {
        cout<<"Good";
    }
    else if(a>70 && a<=80)
    {
        cout<<"fair";
    }
    else if(a>60 && a<=70)
    {
        cout<<"Meets expectations";
    }
    else if(a<=60)
    {
        cout<<"Below par";
    }

    return 0;
}
