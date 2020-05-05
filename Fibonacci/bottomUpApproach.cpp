#include<iostream>
using namespace std;

long long dp[100000] = {0};

long long fib(int n) {
	dp[1] = 1;
	for(int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	cout << fib(n) << endl;
}
