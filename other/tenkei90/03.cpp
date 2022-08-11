#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;


void dfs(int x, int before_x, vector<vector<int>> *AB, int now_depth, int *max_depth, int *last_x){
  const int SIZE = (*AB)[x].size();
  int called = 0;

  for(int i = 0; i < SIZE; i++) { 
    if ((*AB)[x][i] != before_x) {
      called++;
      dfs((*AB)[x][i], x, AB, now_depth + 1, max_depth, last_x);
    }
  }

  if(called == 0) {
    // 来た経路しかない＝最終地点
    if (*max_depth < now_depth) {
      *max_depth = now_depth;
      *last_x = x;
    }
  }
}

int main() {
  int N;

  cin >> N;

  vector<vector<int>> AB(N+1, vector<int>(0));
  for(int i = 0; i < N-1; i++){
    int a, b;
    cin >> a >> b;
    AB[a].push_back(b);
    AB[b].push_back(a);
  }

  int depth1 = 0;
  int last_x1 = 0;
  dfs(1, -1, &AB, 0, &depth1, &last_x1);

  int depth2 = 0;
  int last_x2 = 0;
  dfs(last_x1, -1, &AB, 0, &depth2, &last_x2);

  cout << depth2 + 1 << endl;
}
