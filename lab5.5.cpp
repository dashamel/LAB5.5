#include <iostream>
#include <cmath>
using namespace std;

int Level = 0;  
int Depth = 0;      


double power(double x, int n) {
    Level++;  
    if (Level > Depth)
        Depth = Level; 

    if (n == 0) {
        Level--;  
        return 1; // x^0 = 1
    }
    else if (n < 0) {
        Level--; 
        return 1 / power(x, -n);  // x^(-n) = 1 / x^n
    }
    else {
        Level--;  
        return x * power(x, n - 1);  // x^n = x * x^(n-1)
    }
}

int main() {
    double x;
    int n;

    
    cout << "x = "; cin >> x;
    cout << "n = "; cin >> n;

    // Виклик функції 
    double t = power(x, n);
    cout << " t = " << x << "^" << n << " = " << t << endl; 

    
    cout << "Depth: " << Depth << endl;
    cout << "Level: " << Level << endl; 

    return 0;  
}
