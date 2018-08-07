#include <bits/stdc++.h>

using namespace std;

int cost[2000][2000];
int dp[2000][2000];
int f(int v){

}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)	
	for(int j=1;j<=n;j++){
		if(i == j) continue;
		scanf("%d",&cost[i][j]);
	}	
}