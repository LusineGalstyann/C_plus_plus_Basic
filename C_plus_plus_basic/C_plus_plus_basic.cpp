
// write all prime numbers antly N (N>3)

/*
#include <iostream>
using namespace std;

int main()
{
    int i, j, n, a, r;
    cin >> n;
    cout << "2, 3";
    for (i = 5; i < n; i += 2) {
        a = 1;
        r = sqrt(i);
        for (j = 3; j < r; j += 2) {
            if (i % j == 0)a = 0;
        }if (a == 1)cout << " " << i << ",";
    }
}
*/






// Euclides gcd 2 types
/*#include <iostream>
using namespace std;

int gcd_mod(int a, int b) {//mec a poqr b
    int c;
    c = a % b;
    cout << "\ngcd for: " << a << " " << b << endl;
    while (c > 0) {
        a = b;
        b = c;
        c = a % b;
        cout << a << "\t" << b << endl;
    } return b;
}


int gcd_sub(int a, int b) {
    cout << "\ngcd for:" << a << " " << b << endl;
    int c;
    c = abs(a) - abs(b);
    while (c != 0) {
        if (a < b) {
            a = a + b;
            b = a - b;
            a = a - b;
        }
        c = a - b;
        cout << a << "\t" << b << endl;
        a = b;
        b = c;
    }
    return a;
}
*/
/*
int main()
{
    cout << "Finaly: " << gcd_mod(225, 157);
    cout << "Finaly: " << gcd_mod(36, 3);
    cout << "Finaly: " << gcd_sub(225, 157);
    cout << "Finaly: " << gcd_sub(24, 12);
}








//LCM


#include <iostream>
using namespace std;

int gcd_mod(int a, int b) {//mec a poqr b
    int c;
    c = a % b;
    cout << "\ngcd for: " << a << " " << b << endl;
    while (c > 0) {
        a = b;
        b = c;
        c = a % b;
        cout << a << "\t" << b << endl;
    } return b;
}

int main()
{
    int a, b, c;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << a << b;
    c = gcd_mod(a, b);
    cout << "LCM is: " << a * b / c;
}


*/