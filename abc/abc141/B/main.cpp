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
  int ans = 0;
  string s;

  cin >> s;

  N = s.size();
  for(int i = 1; i <= N; i++){
    if(i%2 == 1){
      if(s[i-1] == 'L'){
        ans++;
        continue;
      }
    }else{
      if(s[i-1] == 'R'){
        ans++;
        continue;
      }
    }
  }
  if(ans > 0){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }

}
