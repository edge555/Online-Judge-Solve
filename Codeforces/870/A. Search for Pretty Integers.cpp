#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,m,mn=INT_MAX,k;
    sff(n,m);
    vector<int>vec,vec2;
    while(n--)
    {
        sf(k);
        vec.pb(k);
    }
    int i,j;
    while(m--)
    {
        sf(k);
        vec2.pb(k);
        mn=min(mn,k);
    }
    sort(all(vec));
    rep0(i,vec.size())
    {
        rep0(j,vec2.size())
        {
            if(vec2[j]==vec[i])
            {
                cout<<vec[i];
                return 0;
            }
        }

    }
    int a=vec[0];
    if(a==mn)
        cout<<a;
    else
    {
        if(a>mn)
            cout<<mn<<a;
        else
            cout<<a<<mn;
    }
}
