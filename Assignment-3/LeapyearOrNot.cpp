//Question - 3. (determine whether the year is a leap year or not.)

#include<iostream>
using namespace std;
int main(){
    int Year;
    cout<<"Enter Year : ";
    cin>>Year;

    if(Year%4==0){
        cout<<"It Is A Leap Year";
    }

    else{
        cout<<"It Is Not A Leap Year";
    }
}