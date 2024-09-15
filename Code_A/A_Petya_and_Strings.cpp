#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int main() {
    string s1, s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        if( tolower(s2[i]) > tolower(s1[i])){
            cout<<"-1";
            return 0;
        }
        if( tolower(s2[i]) < tolower(s1[i])){
            cout<<"1";
            return 0;
        }
        if (tolower(s1[i]) == tolower(s2[i]))
        {
            /* code */if(i<s1.length()-1)
                        continue;
            cout<<"0";return 0;
        }
        
    }
}