#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N, K;
  int ans=0;

  cin >> N >> K;

  if(N >= 13){
    ans += K;
  }else if(N >= 6 && N <= 12){
    ans += K/2;
  }else{
    ans = 0;
  }

  cout << ans << endl;
}
