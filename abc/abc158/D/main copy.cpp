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
  int N, M, Q;
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

  for(int i = 0; i < Q; i++){
    if(t[i] == 1){
        reverse(s.begin(), s.end());
    }else{
      if(f[i] == 1){
        s = c[i] + s;
      }else{
        s = s + c[i];
      }
    }
  }


  cout << s << endl;


}

