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

                    ll d,pos,l,r;
                    cin>>d>>pos>>l>>r;
                    ll total=d/pos;
                    // ll x=l%(pos+1);
                    // l-=x;
                    ll rr=r/pos;
                    ll l1=(l-1)/pos;
                    ll diff=rr-l1;
                    // if(x==0)
                    //     diff+=1;
                    cout<<total-diff<<endl;

                }

                return 0;
            }
