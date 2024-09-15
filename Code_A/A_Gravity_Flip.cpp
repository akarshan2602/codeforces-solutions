#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int main() {
       int n;
    cin>>n;
    vector<int>cube(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>cube[i];
    }
    sort(cube.begin(), cube.end());
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<< cube[i]<< " ";
    }
    
}