#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorism>
using namespace std;

int main() {
  int N, M ,C;

  cin >> N >> M >> C;

  //長さMの配列を作成. 要素0で初期化
  vector<int> B(M, 0);
  for(int i = 0; i < M; i++){
    cout << "B[" << i << "] = " << B[i] << endl;
    cin >> B[i];
    cout << "B[" << i << "] = " << B[i] << endl;
  }


  //長さNxMの配列を作成
  //Aは vector<int>の長さNの配列
  //これをvertor<int>(M)で初期化 (長さMの配列)
  vector<vector<int>> A(N, vector<int>(M));

  
  

  
}
