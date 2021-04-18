#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int ans=0;

  vector<int> p(3);
  for(long i = 0; i < 3; i++){
    cin >> p[i];
  }

  sort(p.begin(), p.end());

  cout << p[0] + p[1] << endl;
}
