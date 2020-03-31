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

                ll t;
                cin>>t;
                while(t--)
                {

                	ll n;
                	cin>>n;
                	ll arr[n];
                	for(ll i=0;i<n;i++)
                	cin>>arr[i];
                    ll color[n]={0};
                    ll start=1;
                    ll x=0;
                    ll y=0;
                    for(ll i=2;i*i<=1000;i++)
                    {
                        y=x;
                        for(ll j=0;j<n;j++)
                        {
                            // cout<<arr[j]%i<<" ";
                            if(arr[j]%i==0 and color[j]==0){
                                color[j]=start;
                                x+=1;
                            }
                            
                        }
                        if(x==n)
                            break;
                        if(y!=x)
                        start+=1;
                    }
                    cout<<start<<endl;;
                    for(ll i=0;i<n;i++)
                        cout<<color[i]<<" ";
                    cout<<endl;


                }

                return 0;
            }
