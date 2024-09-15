#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    string str= "qwertyuiopasdfghjkl;zxcvbnm,./";
    string decoded="";
    string code;
    char ch;
    cin>>ch;
    cin>>code;
    if(ch == 'R'){
        for( int i=0;i < code.length();i++){
            for (int j = 0; j < str.length(); j++)
            {
                /* code */
                if(code[i] == str[j]){
                    if (j>0)
                    {
                        /* code */
                        decoded += str[j-1];
                    }
                    
                    else decoded += str[j];
                }
            }
        }
    }
    else if (ch == 'L')
    {
        /* code */
         for( int i=0;i < code.length();i++){
            for (int j = 0; j < str.length(); j++)
            {
                /* code */
                if(code[i] == str[j]){
                    if (j>str.length()-1)
                    {
                        /* code */ decoded += str[j];
                    }
                    
                    decoded += str[j+1];
                }
            }
        }
    }
    cout<<decoded;
    return 0;
}