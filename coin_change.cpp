#include<iostream>
#include<climits>
using namespace std;

int minCoins(int n,int coins[],int T,int dp[]){

	//Base Case if n=0 answer is 0
	if(n==0){
		return 0;
	}

	//LookUp
	if(dp[n] != 0){
		return dp[n];
	}
	//Recursive Case
	int ans = INT_MAX;
	for(int i=0;i<T;i++){
		if(n-coins[i]>=0){
			int subProb = minCoins(n-coins[i],coins,T,dp);
			ans = min(ans,subProb+1);
		}		
	}
	dp[n] = ans;
	return dp[n];

}

//Bottom Up aproach
int minCoinsBU(int N,int coins[],int T){
	int dp[100] = {0};

	int ans = INT_MAX;

	for(int n=1;n<=N;n++){
		//Initialize current answer as INT_MAX	
		dp[n] = INT_MAX;
		for(int i=0;i<T;i++){
			if(n - coins[i] >= 0){
				int subProb = dp[n-coins[i]];
				dp[n] = min(dp[n],subProb+1);
			}
		
		}
	}
	return dp[N];
}

int main() {
	
	int N =15;
	int coins[]={1,7,10};
	int T = sizeof(coins)/sizeof(int);

/*	int n;
	cin >> n;*/

	int dp[100] = {0};	

	cout << minCoinsBU(N,coins,T)<<endl;
	return 0;
}