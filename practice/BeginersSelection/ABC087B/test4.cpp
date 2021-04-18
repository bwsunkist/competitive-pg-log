#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int A,B,C,X;
  int cnt=0;
  int num;
  int tmp1,tmp2;

  cin >> A >> B >> C >> X;

  for(int i = A; i >= 0; i--){
    cout << "*********loop start*********" << endl;
    cout << "500 num = "<< i << endl;
    if(i*500 <= X){
      tmp1 = X-i*500;
      cout << "tmp1 = " << tmp1 << endl;
      for(int j = B; j >= 0; j--){
        cout << "++++++mini loop start ++++++" << endl;
        cout << "100 num = " << j  << endl;
        
        if(j*100 <= tmp1){
          tmp2 = tmp1 - j*100;
          cout << "tmp2 = " << tmp2 << endl;

          for(int k = C; k>=0; k--){
            cout << "==== minimini loop start" << endl;
          
            if(tmp2/50 == k ){
              cout << "50*" << k<< "  cnt++" << endl;
              cnt++;
            }
          }
          
        }
      }
    }
    cout << "********* loop end *********" << endl;
  }

  cout << cnt << endl;
}
