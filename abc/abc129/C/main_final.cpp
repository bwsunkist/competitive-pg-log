#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

void dfs(long long x, long long  size,long long *cnt){

  if(x == size){
    *cnt = *cnt +1;
    
    return;
  }

   if(x <= size-2){
    dfs(x+2, size, cnt);
   }
      
  if(x < size){
    dfs(x + 1, size, cnt);
  }

}


int main() {
  long long ans=1;
  long long tmp=0;
  long long cnt=0;
  long long bcnt=0;
  long long N =0;
  long long M =0;
  
  cin >> N >> M;

  vector<long long> a(M), b(M+1);
  for(long long i = 0; i < M; i++){
    cin >> a[i];
  }

  if(M != 0){
    dfs(0, a[0]-1, &cnt);
    b[bcnt]=cnt;
    bcnt++;
    cnt=0;
  }
    
  if(M > 1){

    dfs(a[0]+1, a[1]-1, &cnt);
    b[bcnt]=cnt;
    bcnt++;
    cnt=0;

    
    for(long long i = 1; i < M-1; i++){
      dfs(a[i]+1, a[i+1]-1, &cnt);
      b[bcnt]=cnt;
      bcnt++;
      cnt=0;
    }
  }

  if(M !=0){
    //last
    dfs(a[M-1]+1, N,  &cnt);
    b[bcnt]=cnt;
    bcnt++;
    cnt=0;

  }

  if(M==0){
    dfs(0,N,&cnt);
    b[bcnt]=cnt;
    bcnt++;
    cnt=0;
  }

  for(long long i=0; i< bcnt; i++){
    ans = ans*b[i];
  }

  
  cout << ans%1000000007 << endl;

}
