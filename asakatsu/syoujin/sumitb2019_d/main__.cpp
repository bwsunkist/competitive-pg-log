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

//順番保持しておく必要あったのでこの回答はお蔵入り
int main() {
  int  n;
  string s = "";
  string ss;
  vector<int> c(10, 0);
  int ans = 0;

  cin >> n;
  cin >> ss;

  s += to_string(ss[0]-'0');
  sort(ss.begin(), ss.end());
  for(int i = 0; i < ss.size(); i++){
    c[ss[i]-'0']++;
  }

  int numsize = 0;
  for(int i = 0; i < 10; i++){
    if(c[i] > 0){
      numsize++;
    }
  }
  cout << "numsize = " << numsize << endl;
  for(int i = 0; i < 10; i++){
    //3つ揃いの集計
    if(c[i] >= 3){
      ans++;
      cout << "３揃い += " << 1 << endl;
    }
    //2つ揃いの集計
    if(c[i] >= 2){
      ans += (numsize-1);
      cout << "2揃い += " << (numsize-1) << endl;
    }
  }
  if(numsize == 3){
    ans++;
    cout << "全部バラバラ += " << 1 << endl;

  }else{
    if(numsize > 5){
      ans += numsize*(numsize-1)*(numsize-2);
      cout << "全部バラバラ += " << numsize*(numsize-1)*(numsize-2) << endl;
    }else if(numsize > 4){
      ans += numsize*(numsize-1);
      cout << "全部バラバラ += " << numsize*(numsize-1) << endl;
    }else if(numsize > 3){
      ans+= numsize;
      cout << "全部バラバラ += " << numsize << endl;
    }
  }
  cout << ans << endl;
}
