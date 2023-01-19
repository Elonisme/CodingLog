#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int tmp = 0;

    //case 1: x and y < 10
    if(x<10 || y<10){
        if( y > x && y > 9){
        tmp = y;
        y = x;
        x = tmp; 
        }
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<x*y;
    }
    else{
        cout<<x<<endl;
        cout<<y<<endl;
        int one = y%10;//取个位数
        cout<<one*x<<endl;
        int tow = y/10;//取十位数
        cout<<tow*x<<endl;
        cout<<x*y;  
    }

    return 0;
}