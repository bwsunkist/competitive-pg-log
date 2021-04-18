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
  string ans = "";
  string s;

  cin >> s;

  int slen = s.size();
  for(int i = 0; i < slen; i++){
    if(s[i] == 'B'){
      if(ans==""){
        continue;
      }else{
        ans.pop_back();
      }
    }else if(s[i] == '0'){
      ans.push_back('0');
    }else if(s[i] == '1'){
      ans.push_back('1');
    }
  }

  cout << ans << endl;
}
