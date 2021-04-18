#include<iostream>
#include<string>
using namespace std;

int main() {
  string s;
  string t;
  int ans = 0;

  cin >> s;
  cin >> t;

  for(int i = 0; i < 3; i++){
    if(s[i] == t[i])ans++;
  }

  cout << ans << endl;
}
