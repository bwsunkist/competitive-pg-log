#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<string.h>
#include<algorithm>
#include<climits>
using namespace std;

bool chks(char c){
  if(c == 'A'
      || c == 'T'
      || c == 'G'
      || c == 'C')
  {
      return true;
  }
  else{
    return false;
  }
}

int main() {
  string s;
  cin >> s;

  int N = s.size();
  int tmp = 0;
  int ans = 0;
  bool flg = false;
  for(int i = 0; i<N; i++){
    if(chks(s[i])){
      tmp++;
    }else{
      tmp = 0;
    }
    ans = max(ans, tmp);
  }
  cout << ans << endl;
}