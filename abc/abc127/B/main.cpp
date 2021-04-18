#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N, M;
  int ans=0;
  int start, end;
  int tmps, tmpe;

  cin >> N >> M;

  for(int i = 0; i < M; i++){
    cin >> tmps >> tmpe;

    if(i == 0){
      start = tmps;
      end = tmpe;
    }else{
      
      if(tmps > end){
        ans++;
      }else if(tmps > start)
        start = tmps;

      if(tmpe < start){
        ans++;
      }else if(tmpe < end){
        end = tmpe;
      }
      
    }
  }

    if(ans > 0 || start > N){
      cout << 0 << endl;
    }else if(end > N){
      cout << N - start +1 << endl;
    }else{
      cout << end - start +1 << endl;
    }

}
