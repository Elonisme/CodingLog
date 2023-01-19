#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n>>i>>j;

    //同一行上格子的位置；
    for (int a = 1; a <= n && a > 0; a++)
    {
        cout<<"("<<i<<","<<a<<")";
    }
    cout<<endl;

    //同列列上格子的位置；
    for (int a = 1; a <= n && a > 0; a++)
    {
        cout<<"("<<a<<","<<j<<")";
    }
    cout<<endl;

    // {左上到右下对角线上的格子的位置}
    int k = 1;
    int b = j-k*i;
    int p = b + 1;//最左上角y坐标
    int q = k*p - b;//最左上角角x坐标
    for (int a = q, b = p; (a<n+1) && (b<n+1); a++,b++){
        if(b < 1){
            continue;
        }
        cout<<"("<<a<<","<<b<<")";
    }
    cout<<endl;

    // {左下到右上对角线上的格子的位置}
    k = -1;
    b = j-k*i;
    p = b - 1;//最左下角x坐标
    q = k*p + b;//最左下角y坐标
    for (int a = p, b = q; (a>0) && (b<n+1); a--,b++){
        if(a > n){
            continue;
        }
        cout<<"("<<a<<","<<b<<")";
    }

    return 0;
}