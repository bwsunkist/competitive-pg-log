#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  long N;
  int swp;
  int ans=0;
  
  cin >> N;
    cout << "input " << N << endl;

  
  vector<long> A(5);
  for(int i = 0; i < 5; i++){
    cin >> A[i];
    cout << "input " << A[i] << " (i=" << i << ")" << endl;
  }

      cout << "input END" << endl;
  
    vector<long> B(6);
  B[0] = N;

  while(B[0]>0 || B[1]>0 || B[2]>0 || B[3]>0 || B[4]>0){
      cout << "while Loop" << endl;

    
    for(int i=5; i>0; i--){

        cout << i << endl;
      
      if(B[i-1] >A[i-1]){
        B[i] = B[i] + A[i-1];
        B[i-1] = B[i-1] - A[i-1];
        cout << "B[" << i-1 << "] -> B[" << i << "]  " << A[i-1] << endl;
        cout << "B[" << i-1 << "] =" <<  B[i-1] << endl;
        cout << "B[" << i << "] =" <<  B[i] << endl;
      }else if(B[i-1]>0){
        B[i] = B[i] + B[i-1];
        B[i-1] = 0;
        cout << "B[" << i-1 << "] -> B[" << i << "]  " << B[i-1] << endl;
        cout << "B[" << i-1 << "] =" <<  B[i-1] << endl;
        cout << "B[" << i << "] =" <<  B[i] << endl;
      }


    }
          ans++;
      cout << "ans =" << ans << endl;
  }


  cout << ans << endl;

}
