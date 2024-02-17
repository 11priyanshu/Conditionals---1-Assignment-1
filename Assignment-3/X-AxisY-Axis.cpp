//Question - 7. (It lies on the x-axis, y-axis or at the origin, viz. (0, 0)).
#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter X-Y Cordinates : ";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"Point Lies On The Origin";
    }

    if(x==0 && y!=0){
        cout<<"Point Lies On The Y-Axis";
    }
    if(x!=0 && y==0){
        cout<<"Point Lies On The X-Axis";
    }
    if (x != 0 && y != 0)
        cout << "The points lie on the plane.";
}