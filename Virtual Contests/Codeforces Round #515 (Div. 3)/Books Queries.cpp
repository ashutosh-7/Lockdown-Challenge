#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pf push_front
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
               map<ll,ll>id;
               map<ll,char> id2;
               ll left=0,right=0;
               ll lc=1,rc=1;
                while(t--)
                {
                    char a;
                    ll x;
                    cin>>a>>x;
                    if(a=='L')
                    {
                         left+=1;
                        id[x]=left;
                        id2[x]='L';
                       
                    }
                    else if(a=='R')
                    {
                        right+=1;
                        id[x]=right;
                        id2[x]='R';
                        
                    }
                    else
                    {
                      
                        if(id2[x]=='L')
                        {
                            ll pos=id[x];
                            cout<<min(left-pos,right+pos-1)<<endl;
                        }
                        else
                        {
                            ll pos=id[x];
                            // cout<<pos<<endl;
                            cout<<min(right-pos,left+pos-1)<<endl;
                        }


                    }
                    
                }

                return 0;
            }
