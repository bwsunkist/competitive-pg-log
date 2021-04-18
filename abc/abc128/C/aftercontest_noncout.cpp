#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  int cnt=0;
  int cnt2p=0;
  int ans = 0;
  int preans = 0;

  cin >> N >> M;
  
  vector<int> k(M);
  vector<int> kcnt(M);
  vector<int> Msum(M);
  vector<int> p(M);
  vector<vector<int>> s(M, vector<int>(N));
  for(long i = 0; i < M; i++){
    cin >> k[i];
    kcnt[i] = 0;
    Msum[i] = 0;
    for(long j = 0; j < k[i]; j++){
      cin >> s[i][j];
    }
  }
  
  for(long j = 0; j < M; j++){
    cin >> p[j];
  }

    // {0, 1, ..., n-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<N); ++bit) {
        vector<int> S;
        for (int i = 0; i < N; ++i) {
            if (bit & (1<<i)) { // i が bit に入るかどうか
              for(int j = 0; j < M; j++){
                for(int cnt = 0; cnt < k[j]; cnt++){
                  //各電球について対象スイッチ確認
                  if(s[j][cnt] == i+1){
                    Msum[j]++;
                  }
                }
              }
            }
        }
        
        //それぞれの電球について
        //スイッチの点灯数を確認
        for(int i = 0; i < M; i++){
          if(p[i] == Msum[i]%2){
            preans++;
          }
        }
        if(preans == M){
          ans++;
        }
        
        //次のループに向けて初期化
        for(int i = 0; i < M; i++){
          kcnt[i] = 0;
          Msum[i] = 0;
        }
          preans = 0;

    }

    cout << ans << endl;
}
