#include <iostream>
using namespace std;
int main() {
    /*int i=0;
    while(i<=100) {
        cout<<i<<endl;
        i++;
    }
    int i=100;
    int j=0;
    while(i>=j) {
        cout<<i<<" "<<endl;
        i--;
    }
    int letter = 97;
    int lastletter = 122;
    while(letter <= lastletter) {
        cout<<char(letter)<<" ";
        letter++;
    }
    int i=1;
    int lastnumber=10;
    int sum=0;
    while(i<=lastnumber) {
        if(i%2!=0) {
            sum+=i;
        }
        i++;
    }
    cout<<sum;
    int num;
    cin>>num;
    for(int i=1; i<=10; )
    int i=1;
    while(i<=100) {
        if(i%5!=0) {
            cout<<i<<endl;
        }
        i++;
    }int a;
    cin>>a;
    for(int i=1; i<=a; i++) {
        if(i%10==0) {
            cout<<i<<endl;
        }
    }
    int count = 0;
    for(int letter= 65; letter<=90; letter++) {
        cout<<char(letter)<<" ";
        count++;
        if(count%5==0) {
            cout<<endl;
        }
    }
    int credits, sumcredits, classes=0, i=1;
    float total_mark=.0, sumtotal_mark=.0;
    cin>>classes;
    while(i<=classes) {
        cin>>credits>>total_mark;
        sumcredits += credits;
        sumtotal_mark += (credits*total_mark);
        i++;
    }
    cout<<"GPA is "<<(sumtotal_mark/sumcredits)<<endl;
    int a;
    cin>>a;
    for(int i = 1; i<=10; i++) {
        cout<<a<< "*"<< i<<"="<< a*i<<endl;
    }
    int countpositive=0, countnegative=0, total, average;
    int i;
    while(true) {
        cin>>i;
        if(i==0) {
            break;
        }
        if(i>0) {
            countpositive++;
        }
        if (i<0) {
            countnegative++;
        }
        total=countpositive+countnegative+1;
    }
    cout<<countpositive<<endl;
    cout<<countnegative<<endl;
    cout<<total;
    int n, num, smallest;
    cin>>n;
    cin>>smallest;
    for(int i=1; i<n;i++) {
        cin>>num;
        if(num<smallest) {
            smallest = num;
        }
    }
    cout<<smallest;
    int n, num, biggest;
    cin >> n;
    cin>>biggest;
    for(int i=1; i<n; i++) {
        cin>>num;
        if(num>biggest) {
            biggest = num;
        }
    }
    cout<<biggest;
    int p;
    cin>>p;
    if(p<=1) {
        cout<<"nO";
        return 0;
    }
    for(int i = 2; i*i<=p; i++) {
        if(p%i==0) {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    int weight;
    cin>>weight;
    if(weight>0) {
        if(weight%2==0) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    for(int i=1; i<=5; i++) {
        cout<<i<< "*"<< i<<"="<< i*i<<endl;
    }
    int n, num, max;
    cin>>max;
    while(max!=0) {
        cin>>num;
        if(num>max) {
            max=num;
        }
        if(num==0) {
            cout<<max<<endl;
            return 0;
        }
    }*/
    int a;
    cin>>a;
    for(int i=1; i<=a; i++) {
        cout<<"";
    }
    return 0;
}