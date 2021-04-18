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

  vector<int> A(N);
  vector<int> B(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
    B[i] = i+1;
  }
  vector<pair<int,int>> AB(N);
  for(int i = 0; i < N; i++){
    AB[i] = make_pair(A[i], B[i]);
  }
   sort(AB.begin(), AB.end());

  
  for(int i = 0; i < N; i++){
    if(i>0){
      cout <<" " ;
    }
    cout  <<  AB[i].second;
  }
    cout << endl;


}
