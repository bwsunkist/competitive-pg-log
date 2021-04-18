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

  for(int i = 0; i < 4; i++){
    if(s[i] == '+'){
      ans++;
    }else if(s[i] == '-'){
      ans--;
    }
  }
  cout << ans << endl;
}
