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
  string s;
  int ans = 0;

  cin >> s;

  //case1
  if(s[0] == 'A'){
    ans++;
//    cout << "case1: OK" << endl;
  }

  //case2
  int ccnt = 0;
  for(int i = 2; i < (s.size() - 1); i++){
    if(s[i] == 'C'){
      ccnt++;
    }
  }
  if(ccnt == 1){
    ans++;
//    cout << "case2: OK" << endl;
  }

  //case3
  int smllcnt = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      smllcnt++;
    }
  }
  if(smllcnt == s.size()-2){
    ans++;
//    cout << "case3: OK" << endl;
  }

  if(ans == 3){
    cout << "AC" << endl;
  }else{
    cout << "WA" << endl;

  }
}
