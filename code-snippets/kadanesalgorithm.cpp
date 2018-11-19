#include <iostream>
#include <math.h>
using namespace std;

int kadanesAlgorithm(int a[], int size) {
	int max_ending_here = a[0];
	int max_so_far = a[0];
	for (int i = 0; i < size; i++) {
		max_ending_here = max(a[i], max_ending_here + a[i]);
		max_so_far = max(max_so_far, max_ending_here);
	}
	return max_so_far;
}

int main() // example
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = kadanesAlgorithm(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
