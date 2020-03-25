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

                    double vp,vd,t,w,d,diff,rv,time,cp;
                    cin>>vp>>vd>>t>>w>>d;
                    ll count=0;
                    cp=t*vp;

                    while(1)
                    {       
                        if(vp>vd)
                        {
                            count=0;
                            break;
                        }
                         diff=cp;
                         rv=abs(vp-vd);
                         time=diff/rv;
                         cp+=time*vp;
                        if(cp>=d)
                            break;
                        else
                        {
                            t=w+(cp/vd);
                            cp+=t*vp;
                            count+=1;
                        }
                    }
                    cout<<count<<endl;


                    return 0;
                }
