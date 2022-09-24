#include <iostream>
#include<math.h>
using namespace std;
int main(){   
    int n,i=0;
    cin>>n;
    if(n<0){
      n=-1*n;
    }
   float ans=0;
    while(n!=0){
        int bit = n&1; 
        ans = (bit * pow(10,i))+ans; 
        n=n>>1; 
        i++;
    }
  cout<<"answer is "<< ans << endl;
    return 0;}