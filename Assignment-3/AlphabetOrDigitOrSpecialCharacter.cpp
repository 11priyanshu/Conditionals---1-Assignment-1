//Question - 9. (Check Whether It Is The Alphabet, Digit Or Special Character).
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Value : ";
    cin>>ch;
    
    int ascii = (int)ch;
    cout<<ascii;
    
    if(ascii>=33 && ascii<=47){
        cout<<" Ascii Value ";
        cout<<",It Is Special Charecter";
    }
    else if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
        cout<<" Ascii Value ";
        cout<<",It Is An Alphabet";
    }
    else if(ascii>=48 && ascii<=57){
        cout<<" Ascii Value ";
        cout<<",It Is Digit";
    }
}