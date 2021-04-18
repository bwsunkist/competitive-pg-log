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
  int N;
  long long ans = 0;
  cin >> N;

  vector<vector<int>> a(N, vector<int>(26));
  vector<string> s(N);
  for(int i = 0; i < N; i++){
    cin >> s[i];

    //どの英字が何回使われているかカウント
    for(int j =0 ; j < s[i].size(); j++){
      a[i][s[i][j] + 'A'- 162]++;
    }
  }

  sort(a.begin(), a.end());
    // for(int j =0 ; j < s[0].size(); j++){
    //   cout << a[0][j] << ", " << a[1][j] 
    //     << ", " << a[2][j]
    //     << ", " << a[3][j]
    //     << ", " << a[4][j]
    //     << endl;
    // }
    long long cntn = 0;
  for(int i = 1; i < N; i++){
    if(a[i-1] == a[i]){
      // ans++;
      cntn ++;
    }else{
      if(cntn>0){
        if(cntn == 1){
          ans++;
        } else{
          ans += (cntn*(cntn+1))/2;
        }
      }
      cntn = 0;
    }
  }
  
  if(cntn == 1){
    ans++;
  } else{
    ans += (cntn*(cntn+1))/2;
  }

  cout << ans << endl;
}
