#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N;
  int cnt;
  int num;
  int ans=INT_MAX;

  cin >> N;

  //長さNの配列を作成.
  vector<long> A(N), B(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  for(int i = 0; i < N; i++){
    cnt = 0;
    num = A[i];
    while(num%2 == 0){
      num=num/2;
      cnt++;
    }
    ans = min(ans, cnt);
  }

  cout << ans << endl;
}
