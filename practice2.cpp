#include <iostream>
using namespace std;
int main() {
    /*int number, sum=0;
    int count;
    for (count = 0; count <5; count++) {
        cin>>number;
        sum+=number;
    }
    cout<<sum<<endl;
    cout<<count<<endl;*/
    int long sum=0; int i=0;
    do {
        sum+=i;
        i++;
    }
    while(i<=1000);
    cout<<sum;
}