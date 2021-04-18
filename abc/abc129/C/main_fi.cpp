#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

void dfs(long long x, long long  size,long long *cnt){
  cout << "---------" << endl;
  cout << "start  x,size=(" <<  x << "," << size << ")" << endl;
  cout << "---------" << endl;

  if(x == size){
    *cnt = *cnt +1;
    cout << "c++ >> " << *cnt << endl; 
    cout << "ゴール到達" << endl;
    
    return;
  }

   if(x <= size-2){
    cout << "dfs(" << x << "," << *cnt << ")" << endl;
    cout << "x+2" << endl;
    dfs(x+2, size, cnt);
  }else{
    cout << "もう二段飛びは無理 " << endl;
  }

      
  if(x < size){
    cout << "dfs(" << x << ","  << *cnt << ")" << endl;
    cout << "x+1" << endl;
    dfs(x + 1, size, cnt);
  }else{
    cout << "なにかおかしい" << endl;
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
    for(long long i = 1; i < M-1; i++){
      dfs(a[i]+1, a[i+1]-1, &cnt);
      b[bcnt]=cnt;
      bcnt++;
      cnt=0;
    }
  }

  if(M !=0){
    //last
    cout << "last ************" << endl;
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

  cout << "------------" << endl;
  for(long long i=0; i< bcnt; i++){
    
    cout << "ans =" << ans << " * "<< b[i] <<endl;
    ans = ans*b[i]%1000000007;
  }

  
  cout << "Answer = " << ans << endl;

}
