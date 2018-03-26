#include <iostream>
using namespace std;
int a;
int main()
{

    while(cin>>a)
    {
        while(a!=1)
        {
            a=a%2==0?a/2:3*a+1;
            cout<<a<<endl;
        }
    }
    return 0;
}
