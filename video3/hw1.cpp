#include <iostream>
using namespace std;

int main() {
char a;
    cout<<"enter the character";
    cin>>a;
    int ascii=(int)a;
if(ascii>=60 && ascii<=90){
    cout<<"it is an uppercase";
}
else if(ascii>=97 && ascii<=122){
    cout<<"it is an lowercase";
}
else if (ascii>=48 && ascii<=57){
    cout<<"it is an numeric";
}
}