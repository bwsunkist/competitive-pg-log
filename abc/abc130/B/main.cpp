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

  cin >> N >> X;

  vector<int> L(N);
  for(long i = 0; i < N; i++){
    cin >> L[i];
  }

  int cnt = 1;//D1=0
  int tmp =0;
  
  for(long i = 0; i < N; i++){
    tmp = tmp + L[i];
    
    if(tmp > X){
      break;
    }
    cnt++;
  }

  cout << cnt << endl;
}
