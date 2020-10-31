//fibonachi.cpp

#include<iostream>

using namespace std;

// int fib(int n){
// 	//Base Case
// 	if(n==0 || n==1){
// 		return n;
// 	} 
// 	int ans;
// 	ans = fib(n-1) + fib(n-2);
// 	return ans;

// }

int fib(int n,int dp[]){
	//Base Case
	if(n==0 || n==1){
		return n;
	} 
	//Recursive
	//Look Up
	if (dp[n] != 0){
		return dp[n];
	}

	int ans;
	ans = fib(n-1,dp) + fib(n-2,dp);
	return dp[n] = ans;

}

int fibBU(int n){
	int dp[100]= {0};
	dp[1] = 1;

	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}

//Bottom up approach with space optimization
int fibSpaceOpt(int n){

	if(n==0 || n==1){
		return n;
	}
	int a=0;
	int b=1;
	int c;
	for(int i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}

int main() {
	
	int n;
	cin >> n;

	int dp[100] ={0};

	//bOTTOM UP APPROACH
	cout << fibSpaceOpt(n) <<endl;


	return 0;

}