#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int A;
  int B;
  int T;
  int ans = 0;
  int time = 0;
  int cnt = 1;

  cin >> A >> B >> T;

  time += A;
  while(time <= T){
    ans += B;
    time += A;
  }
  
  cout << ans << endl;
}
