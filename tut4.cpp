#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo=9;
    glo=28;
    int a=9, b=6;
    float pi=3.14;
    char c='d';
    sum();
    bool is_true = false;
    cout<<glo<< is_true;
    
    cout<<"This is the tutorial 4.\n Here is the value a is "<<a<<". \nThe value of b is " <<b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of c is "<<c;

 
    return 0;

}