#include <iostream>
using namespace std;

int main() {
    int n; int c;
    int a=1;
    int b=1;
    cin >> n;
    cout << a << endl;
    cout << b << endl;
    while (b<=n){
        a+=b;
        cout << a << endl;
        c=b;
        b=a;
        a=c;
    }
    return 0;
}
