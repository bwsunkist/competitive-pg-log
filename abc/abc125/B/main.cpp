#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  long long ans=0;
  int K = 0;
  int N = 0;
  long long tmp = 0;
  int cnt = 0;

  cin >> N;
  vector<int> V(N), C(N), A(N);
  for(long i = 0; i < N; i++){
    cin >> V[i];
  }
  for(long i = 0; i < N; i++){
    cin >> C[i];
  }
  for(long i = 0; i < N; i++){
    A[i] = V[i] - C[i];

    if(A[i] > 0){
      ans += A[i];
    }
  }
  
  
  cout << ans << endl;
}
