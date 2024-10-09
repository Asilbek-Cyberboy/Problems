#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    int a = rand() % 100;
    int b;
    int count=1;
    char letter;
    cout<<"Do you want to play";
    cin>>letter;
    while(letter=='y') {
        cin>>b;
        while(b!=a) {
            if(b>a) {
                cout<<"enter lower"<<endl;

            }
            else if(b<a) {
                cout<<"enter upper"<<endl;
            }
            cin>>b;
            count++;
        }
        if(a==b) {
            cout<<"Coreccto"<<endl;
            cout<<count<< "your guess times";
        }
        cout<<"again??"<<endl;
        cin>>letter;
        if(letter=='n') {
            break;
        }
    }
    return 0;
}
