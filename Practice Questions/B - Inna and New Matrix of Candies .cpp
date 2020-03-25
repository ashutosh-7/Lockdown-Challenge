#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;
 
 
int main() {
                fast
                #ifndef ONLINE_JUDGE
                freopen("input.txt","r",stdin);
                freopen("output.txt","w",stdout);
                #endif

              

                   ll n,m;
                   cin>>n>>m;
                   char c[n][m];
                   for(ll i=0;i<n;i++)
                   {
                    for (ll j=0;j<m;j++)
                        cin>>c[i][j];
                   }
                   bool flag=true;
                   set<ll>s2;
                   for(ll i=0;i<n;i++)
                   {
                    ll s,g;
                    for(ll j=0;j<m;j++)
                    {
                        if(c[i][j]=='S')
                            s=j;
                        if(c[i][j]=='G')
                            g=j;
                    }
                    if(s<g)
                        flag=false;
                    s2.insert(g-s);
                   }
                   if(flag)
                    cout<<s2.size()<<endl;
                else
                    cout<<-1<<endl;
                

                return 0;
            }
