#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    cout << hex << 100 << " " << dec << 100; // 0x64 100
    cout << setfill('0') << setw(5) << 42; // 00042
    cout << fixed << setprecision(2) << 3.14159; // 3.14
}
