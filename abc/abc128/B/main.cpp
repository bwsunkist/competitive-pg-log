#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N;
  int ans=0;

  cin >> N;

  vector<string> s(N);
  vector<int> p(N);
  vector<pair<pair<string, int>, int>> sp(N);
  for(long i = 0; i < N; i++){
    cin >> s[i] >> p[i];
    sp[i] = make_pair(make_pair(s[i], -p[i]), i+1);
  }

  sort(sp.begin(), sp.end());
  
  for(long i = 0; i < N; i++){
    cout << sp[i].second << endl;
  }
}
