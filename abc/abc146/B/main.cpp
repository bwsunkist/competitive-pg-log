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
  int N, M;
  int ans = 0;
  string s;

  cin >> N;
  cin >> s;

  for(int i = 0; i < s.size(); i++){
    char c;

    if((s[i]+N - 'A') > 25){
      c=s[i]+N-26;
      // cout << "a--";
    }else{
      c=s[i]+N;
      // cout << "b--";
    }
    // cout << " ";
 
    printf("%c", c); 
    // cout << endl;
  }

  cout  << endl;

}
