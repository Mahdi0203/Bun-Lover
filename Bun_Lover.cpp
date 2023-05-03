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
        for(long long i=1; i<n; i++){
            result += i+(i-1);
           // if(j<n-1) result += j;
        }
        result = result + (4*n) + 1;
        cout<<result<<endl;
 
    }
}
