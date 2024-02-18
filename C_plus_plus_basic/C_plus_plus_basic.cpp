
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
/*
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


int main()
{
    cout << "Finaly: " << gcd_mod(225, 157);
    cout << "Finaly: " << gcd_mod(36, 3);
    cout << "Finaly: " << gcd_sub(225, 157);
    cout << "Finaly: " << gcd_sub(24, 12);
}

*/











// count of 4k+1 and 4k-1 tpyes numbers
/*
#include <iostream>
using namespace std;


bool is_prime(int num) {
    int i, a = 1, r;
    r = sqrt(num);
    for (i = 2; i <= r; i++) {
        if (num % i == 0) {
            a = 0;
            break;
        }
    }if (a == 1)return true;
    else return false;
}


int main()
{
    int k;
    cout << "Enter K: ";
    cin >> k;
    int count_a = 0, count_b = 0;
    for (int i = 1; i <= k; i++) {
        if (is_prime(i * 4 + 1)) count_a++;
    }cout << count_a << endl;
    for (int i = 1; i <= k; i++) {
        if (is_prime(i * 4 - 1)) count_b++;
    }cout << count_b << endl;
}
*/







//LCM
/*

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







// Perfect numbers until k

/*
#include <iostream>
using namespace std;

bool is_perfect(int num) {
    int sum = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (sum > num) break;
        else {
            if (num % i == 0) {
                sum += i;
            }
        }
    }
    if (sum == num) return true;
    else return false;
}


int main()
{

    int k;
    cout << "enter the number: ";
    cin >> k;
    for (int i = 2; i <= k; i++) {
        if (is_perfect(i))cout << i << " ";
    }

}
*/











//"even" prime numbers:

/*
#include <iostream>
using namespace std;

bool is_prime(int num) {
    int i,r = sqrt(num);
    for ( i = 2; i <= r; i ++)
    {
        if (num % i == 0)return false;
    }
    if (i > r)return true;
}


int main()
{
    int num;
    cout << "enter the number (>5):  ";
    cin >> num;

    for (int i = 5; i <= num;i+=2) {
        if (is_prime(i) and is_prime(i-2)){
            cout << i-2 <<" "<<i<<endl;
        }
    }
}



*/