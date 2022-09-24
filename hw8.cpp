#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int i=1;
    
    while(i<=n){
        //first pattern
       int start=1;
        int j=n-i+1;
        while(j){
            cout<<start<<" ";
            start++;
            j--;
        }
        // triangle
       int x=2*i-2;
        while(x>0){
            cout<<"x"<<" ";
           
            x=x-1;
        }
        //second pattern
        int g=n-i+1;
         while(g){
            cout<<g<<" ";
            g--;
        }
        cout<<endl;
        i++;
    }
}



