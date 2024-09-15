#include<bits/stdc++.h>
using namespace std;
 
int n,h,x,res;
 
int main()
{
    cin>>n>>h;
    int res=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x>h)
            res++;
        res++;
    }
    cout<<res<<"\n";
}