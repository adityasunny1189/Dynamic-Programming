#include<iostream>
using namespace std;

long long dp[1000] = {0};

long long fib(long long n) {
	if(n == 0 || n == 1) {
		return n;
	}
	if(dp[n] != 0) {
		return dp[n];
	}
	long long ans = fib(n - 1) + fib(n - 2);
	dp[n] = ans;
	return ans;
}

int main() {
	long long n;
	cin >> n;
	cout << fib(n) << endl;
}

