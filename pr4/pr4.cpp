#include<bits/stdc++.h>
using namespace std ;

int answer (int n) {
    if (n == 1) return 1;
    else if(n % 2) return 2*answer(n/2) + 1;
    else return 2*answer(n/2) - 1;
}

int main(int argc, char const *argv[]) {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << answer(n) << endl;
    }
    return 0;
}
