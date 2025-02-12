#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
int main() {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
long long  x=1;
for(int i=1;i<=k;++i){
x=(x*n)%M;
}
cout<<x<<endl;
}
}