#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N;
  int x=-1;
  int y=-1;
  int z=-1;
  long Y;
  int tmp=0;
  int ans=0;
  int cnt=0;

  cin >> N;

  vector<int> d(N);
  for(int i = 0; i < N; i++){
    cin >> d[i];
  }

  sort(d.begin(), d.end());
  
  for(int i = 0; i < N; i++){
    //cout << i << "th d -> " << d[i] ;
    if(tmp < d[i]){
      cnt++;
      tmp = d[i];
      //cout << "  cnt++ !!" ; 
    }
    cout << endl;
  }
  
  
  cout << cnt  << endl;
}
