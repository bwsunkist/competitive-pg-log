#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  long N;
  long ans=0;
  
  cin >> N;
  
  vector<long> A(5);
  for(int i = 0; i < 5; i++){
    cin >> A[i];
  }

  sort(A.begin(), A.end(), greater<int>());
  
  long memo = N/A[A.size()-1];


  if(N%A[A.size()-1] != 0){
    memo++;
  }

  ans = memo + 4;

  cout << ans << endl;

}
