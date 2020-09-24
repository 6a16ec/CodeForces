#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    int t_count; cin >> t_count;
    for(int t = 0; t < t_count; t++){
        int n, q; scanf("%d", &n); scanf("%d", &q);
        vector <int> arr(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int sum = 0;
        int minimum = -1, maximum = -1;
        for(int i = 0; i < n; i++){
            if(minimum != 0){
                if(i == 0 || arr[i - 1] < arr[i]){
                    if(i == (n - 1) || arr[i] > arr[i + 1]){
                        // cout << arr[i] << " maximum" << endl;
                        maximum = arr[i];
                        if(minimum == -1) minimum = 0;
                        sum += (maximum - minimum);
                        minimum = 0;
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
        printf("%d\n", sum);
    }
    return 0;
}
