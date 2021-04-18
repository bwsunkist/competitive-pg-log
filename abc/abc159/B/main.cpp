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
  string s1;
  string s2;

  cin >> s;
  N = s.size();
  s1 = s.substr(0, (N-1)/2);
  s2 = s.substr((N+1)/2, (N+3)/2);

  int n1 = s1.size();
  int n2 = s2.size();

  // cout << s << endl;
  // cout << s1 << endl;
  // cout << s2 << endl;

  int nt = N/2;  
  int n12 = n1/2;  
  int n22 = n2/2;  
  for(int i=0; i < nt; i++){
    // cout << s[i] << ", " << s[N-i-1] << endl;
    if(s[i] != s[N-i-1]){
      ans++;
    }
  }  
  for(int i=0; i < n12; i++){
    // cout << s1[i] << ", " << s1[n1-i-1] << endl;
    if(s1[i] != s1[n1-i-1]){
      ans++;
    }
  }
  // cout <<  " --- " << endl;
  for(int i=0; i < n22; i++){
    // cout << s2[i] << ", " << s2[n2-i-1] << endl;
    if(s2[i] != s2[n2-i-1]){
      ans++;
    }
  }

  if(ans > 0){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}
