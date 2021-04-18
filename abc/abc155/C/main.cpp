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

int digsum(int n) {
  int res = 0;
  while(n > 0) {
    res ++;
    n /= 10;
  }
  return res;
}

int main() {
  int N, M;
 
  cin >> N >> M;

  vector<int> ans(N);
  vector<int> ans2(N,-1);
  vector<int> s(M);
  vector<int> c(M);
  vector<pair<int,int>> sc(M);
  for(int i = 0; i < M; i++){
    cin >> s[i] >> c[i];
  }
  for(int i = 0; i < M; i++){
    sc[i] = make_pair(s[i], c[i]);
  }
  sort(sc.begin(), sc.end());

  // cout << "--" << endl;
  // for(int i = 0; i < M; i++){
  //   cout << sc[i].first << ", " << sc[i].second << endl;
  // }

  for(int i = 1; i < M; i++){
    if(sc[i-1].first == sc[i].first 
      && sc[i-1].second != sc[i].second){
        cout << -1 << endl;
        return 0;
      } 
  }
  if(N > 1){
    for(int i = 0; i < M; i++){
      if(sc[i].first == 1 
        && sc[i].second == 0){
          cout << -1 << endl;
          return 0;
        }
    }
  }

  // if(N == 1 && M == 0){
  //   cout << 0 << endl;
  //   return 1;
  // }
  if(M == 0){
    if(N == 3){
      cout << 100 << endl;
      return 0;
    }else if(N == 2){
      cout << 10 << endl;
      return 0;
    }else if(N ==1){
      cout << 0 << endl;
       return 0;
    }
  }


  for(int i = 0; i < M; i++){
    ans[sc[i].first-1] = sc[i].second;
    ans2[sc[i].first-1] += 2;
  }
  //     cout << "---" << endl;
  // for(int i = 0; i < M; i++){
  //     cout << ans2[i] << endl;
  //     cout << ",";
  // }
  //     cout << endl;
  //     cout << "---" << endl;
  for(int i = 0; i < N; i++){
    if(ans2[i] > 0){
      cout << ans[i];
      // cout << "a" << endl;
    }else if(i == 0 && N != 1){
      cout << 1;
      // cout << "b" << endl;
    }else{
      cout << 0;
      // cout << "c" << endl;
    }
  }
  cout << endl;

}
