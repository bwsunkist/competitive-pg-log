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
  string s1;
  istringstream ss1;
  int p1;

  //string >> int
  cin >> s1;

  for(int i = 0; i < s1.length(); i++){
    if(s1[i] == '1'){
      s1[i] = '9';
    }else if(s1[i] == '9'){
      s1[i] = '1';
    }
  }

  // ss1 = istringstream(s1);
  // ss1 >> p1;

  cout  << s1 << endl;
}
