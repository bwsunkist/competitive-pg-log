#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  long N, K;
  long tmp;
  long ans=0;

  cin >> N;

  for(long i =1; i*i<N; i++){
    if(N%i == 0){
      if(i!=1){
        if(N/(i-1) == N%(i-1)){
          ans = ans+(i-1);
      }
      }
      if(i*i !=N){
        tmp = N/i;
        if(N/(tmp-1) == N%(tmp-1)){
          ans = ans+(tmp-1);
        }
      }
    }
    
  }
  
  
    cout << ans << endl;
}
