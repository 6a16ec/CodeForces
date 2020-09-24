#include <iostream>
#include <stdio.h>
#include <set>
using namespace std;

int main(){
    int t_count; cin >> t_count;
    for(int t = 0; t < t_count; t++){
        int n; scanf("%d", &n);
        int prev; scanf("%d", &prev);
        int flag = 0;
        for(int i = 1; i < n; i++){
            int number; scanf("%d", &number);
            if(number >= prev){
                flag = 1;
            }
            prev = number;
        }
        printf(flag ? "YES\n" : "NO\n");
    }
    return 0;
}
