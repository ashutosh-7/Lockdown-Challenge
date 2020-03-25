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

                string x;
                cin>>x;
                stack<ll>s;
                ll count=0;
                for(ll i=0;i<x.size();i++)
                {
                    if(x[i]=='(')
                    {
                        s.push(x[i]);
                    }
                    else
                    {
                        if(s.size()>0){
                        if(s.top()=='(' )
                        {
                            count+=2;
                            s.pop();
                        }
                    }
                    }
                }
                cout<<count<<endl;
                return 0;
            }
