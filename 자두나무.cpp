#include <bits/stdc++.h>

using namespace std;

int  dp[1005][35][2],MAX;
int main()
{
	int n,m,x;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		x--;
		for(int j=0;j<=m;j++){
			if(!x){
				dp[i][j][0] = max(dp[i-1][j-1][1]+1,dp[i-1][j][0]+1); 	
				dp[i][j][1] = max(dp[i-1][j-1][0],dp[i-1][j][1]); 	
			}
			else{
				dp[i][j][1] = max(dp[i-1][j-1][0]+1,dp[i-1][j][1]+1); 		
				dp[i][j][0] = max(dp[i-1][j-1][1],dp[i-1][j][0]); 	
			}
		}
	}
	for(int i=0;i<=m;i++){
		MAX = max(MAX,dp[n][m][0]);
		MAX = max(MAX,dp[n][m][1]);
	}
	printf("%d",MAX);
}