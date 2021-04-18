#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
  int  N;
  int ans = 0;
  int sum=0;

  cin >> N;

  vector<int> L(N);
  for(int i = 0; i < N; i++){
    cin >> L[i];
  }

  sort(L.begin(), L.end());

  for(int i = 0; i < N-1; i++){
    sum += L[i];
  }
  if(L[N-1] < sum){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

}
