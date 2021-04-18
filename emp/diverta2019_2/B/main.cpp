#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int ans=0;
  long long  tmp=0;
  long long  tmpx = 0;
  long long  tmpy = 0;
  int N=0;
  int K=0;

  cin >> N;

  vector<long long> x(N);
  vector<long long> y(N);
  vector<pair<long long ,long long>> xy(N);
  for(int i = 0; i < N; i++){
    cin >> x[i] >> y[i];
    xy[i] = make_pair(x[i], y[i]);
  }

  sort(xy.begin(), xy.end());

  int loop =0;
  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      tmpx = xy[j].first - xy[i].first;
      tmpy = xy[j].second - xy[i].second;

      for(int k = 0; k < N; k ++ ){
        while(tmpx * k <= N){
          if(xy[k].first == xy[N-1].first - tmpx 
             && xy[k].second == xy[N-1].second - tmpy){
            
          }
      }while()
        
    }
  }
  
  
}
