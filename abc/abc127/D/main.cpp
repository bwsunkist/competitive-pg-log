#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  long N, M;
  int ans=0;
  int start, end;
  int tmps = 0;
  int tmpe = 0;

  cin >> N >> M;

  vector<long> x(N);
  for(long i = 0; i < N; i++){
    cin >> x[i];
  }

  sort(x.begin(), x.end(), greater<long>());

  vector<long> s(M), e(M);
  vector<pair<long, long>> es(M);
  for(long i = 0; i < M; i++){
    cin >> s[i] >> e[i];
    es[i] = make_pair(e[i], s[i]);
  }

  sort(es.begin(), es.end(), greater<pair<long,long>>());

    for(int i = 0; i < M; i++){
    cout << "es[" << i << "].first = " << es[i].first << "  ";
    cout << "es[" << i << "].second = " << es[i].second << endl;
    }

  
  for(int i = N-1; i>= 0; i--){

    if(x[i] > es[tmps].first){
      ans += x[i];
      cout << "1:" << x[i] << ":" << es[tmps].first<< endl;
    }else{
      tmpe++;
      if(es[tmps].second >= tmpe){
        ans += es[tmps].first;
        cout << "tmps = " << tmps<< endl;
      cout << "2:" << x[i] << ":" << es[tmps].first<< endl;
      }else{
        tmps++;
        tmpe=0;
        if(x[i] < es[tmps].first){
          tmpe++;
          ans += es[tmps].first;
      cout << "3:" << x[i] << ":" << es[tmps].first<< endl;
        }else{
          ans += x[i];
      cout << "4:" << x[i] << ":" << es[tmps].first<< endl;
        }
      }
    }
  }
  cout << ans << endl;
}
