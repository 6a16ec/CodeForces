#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    int t_count; cin >> t_count;
    for(int t = 0; t < t_count; t++){
        int n, q; scanf("%d", &n); scanf("%d", &q);
        vector <long long> arr(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        long long sum = 0;
        long long minimum = 0, maximum = 0;
        int flag = 1;
        for(int i = 0; i < n; i++){
            if(minimum != 0 || flag){
                if(i == 0 || arr[i - 1] < arr[i]){
                    if(i == (n - 1) || arr[i] > arr[i + 1]){
                        // cout << arr[i] << " maximum" << endl;
                        maximum = arr[i];
                        sum += (maximum - minimum);
                        minimum = 0;
                        flag = 0;
                    }
                }
            }
            else{
                if(i == 0 || arr[i - 1] > arr[i]){
                    if(i == (n - 1) || arr[i] < arr[i + 1]){
                        // cout << arr[i] << " minimum" << endl;
                        minimum = arr[i];
                    }
                }
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
