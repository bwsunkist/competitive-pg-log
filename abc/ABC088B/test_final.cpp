#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N;
  int tmp=0;
  int ans=0;
  int cnt=0;

  cin >> N;

  //長さNの配列を作成.
  vector<long> A(N), B(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  sort(A.begin(), A.end());
  
  for(int i=0; i<N; i++){


    if(A[i]>tmp){
      tmp=A[i];
      cnt++;
    }
  }
  
  cout << cnt << endl;
}
