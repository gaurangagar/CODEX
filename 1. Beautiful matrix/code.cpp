#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define ll long long int
#define wholelist(v) (v.begin(),v.end())
 
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll>>
#define sll set<ll>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
 
 
const ll mod=1e9+7;
 
void solve() {
    ll l=0,b=0,x;
    fr(i,1,6) {
        fr(j,1,6) {
            cin>>x;
            if(x==1) {
                l=i;b=j;break;
            }
        }
        if(l>0) break;
    }
    cout<<abs(3-l)+abs(3-b);
}
 
int main() {
    solve();
}