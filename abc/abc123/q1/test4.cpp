#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  int k;
  int flg=0;

  //長さNの配列を作成.
  vector<int> A(5);
  for(int i = 0; i < 5; i++){
    cin >> A[i];
  }

  cin >> k;

  for(int j =0; j<4; j++){
    if(A[4-j]-A[0] > k){
      cout << ":(" << endl;
      flg++;
      break;
    }
  }

  if(flg==0){
  cout << "Yay!" << endl;
  }

}
