#include <iostream>
#include <vector>
using namespace std;

vector<unsigned long long> array = { 1, 1 };
unsigned long long catalan(unsigned long long n) {
    if (n < array.size()) {
        return array[n];
    }

    for (unsigned long long i = array.size(); i <= n; i++) {
        array.push_back(0);
        for (unsigned long long j = 0; j < i; j++) {
            array[i] += array[j] * array[i-j-1];
        }
    }

    return array[n];
}
