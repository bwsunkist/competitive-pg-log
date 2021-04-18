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
  long long N;
  long long  ans = 0;
  string S;

  cin >> S;
  istringstream ss1 =  istringstream(S);
  ss1 >> N;
  
  // cout << "---------" << endl;

  // cout << N << endl;

  int l = S.length();
  int t = 10;
  vector<int> n(l);
  for(int i = 0; i < l; i++){
    n[l-i-1] = N%t;
    N = N/10;
  }
  // cout << "---------" << endl;

  int minx = 1000;
  for(int i = 0; i< l-2; i++){
    int num = n[i]*100 + n[i+1]*10+n[i+2];
    minx = min(minx, abs(753 - num));
    // cout << 753 << "-" <<num<< "="<< abs(753 - num)<< endl;
  }
  // cout << "---------" << endl;
  cout << minx << endl;
} 
