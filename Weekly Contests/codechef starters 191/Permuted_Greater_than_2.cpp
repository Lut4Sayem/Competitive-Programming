#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 0) {
            cout << "Yes"<<endl;
        } else {
            if (y == 0) {
                if (z >= x - 1) {
                    cout << "Yes"<<endl;
                } else {
                    cout << "No"<<endl;
                }
            } else {
                if (z >= x) {
                    cout << "Yes"<<endl;
                } else {
                    cout << "No"<<endl;
                }
            }
        }
    }
    return 0;
}