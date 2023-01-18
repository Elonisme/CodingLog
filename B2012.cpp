#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a;
    cin>>b;
    c = b/a;
    c = c*100;
    cout<<fixed<<setprecision(3)<<c<<"%";
    return 0;
}