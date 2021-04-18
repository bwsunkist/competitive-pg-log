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
  char bf ;
  int ans = 0;

  cin >> s;

  for(int i = 0; i < s.size(); i++){
    if(i > 0){

      if(s[i] == bf){
        ans++;
        //cout << "ans++; i = " << i << endl;
        if(bf == '0'){
          bf = '1';
        }else{
          bf = '0';
        }

      }else{
        bf = s[i];
      }

    }else{
      bf = s[i];
    }
    
    //cout << " i = " << i  << ", bf = " << bf << endl;
  }

  cout << ans << endl;
}
