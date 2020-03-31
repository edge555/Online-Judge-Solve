#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 105
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
string dp[N][N];
void lexicographicalLCS(string A,string B)
{
    int i,j,m=A.size(),n=B.size();
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0||j==0)
                dp[i][j]="";
            else if(A[i-1]==B[j-1])
                dp[i][j]=dp[i-1][j-1]+A[i-1];
            else if(dp[i-1][j].size()>dp[i][j-1].size())
                dp[i][j]=dp[i-1][j];
            else if(dp[i-1][j].size()<dp[i][j-1].size())
                dp[i][j]=dp[i][j-1];
            else if(dp[i-1][j]<dp[i][j-1])
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=dp[i][j-1];
        }
    }
    if(dp[m][n].size()==0)
        cout<<":("<<endl;
    else
        cout<<dp[m][n]<<endl;
}
int main()
{
    int t,tc;
    cin>>tc;
    cin.ignore();
    rep(t,tc)
    {
        string a,b;
        cin>>a>>b;
        cout<<"Case "<<t<<": ";
        lexicographicalLCS(a,b);
    }
}
