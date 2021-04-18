#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  int k;
  int swp;
  int ans=0;

  //長さNの配列を作成.
  vector<int> A(5);
  for(int i = 0; i < 5; i++){
    cin >> A[i];
  }
  //  cout << "---" << endl;

  
  for(int i=1; i<5; i++){
    if(A[i-1]%10 < A[i]%10 &&  A[i]%10 != 0){
      swp=A[i-1];
      A[i-1]=A[i];
      A[i] = swp;
    }else if(A[i]%10 ==0){
      swp=A[i-1];
      A[i-1]=A[i];
      A[i] = swp;
    }

    
  }


  
  for(int i=0; i<4; i++){
    if(A[i]%10 != 0){
      ans=ans+(A[i]/10+1)*10;
    }else{
      ans=ans+A[i];
    }
    //    cout << "+" << A[i] << " "<< ans << endl;
  }

  ans=ans+A[4];

  cout << ans << endl;

}
