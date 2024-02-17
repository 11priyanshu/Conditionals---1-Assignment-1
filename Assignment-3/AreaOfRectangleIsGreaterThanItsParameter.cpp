//Question - 4. (Area Of The Rectangle Is Greater Than Its Perimeter.)

#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter Length : ";
    cin>>length;

    int breadth;
    cout<<"Enter Breadth : ";
    cin>>breadth;

    int Area = length * breadth;
    int Perimeter = 2 * (length + breadth);

    if(Area > Perimeter){
        cout<<"Area Of The Rectangle Is Greater Than Its Perimeter.";
    }
    else{
        cout<<"Perimeter Of Rectangle Is Greater Than Its Area.";
    }

}