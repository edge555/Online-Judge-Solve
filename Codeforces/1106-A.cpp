#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int dx[]={-1,-1,0,1,1};
int dy[]={-1,1,0,-1,1};
int n;
string a[505];
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<n && a[x][y]=='X')
        return true;
    return false;
}
int main()
{
    sf(n);
    getchar();
    int i,j,k,cnt,res=0;
    rep0(i,n)
        cin>>a[i];
    rep0(i,n)
    {
        rep0(j,n)
        {
            cnt=0;
            rep0(k,5)
            {
                int xx=i+dx[k];
                int yy=j+dy[k];
                if(valid(xx,yy))
                    cnt++;
            }
            if(cnt==5)
                res++;
        }
    }
    pf("%d\n",res);
}
