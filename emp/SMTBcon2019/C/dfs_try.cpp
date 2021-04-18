#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 6;
  cin >> n ;

    // {0, 1, ..., n-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // i が bit に入るかどうか
                S.push_back(i);
                //cout << "push_back --> " << i << endl;
            }
        }

        //何番目のビットが立ってるか出力
        cout << bit << ": {";
        for (int i = 0; i < (int)S.size(); ++i) {
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }
}
