#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int cnt=0;
  int N, K;
  string S;
  string tmp;

  cin >> N >> K;
  cin >> S;

  tmp = S[K-1];
  if(tmp == "A" ){
    S.replace(K-1, 1, "a");
  }else if(tmp == "B"){
    S.replace(K-1, 1, "b");
  }else if(tmp == "C"){
    S.replace(K-1, 1, "c");
  }

  cout << S << endl;
}
