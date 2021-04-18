#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
  int N, M;
  int ans = 0;
  int tmp;

  cin >> N >> M;

  vector<int> K(N);
  vector<int> A(M+1, 0);
  for(int i = 0; i < N; i++){
    cin >> K[i];
    for(int j = 0; j < K[i]; j++){
      cin >> tmp;
      A[tmp]++;
    }
  }

  for(int i = 0; i <= M; i++){
    //cout << "cnt = " << A[i] << " at num = " << i <<endl;
    if(A[i] == N){
      ans++;
      //cout << "ans++" << endl;
    }
  }
  cout << ans << endl;

}
