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
    cout << x[i] << y[i] << endl;
  }
    cout << "Ok1" << endl;

  sort(xy.begin(), xy.end());
  for(int i = 0; i < N; i++){
    cout << xy[i].first << ", " << xy[i].second << endl;
  }
  cout << " --- "<< endl;

  vector<vector<long long>> sx(N, vector<long long >(N));
  vector<vector<long long>> sy(N, vector<long long >(N));
  
  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      sx[i][j] = xy[j].first - xy[i].first;
      sy[i][j] = xy[j].second - xy[i].second;
    }
  }
    cout << "Ok2" << endl;
  

  //  vector<vector<long long>>cnt(N, vector<long long >(N));
  int cnt =0;
  for(int j =N-1; j>=0; j--){
    for(int i = j-1; i >=0; i--){
      cout << "i = " << i << ", j = " << j << endl;
      cout << "sx[i][j] = " << sx[i][j] << ", sy[i][j] = " << sy[i][j] << endl;

      
        for(int k = 0; k < N; k++){
          for(int l = k+1; l < N; l++){
            cout << "k = " << k << ", l = " << l << endl;
      cout << "sx[k][l] = " << sx[k][l] << ", sy[k][l] = " << sy[k][l] << endl;
            
            if(i != k && j != l){
              if(sx[i][j] == sx[k][l]
                 && sy[i][j] == sy[k][l]){
                cnt++;
              }
            }
          }
        }

        cout << "cnt = " << cnt << endl;;
        ans = max(ans, cnt);
        cnt = 0;
    }
  }
  ans++;
  cout << "ans = " << ans << endl;
  
  
  cout << N - ans << endl;;
}
