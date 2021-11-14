#include <iostream>
using namespace std;

int main() {
    int n, c;
    int a=1;
    int b=1;
    cin >> n;
    for (int i=1; i<=n; i++){
        a+=b;
        cout << a<<endl;
        c=b;
        b=a;
        a=c;
    }
    return 0;
}
