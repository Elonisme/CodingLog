#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double r,d,c,s;
    double pi = 3.14159;
    cin>>r;
    d = 2*r;
    c = 2*pi*r;
    s = r*r*pi; 
    cout<<fixed<<setprecision(4)<<d<<" "<<setprecision(4)<<c<<" "<<setprecision(4)<<s;
    return 0;
}