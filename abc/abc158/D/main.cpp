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
  int N, Q;
  int ans = 0;
  string s;

  cin >> s;
  cin >> Q;

  vector<int> f(Q);
  vector<int> t(Q);
  vector<string> c(Q);
  for(int i = 0; i < Q; i++){
    cin >> t[i];
    if(t[i] == 2){
      cin >> f[i] >> c[i];
    }
  }

  N = 0;
  string tmp = "";
  string h = "";
  string b = "";
  for(int i = 0; i < Q; i++){
    if(t[i] == 1){
      N++;
    }else{
      if(f[i] == 1){
        if(N%2 == 1){
          b = b + c[i];
        }else{
          h = c[i] + h;
        }
      }else{
        if(N%2 == 1){
          h = c[i] + h;
        }else{
          b = b + c[i];
        }
      }
    }
    // cout << "N = " << N << ", h = " << h << ", b = " << b << endl;
  }

  if(N%2 == 1){
    reverse(s.begin(), s.end());
    reverse(h.begin(), h.end());
    reverse(b.begin(), b.end());
    s = b + s + h;
  }else{
    s = h + s + b;
  }
  cout << s << endl;


}

