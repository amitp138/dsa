#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        char start='A'+i-j;
        while(j<=n){
            
            cout<<start<<" ";
            j++;
            start=start+1;
            
        }
        cout<<endl;
        i++;
    }
}



