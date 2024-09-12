#include <iostream>
using namespace std;
int main() {
    float x , y;
    cout<<"Give heights: "<<endl;
    cin>>x>>y;
    y *=30.48;
    cout<<(y>x)<<endl;
    //cout<< x << y <<endl;
    /*if (y>x) {
        cout<<"1"<<endl;
    }
    else {
         cout<<"0"<<endl;
    }*/
}