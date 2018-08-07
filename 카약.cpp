#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int r,c;
vector<pair<int,int>> ca;
int main(){
	cin >> r >> c;
	int index = 1;
	for(int i=0;i<r;i++){
		string s;
		cin >> s;
		for(int j=c-1;j>=0;j--)
			if(s[j] >= '1' && s[j] <= '9'){
				ca.push_back({c-j,index++});
				break;	
			} 
	}
	sort(ca.begin(),ca.end());
	int bef = -1,cnt = 0;
	for(int i=0;i<ca.size();i++){
		if(bef != ca[i].x) cnt++;
		bef = ca[i].x;
		ca[i].x = ca[i].y;
		ca[i].y = cnt;
	}
	sort(ca.begin(),ca.end());
	for(int i=0;i<ca.size();i++) printf("%d\n",ca[i].y);
}