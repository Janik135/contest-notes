#include <bits/stdc++.h>
using namespace std;

int knapSack(int v[], int w[], int n, int W){
    int T[n+1][W+1];
 
    for (int j = 0; j <= W; j++)
        T[0][j] = 0;
    
    for (int i = 1; i <= n; i++){
	for (int j = 0; j <= W; j++){
	    if (w[i-1] > j)
		T[i][j] = T[i-1][j];
	    else
		T[i][j] = max(T[i-1][j], T[i-1][j-w[i-1]] + v[i-1]);
	    }
	}
    return T[n][W];	// return maximum value
}
 
int main(){
    int v[] = { 20, 5, 10, 40, 15, 25 }; 	//Values
    int w[] = {  1, 2,  3,  8,  7, 4 };		//Weights		
    int W = 10;	// Knapsack capacity
    int n = sizeof(v) / sizeof(v[0]);	// number of items

    cout << "Knapsack value is " << knapSack(v, w, n, W);

    return 0;
}