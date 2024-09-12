#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Give the number of students: "<< endl;
    cin>>N; // taking input
    cout << (50-(N%50))%50 << endl; //giving output
    return 0;
}