//Question - 2. (Area Is Larger Than Circumference).

#include<iostream>
using namespace std;
int main(){
    int Radius;
    cout<<"Enter Radius : ";
    cin>>Radius;

    float Area = 3.14 * Radius * Radius;
    float Circumference = 2 * 3.14 * Radius;
    if (Area > Circumference) {
        cout<<"Area Is Greater Than Circumference.";
    }
     else{
            cout<<"Circumference Is Greater Than Area";
        }
}