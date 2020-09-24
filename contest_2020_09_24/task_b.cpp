#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    int t_count; cin >> t_count;
    for(int t = 0; t < t_count; t++){
        int n; scanf("%d", &n);
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        long long count = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if((arr[i] & arr[j]) >= (arr[i] ^ arr[j])){
                    // cout << arr[i] << " " << arr[j] << endl;
                    count += 1;
                }
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}
