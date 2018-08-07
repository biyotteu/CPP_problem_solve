#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	int a=0,b=0;
	for(int i=0;i<str.size()-2;i++){
		if(str[i] == 'A' && str[i+1] == 'O' && str[i+2] == 'A') a++;
		if(str[i] == 'L' && str[i+1] == 'O' && str[i+2] == 'L') b++;
	}
	printf("%d\n%d",a,b);
}