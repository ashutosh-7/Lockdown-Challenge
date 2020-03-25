#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=998244353;
    ll power(ll a, ll b)
    {
        if(b==0)
            return 1;
        if(b==1)
            return a%mod;
        ll x=power(a,b/2);
        if(b%2==0)
            return ((x%mod)*(x%mod))%mod;
        else
            return (((a*x)%mod)*(x%mod))%mod;
    }
 
 
int main() {
                fast
                #ifndef ONLINE_JUDGE
                freopen("input.txt","r",stdin);
                freopen("output.txt","w",stdout);
                #endif
                ll n,m;
                cin>>n>>m;
                string s1,s2;
                cin>>s1>>s2;
                if(n>m)
                {
                    string temp=s2;
                    s2="";
                    for(ll i=0;i<n-m;i++)
                        s2+="0";
                    s2+=temp;
                    m=n;
                }
                else
                {
                 string temp=s1;
                    s1="";
                    for(ll i=0;i<m-n;i++)
                        s1+="0";
                    s1+=temp;   
                    n=m;
                }

                 // cout<<s1<<" "<<s2<<endl;
                ll arr[n];
                ll prefix[n]={0};
                prefix[0]=s2[0]-'0';
                for(ll i=1;i<n;i++)
                {
                    prefix[i]=prefix[i-1]+s2[i]-'0';
                }
                // for(ll i=0;i<n;i++)
                //     cout<<prefix[i]<<" ";
                ll x=n-1;
                ll ans=0;
                for(ll i=0;i<n;i++)
                {
                    if(s1[i]=='1')
                    {
                        ll z=power(2,x);
                        // cout<<z<<endl;
                        ll y=((z%mod)*(prefix[i]%mod))%mod;
                        // cout<<y<<endl;
                        ans=((ans%mod)+(y%mod))%mod;
                    }
                    x-=1;
                }

                cout<<ans<<endl;

                return 0;
            }
