#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  long long N, M;
  long long ans=0;
  long long tmps = 0;
  long long tmpe = 0;
  long long use=0;
  long long ES =0;
  long long X = 0;

  cin >> N >> M;

  vector<long long > x(N);
  for(long long  i = 0; i < N; i++){
    cin >> x[i];
  }

  sort(x.begin(), x.end());

  //  for(long long  i = 0; i < N; i++){
  //    cout << x[i] << ", ";
  //  }
  //  cout << endl;

  vector<long long > s(M), e(M);
  vector<pair<long long , long long >> es(M);
  for(long long  i = 0; i < M; i++){
    cin >> s[i] >> e[i];
    es[i] = make_pair(e[i], s[i]);
  }
  
  sort(es.begin(), es.end(), greater<pair<long long,long long>>());
  
    for(long long  i = 0; i < M; i++){
      //    cout << "es[" << i << "] = [" << es[i].first
      //         << ", "<< es[i].second << "]" <<  endl;
    }
  
  for(long long  i = 0; i < N; i++){
    if(ES < M){
      if(x[i] < es[ES].first){
        ans += es[ES].first;
        //        cout << 1 << " " << es[ES].first << endl;
        use++;
        if(es[ES].second == use){
          ES++;
          use = 0;
        }
      }else{
        ans += x[i];
        //        cout << x[i] << endl;
        //        cout << 2 << " " << x[i] << endl;
      }
    }else{
      ans += x[i];
      //        cout << x[i] << endl;
        //        cout << 3 << " " << x[i] << endl;
    }
  }

  cout << ans << endl;
}
