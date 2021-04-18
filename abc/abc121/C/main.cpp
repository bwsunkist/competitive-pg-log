#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
  int N, M;
  long long ans = 0;
  long long cnt = 0;

  cin >> N >> M;

  vector<long long> A(N);
  vector<long long> B(N);
  vector<pair<long long, long long>> AB(N);
  for(int i = 0; i < N; i++){
    cin >> A[i] >> B[i];
    AB[i] = make_pair(A[i], B[i]);
  }

  sort(AB.begin(), AB.end());

  for(int i = 0; i < N; i++){
    //cout << AB[i].first << ", " << AB[i].second << endl;
    //cout << "i = " << i << ", cnt = " << cnt << endl;

    if((M - cnt) >= AB[i].second){
      //全部買ってもまだ足りない
      ans += AB[i].first * AB[i].second;
      cnt += AB[i].second;
      //cout << "p1:++ ,  ans += " << AB[i].first * AB[i].second << endl;
    }else{
      //全部買ったら多すぎる
      int pcNum = M - cnt; 
      ans += AB[i].first * pcNum;
      //cout << "p2:++ ,  ans += " << AB[i].first * pcNum << endl;
      break;
    }
    //cout << "ans = " << ans << endl;
  }

  cout << ans << endl;
}
