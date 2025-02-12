#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define wholelist(v) (v.begin(),v.end())
 
void solve() {
    int n;
    cin>>n;
    map<int,vector<string>>mp;
    fr(i,n) {
        string s;
        int n;
        cin>>s>>n;
        mp[n].push_back(s);
    }
    for(auto it=mp.rbegin();it!=mp.rend();it++) {
        sort(it->second.begin(),it->second.end());
        for(int j=0;j<it->second.size();j++) {
            cout<<it->second[j]<<" "<<it->first<<endl;
        }
    }
}
 
int main() {
    solve();
}