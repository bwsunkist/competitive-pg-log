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
  string a;

  cin >> s;

  vector<string> sv(4);
  for(int i = 0; i < 4; i++){
    sv[i] = s[i];
  }
  sort(sv.begin(), sv.end());

  if(sv[0] == sv[1] && sv[2] == sv[3] && sv[0] != sv[2]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
