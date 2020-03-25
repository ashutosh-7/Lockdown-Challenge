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

               ll n,r;
               cin>>n>>r;
               ll arr[n+1];
               for(ll i=1;i<=n;i++)
                cin>>arr[i];

                ll ans=0,count2=1;
                r-=1;

                ll heat[n+1]={0};
                ll last=-1;
                bool flag=true;
               
                for(ll i=1;i<=n;i++)
                {
                    // cout<<i<<endl;
                    ll pos=min(i+r,n);
                    ll id=-1;
                    flag=false;

                    if(heat[i]==0){
                      
                    for(ll j=pos;j>=i;j--)
                    {
                        if(arr[j]==1)
                        {
                            id=j;
                            flag=true;
                            break;
                        }
                    }
                
                   
                 
                    if(flag)
                    {
                        ans+=1;
                        for(ll j=i;j<=id+r;j++)
                        {
                            heat[j]=1;
                        }

                    }
                    else
                    {   
                        if(i-last<=r and last!=-1)
                        {
                            ans+=1;
                             for(ll j=i;j<=(last+r);j++)
                        {
                            heat[j]=1;
                        }
                        }
                        else
                        {
                            flag=false;
                            count2=0;
                            break;
                        }
                    }
                    // cout<<ans<<endl;
                }
                // for(ll i=1;i<=n;i++)
                //     cout<<heat[i]<<" ";
                // cout<<endl;
                    if(arr[i]==1)
                    {
                        last=i;
                    }
                }
            
                if(count2==0)
                    cout<<-1<<endl;
                else
                    cout<<ans<<endl;

                return 0;
            }
