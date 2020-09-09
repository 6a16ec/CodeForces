#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n; int nnn; nnn = n;
    vector < pair <int, int> > people(n);
    for(int i = 0; i < n; i++){
        cin >> people[i].first;
        people[i].second = i + 1;
    }
    sort(people.begin(), people.end());

    int max_value = people[n - 1].first;
    int position = 0;
    vector <int> counts(max_value + 1, 0);
    vector <int> positions(max_value + 1, 0);

    for(int i = 0; i < n; i++){
        if(position == people[i].first){
            positions[people[i].first] = i;
            position += 1;
        }
        counts[people[i].first] += 1;
    }

    /*
    for(int i = 0; i < n; i++){
        cout << people[i].first << " ";
    }
    cout << endl;
    */


    vector <int> queue(n);
    int queue_n = 0;
    int now_need = 0;
    int aaaaa = true;
    while(true){
        if(now_need > max_value){
            // cout << now_need << " > " << max_value << endl;
            now_need -= 3;
            if(now_need < 0){
                if(queue[n - 1] == 0){
                    aaaaa = false;
                }
                break;
            }
        }
        if(counts[now_need] > 0){
            int next_available;
            if(now_need < max_value){
                next_available = positions[now_need + 1];
            }
            else{
                next_available = nnn;
            }
            // cout << "ya nashel " << next_available << " " << now_need;
            next_available -= counts[now_need];
            queue[queue_n] = people[next_available].second;
            // cout << " " << queue[queue_n] << endl;
            queue_n += 1;
            counts[now_need] -= 1;
            now_need += 1;

        }
        else{
            now_need -= 3;
            if(now_need < 0){
                if(queue[n - 1] == 0){
                    aaaaa = false;
                }
                break;
            }
        }
    }
    if(aaaaa){
        cout << "Possible" << endl;
    }
    else{
        cout << "Impossible" << endl;
        return 0;
    }
    // cout << aaaaa ? "Possible" : "Impossible" << endl;
    for(int i = 0; i < n; i++) cout << queue[i] << " ";


    return 0;
}
