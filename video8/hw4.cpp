#include <iostream>
using namespace std;
int fib(int a)
{
    int l=0,b=1;
    int ans;
    if (a==1)
    {
        return 0;
    }
    else if (a==2)
    {
        return 1;
    }
    
    for (int i = 0; i < a-2; i++)
    {
     ans=l+b;
     l=b;
     b=ans;   
    }
    
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << "term of the fibonacccci series is" << fib(n);
}