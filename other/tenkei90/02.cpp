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


void dfs(int x, int y, int size, string result){
  const int SIZE = size;

  //ゴールについたら終了
  if(x == SIZE && y == SIZE){
    cout << result << endl;
    return;
  }
  
  if(x < SIZE){
    dfs(x+1 , y, SIZE, result + '(');
  }

  if(y < SIZE){
    if (y < x) {
      dfs(x , y+1, SIZE, result + ')');
    }
  }
}


int main() {
  int N;

  cin >> N;

  if(N % 2 == 1) return 0;

  dfs(1, 0, N/2, "(");
}
