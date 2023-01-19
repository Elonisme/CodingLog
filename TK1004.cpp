#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    cout<<x<<endl;
    cout<<y<<endl;
    //case 1: x and y < 10
    if(x<11 || y<11){
        cout<<x*y;
    }
    else{
        int one = y%10;//取个位数
        cout<<one*x<<endl;
        int tow = y/10;//取十位数
        cout<<tow*x<<endl;
        cout<<x*y;  
    }

    return 0;
}