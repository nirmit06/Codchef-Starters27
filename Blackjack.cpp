#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;

int sum=a+b;
int required=21-sum;
if(required<=10 && required!=0){
    cout<<required<<"\n";
}
else{
    cout<<"-1"<<"\n";
}
}
return 0;
}