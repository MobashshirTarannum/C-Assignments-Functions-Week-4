//Q4: Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int countDigit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
 void square(int x){
    cout<<"squaere is : "<<x*x;
    return ;
}
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int c = countDigit(n);
    square(c);
}
       
    