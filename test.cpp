#include <bits/stdc++.h>

using namespace std;

void decode(){
	int n;
	cin >> n;
	int ans=0;
	while(n!=0){
		ans+=(n/5);
		n/=5;
	}
	cout << ans << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		decode();
	return 0;
}
