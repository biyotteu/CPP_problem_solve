#include <bits/stdc++.h>

using namespace std;

int n,cnt=1;
int main(){
	ios::sync_with_stdio(false);
	cin >> n;
	for(int i=1;i<=n;i++){
		int x;
		cin >> x;
		if(x == cnt) cnt++;	
	}
	cout << cnt-1;
}