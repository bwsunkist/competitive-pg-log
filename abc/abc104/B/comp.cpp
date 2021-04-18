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
  char s;
  int ans = 0;
  string t;

  cin >> t;
  s = t[0];

  if(t == "test" ){
    cout << "A" << endl;
  }
  if(t[0] == 't' ){
    cout << "test" << endl;
  }

  int smllcnt = 0;
  if(t[0] >= 'a' && t[0] <= 'z'){
    cout << "small" << endl;
  }else if(t[0] >= 'A' && t[0] <= 'Z'){
    cout << "large" << endl;
  }else if(t[0] >= '0'){
    cout << "number" << endl;
  }

}
