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
    if(i*500 <= X){
      tmp1 = X-i*500;
      for(int j = B; j >= 0; j--){
        
        if(j*100 <= tmp1){
          tmp2 = tmp1 - j*100;

          for(int k = C; k>=0; k--){
          
            if(tmp2/50 == k ){
              cnt++;
            }
          }
          
        }
      }
    }
  }

  cout << cnt << endl;
}
