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
  int N;
  int bad = 0;
  char last = 'z';

  cin >> N;
  vector<string> W(N);
  for(int i = 0; i < N; i++){
    cin >> W[i];
    for(int j = 0; j < i; j++){
      if(W[i] == W[j]){
        bad++;
        // cout << "1" << endl;
        // cout << W[i] << "==" << W[j] << endl;
      }      
    }
    if(i > 0){
      if(last != W[i][0]){
        bad++;
        // cout << "2" << endl;
        // cout << last + "!=" << W[i][0] << endl;
      }
    }
    // cout << "---" << endl; 
    // cout << W[i] << endl; 
    // cout << W[i].length() << endl; 
    last = W[i][W[i].length()-1];
  }
  if(bad == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

}
