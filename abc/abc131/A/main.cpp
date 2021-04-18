#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int ans=0;
  int X = 0;
  int N = 0;
  string s;

  cin >> s;
  
  for(long i = 0; i < 4; i++){
    
    if(i > 0){
      if(s[i-1] == s[i]){
        ans++;
      }
    }
  }

  if(ans > 0){
    cout << "Bad" << endl;
  }else{
    cout << "Good" << endl;
  }
}
