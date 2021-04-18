#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int H,W;
  string tmp;

  cin >> H >> W;
  vector<string> S(H);
  for(int i=0; i<H; i++){
    cin >> S[i];
  }

  for(int i=0; i<H; i++){
    cout << S[i] << endl;
  }

  cout << S[0][0] << endl;
  cout << S[1][1] << endl;
  cout << S[2][2] << endl;

}
