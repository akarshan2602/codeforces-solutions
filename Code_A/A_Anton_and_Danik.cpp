#include <bits/stdc++.h>
#include <string>
using namespace std;

int count_A, count_D=0;
int main() {
    int n; string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if (s[i] == 'A')
        {
            count_A++;
        }
        else count_D++;
        
    }
    cout<< (count_A>count_D?"Anton":(count_A<count_D)?"Danik":"Friendship");
}