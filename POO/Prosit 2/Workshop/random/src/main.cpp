#include <bits/stdc++.h>
using namespace std;
#include <chrono>

int main() {
    unsigned seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    srand(seed);

    int a = 10;  // borne min
    int b = 50;  // borne max

    for (int i = 0; i < 40; i++) {
        int val = a + rand() % (b - a + 1);  // nombre entre a et b inclus
        cout << val << endl;
    }
    
    return 0;
}
