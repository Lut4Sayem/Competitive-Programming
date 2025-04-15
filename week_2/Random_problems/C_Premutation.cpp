#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin >> n;

        vector<vector<long long>> arr(n, vector<long long>(n - 1));
        vector<long long> count(n + 1, 0);

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n - 1; j++){
                cin >> arr[i][j];
                if (j == 0) count[arr[i][j]]++;
            }
        }

        long long start = -1;
        for (int i = 0; i < n + 1; i++)
            if (count[i] == n - 1) {
                cout << i << " ";
                start = i;
                break;
        }

        for (int i = 0; i < n; i++){
            if (arr[i][0] != start){
                for (int j = 0; j < n - 1; j++)
                {
                    cout << arr[i][j] << " ";
                }
            }
        }
        cout << endl;
    }     
    return 0;
}

