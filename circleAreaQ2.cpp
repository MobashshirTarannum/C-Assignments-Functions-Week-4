//Q2 : Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
float Area (int r){
    float ar = 3.14*r*r;
    return ar;
}
int main(){
    int r;
    cout<<"enter radius of circle : ";
    cin>>r;
    cout<<"area of circle is : "<<Area(r);
}