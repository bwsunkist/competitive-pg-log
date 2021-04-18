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
  long long  n;
  string s = "";
  string ss;

  cin >> n;
  cin >> ss;

  s += to_string(ss[0]-'0');
  sort(ss.begin(), ss.end());
  for(int i = 1; i < ss.size(); i++){
    if(ss[i] != ss[i-1]){
      s += to_string(ss[i]-'0');
      cout << "s += " << to_string(ss[i]-'0') << endl;
      cout << "s = " << s << endl;
    }
  }

  int N = s.size();
  int idx = 0;
  vector<string> ans(N*N*N);
  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      for(int k = j+1; k < N; k++){
        string tmp = to_string(s[i]-'0') + to_string(s[j]-'0') + to_string(s[k]-'0');
        ans[idx] = tmp;

        cout << "s[" << i << "] = " << s[i] << ", s[" << j << "] = " << s[j] << ", s[" << k << "] = " << s[k] << endl;
        cout << "ans[" << idx << "] = " << ans[idx] << endl;

        idx++;
      }
    }
  }
  int l = ans.size();
  int cnt = 0;
  sort(ans.begin(), ans.end());

  for(int i = 1; i < l; i++){
    if(ans[i] != ans[i-1]){
      cnt++;
    }
  }
  cout << cnt << endl;

}
