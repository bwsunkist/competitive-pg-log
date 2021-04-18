#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  int cnt=0;
  int A, B, K;
  int memo=0;
  int Kcnt=1;
  int ans =0;

  cin >> A >> B >> K;

  //Aを割り切れる数の探索->Amに格納
  vector<int> Am(A);
  for(int i = 1; i <= A; i++){
    if(A%i == 0){
      Am[cnt] = i;
      cnt++;
    }
  }

  //Bを割り切れる数の探索
  //見つけたらAmの数と比較->同じのがあればKcnt++
  //K == Kcntなら終了
  int lpflg =0;
  vector<int> kcnt(A+B);
  for(int i = 1; i <= B; i++){
    if(B%i == 0){
      for(int j = 0; j < cnt; j++){
        if(i == Am[j]){
          kcnt[Kcnt] = i;
          Kcnt++;
        }
      }
    }
  }
  
  cout << kcnt[Kcnt-K] << endl;

}
