#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    while(1)
    {
        int n,d,r;
        sfff(n,d,r);
        if(n+d+r==0)
            return 0;
        int cnt=0,a,b,i;
        vector<int>vec,vec2;
        rep0(i,n)
        {
            sf(a);
            vec.pb(a);
        }
        rep0(i,n)
        {
            sf(a);
            vec2.pb(a);
        }
        sort(all(vec));
        sort(all(vec2),comp);
        rep0(i,n)
        {
            if(vec[i]+vec2[i]>d)
                cnt+=((vec[i]+vec2[i])-d);
        }
        cout<<cnt*r<<endl;
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}