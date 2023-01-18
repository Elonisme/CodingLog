#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // deta 新生资源率
    // man*consume*years=deta*years
    // x*consume*a = deta*a
    // y*consume*b = deta*b
    // x*consume*a - deta*a = y*consume*b - deta*b
    // deta*b - deta*a = y*consume*b - x*consume*a
    // (b - a)*deta = consume(y*b - x*a)
    // deta = consume(y*b - x*a)/(b - a)
    // deta*years = z*consume*years
    // z = (deta*years) / (consume*years)
    //   = deta/consume
    //   = (y*b - x*a)/(b - a)
    double x,a,y,b,z;
    cin>>x>>a>>y>>b;
    z = (y*b -x*a)/(b - a);
    cout<<fixed<<setprecision(2)<<z<<endl;
    return 0;
}