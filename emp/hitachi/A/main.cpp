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
  string ans;
  string s;

  cin >> s;

  int fl = 0;
  int ct = 0;
  char tmp;
  N = s.size();
  if(s[0] != 'h'){
    cout << "No" << endl;
    return 0;
  }else{
    tmp = s[0];
  }

  if(s[0] == 'h' && N == 1){
    cout << "No" << endl;
    return 0;
  }
  if(N %2 == 1){
    cout << "No" << endl;
    return 0;
  }
  for(int i = 1; i < N; i++){
    if(tmp == 'h' && s[i] == 'i'){
      fl++;
    }else if(tmp == 'i' && s[i] == 'h'){
      fl++;
    }
    tmp = s[i];
  }
  //   if(s[i-1] == 'h' && s[i] != 'i' && ct%2 == 0){
  //     fl++;
  //   }
  //   ct++;
  // }

  // cout << fl << endl;
  if(fl == (s.size() -1)){
    ans = "Yes";
  }else{
    ans = "No";
  }
  cout << ans << endl;
}
