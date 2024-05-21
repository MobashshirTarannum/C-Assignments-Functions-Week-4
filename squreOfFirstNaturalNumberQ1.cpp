//Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;
void square(int x){
    for(int i=1; i<=x; i++){
        int s=i*i;
        cout<<s<<" ";
    }
        return;
    }
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    square(n);
}
