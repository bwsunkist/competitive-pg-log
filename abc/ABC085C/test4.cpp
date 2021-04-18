#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N;
  int x=-1;
  int y=-1;
  int z=-1;
  long Y;
  int tmp1=0;
  int tmp2=0;
  int ans=0;
  int cnt=0;

  cin >> N >> Y;

  if(Y%1000 != 0){
    cout << x << " " << y << " " << z << endl;
    return 0;
  }
  
  for(int i = 0; i <=N; i++){
    x=i;
    if(i*10000 <= Y){
      tmp1 = Y-i*10000;

      for(int j = 0; j <= N-i; j++){
        y=j;
        if(j*5000 <= tmp1){
          tmp2 = tmp1 - j*5000;

          int k=N-i-j;
            z=k;
            if(tmp2/1000 == k && tmp2%1000==0){
              cout << x << " " << y << " " << z << endl;
              return 0;
            }
        }
      }
    }
  }

  x=-1;
  y=-1;
  z=-1;
  cout << x << " " << y << " " << z << endl;
}
