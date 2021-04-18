#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  int N, M ;

  cin >> N >> M ;

  //長さNの配列を作成. 
  vector<int> A(N), B(N);
  for(int i = 0; i < N; i++){
    cin >> A[i] >> B[i];
  }

  //pair<int,int> 2つのint型作成
  vector<pair<int,int>> AB(N);
  for(int i = 0; i < N; i++){
    AB[i] = make_pair(A[i], B[i]);
    cout << "AB[" << i << "].first = " << AB[i].first << "  ";
    cout << "AB[" << i << "].second = " << AB[i].second << endl;
  }

  sort(AB.begin(), AB.end());
  //  static_sort(AB.begin(), AB.end());
    cout << "sort completed."<< endl;

  
  for(int i = 0; i < N; i++){
    cout << "AB[" << i << "].first = " << AB[i].first << "  ";
    cout << "AB[" << i << "].second = " << AB[i].second << endl;
    }
  
  
}
