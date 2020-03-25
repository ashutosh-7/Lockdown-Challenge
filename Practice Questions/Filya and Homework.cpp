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

              

                    ll n;
                    cin>>n;
                    set<ll>s;
                    for(ll i=0;i<n;i++)
                    {
                        ll a;
                        cin>>a;
                        s.insert(a);
                    }
                    if(s.size()<3)
                        cout<<"YES"<<endl;
                    else if(s.size()==3)
                    {
                        ll arr[3];
                        ll i=0;
                        for(auto it:s)
                        {
                            arr[i++]=it;
                        }
                        if(arr[2]-arr[1]==arr[1]-arr[0])
                             cout<<"YES"<<endl;
                         else
                             cout<<"NO"<<endl;
                    }
                    else
                        cout<<"NO"<<endl;
                

                return 0;
            }
