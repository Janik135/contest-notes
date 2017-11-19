#include <bits/stdc++.h>
using namespace std;

int SCSLength(string X, string Y){
	int m = X.length(), n = Y.length();
	int lookup[m + 1][n + 1];

	for (int i = 0; i <= m; i++)
            lookup[i][0] = i;

	for (int j = 0; j <= n; j++)
 	    lookup[0][j] = j;

	for (int i = 1; i <= m; i++){
	    for (int j = 1; j <= n; j++){
		if (X[i - 1] == Y[j - 1])
		    lookup[i][j] = lookup[i - 1][j - 1] + 1;
		else
		    lookup[i][j] = min(lookup[i - 1][j] + 1, lookup[i][j - 1] + 1);
		}
	}
	return lookup[m][n];
}
int main()
{
	string X = "ABCBDAB", Y = "BDCABA";
	cout << "The length of SCS is " << SCSLength(X, Y);
	return 0;
}