#include <bits/stdc++.h>

using namespace std;

int level[1000005];
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	while(m--){
		int a,b;
		scanf("%d %d",&a,&b);
		level[a]++,level[b]++;
	}
	int cnt=0;
	for(int i=1;i<=n;i++) if(level[i]%2) cnt++;
	printf("%d",(cnt-1)/2);
}