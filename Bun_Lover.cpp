#include<bits/stdc++.h>
using namespace std;
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    Start
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,result=0;
        cin>>n;
        result = ((n-1)*n)/2;
        result = result+ ((n-2)*(n-1))/2;
        result = result + (4*n) + 1;
        cout<<result<<endl;
 
    }
}

