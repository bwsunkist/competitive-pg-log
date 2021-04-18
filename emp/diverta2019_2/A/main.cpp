#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int ans=0;
  int N=0;
  int K=0;

  cin >> N >> K;

  
  if(K > 1){
    cout << N-K << endl;
  }else{
    cout << 0 << endl;
  }
  
}
