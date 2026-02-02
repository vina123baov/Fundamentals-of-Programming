#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    long long M;
    long long Sm = 0;
    
    cout << "n: ";
    
    cin >> n;
    cout << "m: ";
    cin >> m;
    cout << "M: ";
    cin >> M;
    
    for (int i = 1; i <= n; i++) {
        long long luythua = pow(i, m);
        
        if (Sm + luythua <= M) {
            Sm += luythua;
        } else {
            break;
        }
    }
    
    cout << "Sm lon nhat <= " << M << " la: " << Sm << endl;
    
    return 0;
}