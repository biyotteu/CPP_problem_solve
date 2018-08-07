#include <bits/stdc++.h>
#define lli long long int
using namespace std;

struct info
{
	lli x,y,z;
	info(){}
	info(lli a,lli b,lli c){
		x = a,y = b,z = c;
	}
	bool operator<(info &A) const{
		return A.z < z;
	}
};
int n;
info cur;
int main(){
	scanf("%d",&n);
	cur.y = 1000000000000000;
	for(int i=0;i<n;i++){
		lli a,b;
		scanf("%lld %lld",&a,&b);
		info k = info(max(cur.x,a),min(cur.y,a),cur.z+b-(max(cur.x,a)-min(cur.y,a)));
		info v = info(a,a,b);
		vector<info> tmp;
		tmp.push_back(k);
		tmp.push_back(cur);
		tmp.push_back(v);
		for(int i=0;i<3;i++) printf("%lld ",tmp[i].z);
		sort(tmp.begin(),tmp.end());
			printf("###\n");
		cur = tmp[0];
	}
	printf("%lld",cur.z);
}