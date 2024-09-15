#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int a, b;// a->Limak, b->Brother
int year;

int main() {
  cin>>a>>b;
    year=0;
    while(b>a || b==a){
        a*=3;
        b*=2;
        year++;
        if(a>b) break;
    }
    cout<<year;
}