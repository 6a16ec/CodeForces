#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    if(n >= 5){
        cout << n << "\n";
        for(int i = 0; i < n; i+=2) cout << i + 1 << " ";
        for(int i = 1; i < n; i+=2) cout << i + 1 << " ";
    }
    else{
        if(n == 1 || n == 2) cout << 1 << "\n" << "1";
        if(n == 3) cout << 2 << "\n" << "1 3";
        if(n == 4) cout << 4 << "\n" << "3 1 4 2";
    }
    return 0;
}


// 1 - 1
// 2 - 1
// 3 - 1 3
// 4 - 3 1 4 2
// 5 - 1 3 5 2 4
// 6 - 1 3 5 2 4 6
// 7 - 1 3 5 7 2 4 6

