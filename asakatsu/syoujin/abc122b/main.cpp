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
  int ans = 0;
  string s;

  cin >> s;

  int l = s.size();
  int tmp = 0;
  // if(l == 1)l++;
  for(int i = 0; i < l; i++){
    if(s[i] == 'A' 
        || s[i] == 'C' 
        || s[i] == 'G' 
        || s[i] == 'T' )
    {
      tmp++;
    }else{
      ans = max(ans, tmp);
      tmp = 0;
    }

    if(i == (l-1)){
      ans = max(ans, tmp);
    }
  }
  cout << ans << endl;

}
