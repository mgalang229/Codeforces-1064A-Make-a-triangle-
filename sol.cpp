#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array;

int main() {
	int a[3];
	for(int i=0; i<3; ++i)
		cin >> a[i];
	sort(a, a+3);
	cout << max(0, a[2]-(a[0]+a[1]-1)) << "\n";
}
