#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
#include <numeric>
using namespace std;

int main() {
  int ans=0;
  int N;
  int all=0;
  int sum = 0;
  int tmp = 100000;

  cin >> N;
  vector<int> W(N);
  for(long i = 0; i < N; i++){
    cin >> W[i];
    all = all + W[i];
  }

  for(int i=0; i< N; i++){
    sum=sum+W[i];
    all=all-W[i];


    if (tmp < abs(all - sum)){
      break;
    }

    tmp = abs(all - sum);
  }

  cout << tmp << endl;
}
