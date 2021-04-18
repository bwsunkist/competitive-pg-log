#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
  int N, M;

  cin >> N >> M;

  vector<vector<long long >> a(M+N, vector<long long>(M+N));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
    cin >> a[i][j];
    }
  }

  long long allscore = 0;  //全組み合わせ中の最高得点
  for(int i = 0; i < M; i++){
    for(int j = i+1; j < M; j++){
      long long tmpscore = 0;      //i 番目, j番目の曲を選んだ場合のスコア？
      for(int k = 0; k < N; k++){
        //k人分考える
        long long score = max(a[k][i], a[k][j]);
        tmpscore+=score;
      }
      allscore = max(allscore, tmpscore);
    }
  }

  cout << allscore << endl;

}
