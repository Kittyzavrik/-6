#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i <N; i++) {
        for (int j = 0; j < N; j ++) {
            int x;
            if (i + j < N - 1) {
                x = 0;
            } else if (i + j == N - 1){
                x = 1;
            } else {
                x = 2;
            }
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}