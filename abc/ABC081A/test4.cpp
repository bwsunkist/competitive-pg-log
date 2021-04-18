#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  string s;
  int cnt =0;

  cin >> s;

  for(int i=0; i< 3; i++){
    if(s[i]=='1'){
      cnt++;
    }
  }

  cout << cnt << endl;
}
