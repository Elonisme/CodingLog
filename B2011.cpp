#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double a,b;
    cin>>a>>b;
    double c = a/b;
    cout<<fixed<<setprecision(9)<<c;
    return 0;
}