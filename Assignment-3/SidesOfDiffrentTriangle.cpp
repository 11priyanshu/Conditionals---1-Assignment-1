//Question - 5. (check whether a triangle is equilateral, scalene or isosceles triangle).
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter 1st Side Of Triangle : ";
    cin>>a;

    int b;
    cout<<"Enter 2nd Side Of Triangle : ";
    cin>>b;

    int c;
    cout<<"Enter 3rd Side Of Triangle : ";
    cin>>c;

    if(a==b && a==c) cout<<"It Is Equilateral Triangle.";

    else if(a!=b && a!=c) cout<<"It Is Scalane Triangle.";

    else if(a==b && a!=c && b!=c) cout<<"It Is Isosceles Triangle.";

}