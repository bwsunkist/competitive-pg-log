#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  int coin=0;
  int A, B;

  cin >> A >> B;

  for(int j =0; j<2; j++){
    
    if(A > B){
      coin = coin + A;
      A--;
    }else if(B > A){
      coin = coin + B;
      B--;
    }else if(A == B){
      coin = coin + A;
      A--;
    }
  }

  cout << coin << endl;

}
