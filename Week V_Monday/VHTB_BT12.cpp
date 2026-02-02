#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    long long Sm = 0;
    
    cout << "n: ";
    cin >> n;
    cout << "m: ";
    cin >> m;
    
    for (int i = 1; i <= n; i++) {
        Sm += pow(i, m);
    }
    
    cout << "Sm = " << Sm << endl;
    
    return 0;
}