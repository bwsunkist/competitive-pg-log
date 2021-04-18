#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MOD = 1000000007;

// res[i][c] := i 文字目以降で最初に文字 c が登場する index (存在しないときは n)
vector<vector<int> > calcNext(const string &S) {
    int n = (int)S.size();
    vector<vector<int> > res(n+1, vector<int>(26, n));
    for (int i = n-1; i >= 0; --i) {
        for (int j = 0; j < 26; ++j) res[i][j] = res[i+1][j];
        res[i][S[i]-'a'] = i;
    }
    return res;
}

// mod 1000000007 の世界で a += b する関数
void add(long long &a, long long b) {
    a += b;
    if (a >= MOD) a -= MOD;
}

int main() {
    // 入力
    string S;
    int n;

    cin >> n;
    cin >> S;

    // 前処理配列
    vector<vector<int> > next = calcNext(S);

    // DP
    vector<long long> dp(n+1, 0);
    dp[0] = 1; // 初期化、空文字列 "" に対応
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
          cout << i << "," << j << ": next["<< i << "][" << j << "]=" <<next[i][j] <<endl;
          cout << S[i] << ", " << S[j] << endl;
          if (next[i][j] >= n){
            cout << "continue "<< endl;
            continue;
          }
            // 次の文字 j がもうない場合はスルー
            add(dp[next[i][j] + 1], dp[i]);
            cout << "add. " << dp[i] << endl;
        }
    }

    // 集計
    long long res = 0;
    for (int i = 0; i <= n; ++i){
      cout << "loop " << i << endl;
      add(res, dp[i]);
    }
    res--;

    cout << res << endl;
}
