//Question - 6. (Determine The Student Scoring Least Marks).

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Marks Of A : ";
    cin>>a;

    int b;
    cout<<"Enter Marks Of B : ";
    cin>>b;

    int c;
    cout<<"Enter Marks Of c : ";
    cin>>c;

    if(a<b && a<c){
        cout<<a<<" Is Least";
    }

    else if(b<a && b<c){
        cout<<b<<" Is Least";
    }

    else if(c<a && c<b){
        cout<<c<<" Is Least";
    }
}