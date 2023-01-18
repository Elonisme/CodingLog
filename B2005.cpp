#include <iostream>
using namespace std;
int main(){
    char star;
    cin>>star;
    for (int i = 0; i < 3; i++)
    {
        if (i==0)
        {
            cout<<"  "<<star<<endl;
        }
        else if (i==1)
        {
            cout<<" ";
            for (int j = 0; j < 3; j++)
            {
                cout<<star;
            }
            cout<<endl;
        }
        else{
            for (int j = 0; j < 5; j++)
            {
                cout<<star;
            }
        }
        
    }

    return 0;
}