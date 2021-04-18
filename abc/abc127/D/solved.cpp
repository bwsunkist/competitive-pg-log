#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  long long  N, M;
  long long ans=0;
  long long vec=0;
  long long vec2=0;
  long long tmps = 0;
  long long tmpe = 0;

  cin >> N >> M;

  vector<long long> x(N);
  for(long long i = 0; i < N; i++){
    cin >> x[i];
  }
  
  sort(x.begin(), x.end());
  
  vector<long long> s(N*M);
  for(long long i = 0; i < M; i++){
    cin >> tmps >> tmpe;
    
    for(long long j = 0; j < tmps; j++){
      s[vec] = tmpe;
      vec++;
    }
  }
  sort(s.begin(), s.end(), greater<long long>());

  
  vec2=0;
  
  for(long long i=0; i<N; i++){
    if(i < vec){
      if(x[i] < s[vec2]) {
        ans += s[vec2];
        vec2++;
      }else{
        ans += x[i];
      }
    }else{
      ans += x[i];
    }
  }
  
  cout << ans << endl;
  
}
