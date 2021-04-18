#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<string.h>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N, Q;
  string s;
  int ans = 0;
  int cnt = 0;

  cin >> N >> Q;
  cin >> s;
  vector <int> l(Q);
  vector <int> r(Q);
  for(int i = 0; i < Q; i++){
    cin >> l[i] >> r[i];
  }

  vector <int> c(N+1);
  for(int i = 0; i <= N; i++){
    if(i >= 2){
      if(s[i-2]== 'A' && s[i-1] == 'C'){
        cnt++;
      }
    }
    c[i] = cnt;
    // cout << c[i] << ",";
  }
  // cout << endl;

  int tmpl = 0;
  for(int i = 0; i < Q; i++){
    tmpl = max(c[l[i]-1], c[l[i]]);
    ans = c[r[i]] - tmpl;

    // cout << "tmpl = " << tmpl << ", c[r[" << i+1 << "]] = " << c[r[i]]  << endl;

    cout << ans << endl;
  }
}
