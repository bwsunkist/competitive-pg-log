#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N;
  int al=0; 
  int bb=0; 
  int ans=0;
  int cnt=0;

  cin >> N;

  //長さNの配列を作成.
  vector<long> A(N), B(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  sort(A.begin(), A.end());
  
  for(int i=N-1; i>=0; i--){
    if(cnt %2 == 0){
      //      cout << "al for i = " << i << endl; 
      al += A[i];
      cnt++;
    }else{
      //      cout << "bb for i = " << i << endl; 
      bb += A[i];
      cnt++;
    }
  }
  
  cout << al - bb << endl;
}
