#include <iostream>
using namespace std;
int main() {
    /*int sum= 0;
    int number;
    cout<<"Enter a number:";
    cin>>number;
    do {
        sum +=number;
        cin>>number;
    } while (number!=0);
    cout<<sum;*/
    int total=0; int number= 0; cout<<"Enter number: ";
    do {
        total = total +number;
        cin>>number;
    }
    while(number>0);
    cout<<total;

}