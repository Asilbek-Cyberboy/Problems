#include <iostream>
#include <cmath>
using namespace std;
int main() {
    /*int N;
    cin>>N;
    for(int i=1;i<=N;i++) {
        int factorial = 1;
        int T;
        cin>>T;
        for(int j=1;j<=T;j++) {
            factorial=factorial*j;
        }
        cout<<factorial<<endl;
    }
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        cout<<endl;
        for(int j=1; j<=n; j++) {
            cout<<"*";
        }
    }
    int n;
    cin>>n;
    for(int i =1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<i;
        }
        cout<<endl;
    }
    int n;
    double sum=0;
    cin>>n;
    for(int i =1; i<=n; i++) {
        cout<<1<<'/'<<i;
        if(i<n) {
            cout<<'+';
        }
        sum+=1.0/i;
    }
    cout<<endl;
    cout<<"the sum is "<<sum<<endl;
    int n;
    int total;
    float years=1000;
    cin>>n;
    for(int i = 1; i<=n; i++) {
        years+=years*0.03;
        cout<<"For year number"<< i <<" "<< years <<endl;
        total+=years;
    }
    cout<<endl;
    cout<<"Total is "<<total<<endl;
    int n, sum=0, r, i;
    cin>>n;
    while(n!=0) {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    cout<<sum;
    int n, r, decimal, add, i=0;
    cin>>n;
    while(n!=0) {
        r=n%10;
        add=pow(2, i)*r;
        decimal+=add;
        n=n/10;
        i++;
    }
    cout<<decimal;
    int n, original_number, reverse = 0;
    int remainder;
    cin>>n;
    original_number=n;
    while(n>0) {
        remainder= n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(reverse==original_number) {
        cout<<"Yes";
        return 0;
    }
    else{
        cout<<"No";
    }
    int n, count =0;
    cin>>n;
    for(int i = 2; i*i<=n; i++) {
        if(n%i==0) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"Yes";
    int n1, n2;
    cin >> n1 >> n2;
    int gcd= 1, k=2;
    while(k<=n1 && k<=n2) {
        if(n1%k==0 && n2%k==0) {
            gcd=k;
        }
        k++;
    }
    cout<<gcd;
    int n;
    cin>>n;
    int i = 2;
    while(n>=i) {
        int prime=0;
        for(int j=2; j<=n; j++) {
            if(j%i==0) {
                prime=i;
            }
            i++;
            cout<<prime<<" ";
        }
    }
    char n ;
    int i=0;
    cin>>n;
    int a;
    cin>>a;
    while(i<=a) {
        cin>>a;
        for(int j=1; j<=a; j++) {
            cout<<n;
        }
        cout<<endl;
        i++;
    }*/
    int n1=0, n2=1, next;
    int a;
    cin>>a;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2; i<=a-1; i++) {
        next=n1+n2;
        n1=n2;
        n1=next;
        cout<<next<<" ";
    }
    return 0;
}
