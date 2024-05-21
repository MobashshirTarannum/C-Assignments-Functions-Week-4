//Q3: Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
void odd(int a, int b){
    for(int i=a+1 ;i<b; i++){
        if(i%2!=0) cout<<i<<" ";
    }
    return ;
}
int main (){
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    odd(a,b);
}