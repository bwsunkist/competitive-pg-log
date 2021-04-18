#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  int cnt=0;
  int cnt2p=0;
  cin >> n ;

    // {0, 1, ..., n-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // i が bit に入るかどうか
                S.push_back(1);
                //cout << "push_back --> " << i << endl;
            }else{
              S.push_back(0);
            }
        }

        //何番目のビットが立ってるか出力
        cout << bit << ": {";
        for (int i = 0; i < (int)S.size(); ++i) {
            cout << S[i] << " ";
            if(S[i] == 1){
              cnt++;
            }
        }
        cnt2p = cnt%2;
        cout << "} cnt = " << cnt << ", cnt2p = " << cnt2p << endl;
        cnt = 0;
        cnt2p = 0;
    }
}


