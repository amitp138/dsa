#include <iostream>
using namespace std;
int bits(int n)
{
    int count=0;
    while(n!=0){
        int digit=n&1;
        if (digit==1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main()
{
    int a,b;
    cin >> a>>b;
    int abits=bits(a);
    int bbits=bits(b);
    cout << "total set bits are " << abits+bbits;
}