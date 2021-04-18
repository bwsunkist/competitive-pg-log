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
  int ans = 0;
  string X;

  cin >> N;

  vector<int> t(N);
  vector<string> s(N);
//  vector<pair<int,int>> AB(N);
  for(int i = 0; i < N; i++){
    cin >> s[i] >> t[i];
  }
  cin >> X;

  int lastindex = 0;
  for(int i = 0; i < N; i++){
    if(s[i] == X){
      lastindex = i;
      break;
    }
  }
  lastindex++;
  for(int i = lastindex; i < N; i++){
    ans += t[i];
  }


  cout << ans << endl;

}
