#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int> > vvi;
#define forn(i,x,y) for(i = (x) ; i <= (y) ; ++i)
#define forr(i,y,x) for(i = (y) ; i >= (x) ; --i)
#define forv(v,i) for(i=v.begin();i!=v.end();++i)
#define forvr(v,i) for(i=v.end()-1;i!=v.begin();--i)
#define FA(i, a) for (__typeof((a).begin()) i = (a).begin(); i != (a).end(); i++)
#define PB push_back
#define PF push_front
#define MP make_pair
#define F first
#define S second
#define SZ(x) ((int)(x).size())
#define MOD(x,y) (((x%M)*(y%M))%M)
#define CLR(x,y) memset(x,y,sizeof(x))
#define precisionvalue printf("%.6lf\n",ans);
ll M=1000000007;
//while(~scanf("%d",&n) )
/*-------------------------Template Ends--------------------------------*/

unordered_map<char,int> dict;

int main()
{
	int i,j,k,n,m,p,q,u,v,count,ans,temp,test;
	string st;
	cin >> temp;
	cin >> st;
	ans = -1;
	for(i = 0; i < st.size();) {
		dict.clear();
		while(st[i] >= 97) {
			dict[st[i]] += 1;
			++i;
		}
		count = dict.size();
		// std::cout << "count= " << count << std::endl;
		ans = max(count,ans);
		while(st[i] < 97) {
			++i;
		}
	}
	cout << ans << endl;
	return 0;
}
