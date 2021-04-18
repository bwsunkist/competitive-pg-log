#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int H;
  int W;
  int ans=0;
  char tmps;

  cin >> H >> W;

  //長さNxMの配列を作成
  //Aは vector<int>の長さNの配列
  //これをvertor<int>(M)で初期化 (長さMの配列)
  vector<vector<int>> a(H, vector<int>(W));
  vector<vector<int>> L(H, vector<int>(W));
  vector<vector<int>> R(H, vector<int>(W));
  vector<vector<int>> D(H, vector<int>(W));
  vector<vector<int>> U(H, vector<int>(W));

  for(long i = 0; i < H; i++){
    for(long j = 0; j < W; j++){
      cin  >> tmps;

      if(tmps == '.'){
        //障害物なし
      a[i][j] = 0;
        //
        if(j==0){
          L[i][j] = 1;
        }else{
          L[i][j] = L[i][j-1] +1;
        }
        
        if(i==0){
          U[i][j] = 1;
        }else{
          U[i][j] = U[i-1][j] +1;
        }
        
      }else{
        //障害物あり
        a[i][j] = 1;

        L[i][j] = 0;
        U[i][j] = 0;
      }

      cout << "a[" << i << "][" << j << "] OK" << endl;
    }
  }

  cout << "array " << endl;
  for(long i = 0; i < H; i++){
    for(long j = 0; j < W; j++){
      cout << a[i][j];
    }
    cout << endl;
  }
  
  cout << "rev" << endl;
  reverse(a.begin(), a.end());
  for(int i=0; i<H; i++){
    reverse(a[i].begin(), a[i].end());
  }
  cout << "array " << endl;
  for(long i = 0; i < H; i++){
    for(long j = 0; j < W; j++){
      cout << a[i][j];
    }
    cout << endl;
  }

    
  for(long i = 0; i < H; i++){
    for(long j = 0; j < W; j++){
      if(a[i][j] == 0){
        //障害物なし
        //
        if(j==0){
          R[i][j] = 1;
        }else{
          R[i][j] = R[i][j-1] +1;
        }
        
        if(i==0){
          D[i][j] = 1;
        }else{
          D[i][j] = D[i-1][j] +1;
        }
        
      }else{
        //障害物あり

        R[i][j] = 0;
        D[i][j] = 0;
      }
    }
  }

    for(long i = 0; i < H; i++){
      for(long j = 0; j < W; j++){
        ans = max(ans, L[i][j]+R[i][j]+D[i][j]+U[i][j]-4);
      }
    }
      
  cout << ans << endl;

}
