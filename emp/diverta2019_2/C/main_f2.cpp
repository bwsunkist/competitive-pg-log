#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  long long ans=0;
  long long tmp=0;
  int N=0;
  int bcnt=0;
     
  cin >> N;
  
  vector<long long> a(N);
  vector<long long> b(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
    if(a[i] < 0){
      bcnt++;
    }
  }

  sort(a.begin(), a.end());

      
  if(bcnt < 2){

    if(N>2){
      
      tmp = a[0] - a[1];
      
      for(int i = 2; i< N-1; i ++){        
        tmp = tmp - a[i];
      }
    
      ans = a[N-1] - tmp;     
      cout << ans<< endl;
      
      cout <<  a[0] << " " << a[1] << endl;
      tmp = a[0] - a[1];
      
      for(int i = 2; i< N-1; i ++){
        cout <<  tmp << " " << a[i] << endl;
        tmp = tmp - a[i];
      }
    cout << a[N-1] << " " << tmp << endl;

    }else{
      tmp = a[1] - a[0];
      cout << tmp << endl;
      cout <<  a[1] << " " << a[0] << endl;
    }
    
  }else{
    
    //cout << "*** minus p" << endl;
    //cout << "bcnt = " << bcnt << endl;

    //すべてマイナス
    if( (N - bcnt) == 0){
      //cout << "all minus start" << endl;
      tmp = a[N-1] - a[N-2];
      
      for(int i = 0; i< N-2; i ++){        
        tmp = tmp - a[i];
      }

      cout << tmp << endl;
      
      tmp = a[N-1] - a[N-2];
      cout << a[N-1] << " " << a[N-2] << endl;;
      
      for(int i = 0; i< N-2; i ++){
        cout << tmp << " " << a[i] << endl;
        tmp = tmp - a[i];
      }
      
      //cout << "all minus end" << endl;
      
    //プラス１つ
    }else if( (N - bcnt) == 1){

      //cout << "plus one start" << endl;

      tmp = a[N-1] - a[0];
      
      for(int i = 1; i< N-1; i ++){
        tmp = tmp - a[i];
      }
      cout << tmp << endl;

      cout << a[N-1] << " " << a[0] << endl;
      tmp = a[N-1] - a[0];
      
      for(int i = 1; i< N-1; i ++){
        cout << tmp << " " << a[i] << endl;
        tmp = tmp - a[i];
      }

      //cout << "plus one end" << endl;
      
    //プラス２つ
    }else if ((N - bcnt) == 2){
      
      //cout << "plus two start" << endl;

      tmp = a[0] - a[N-2];
      tmp = a[N-1] - tmp;

      for(int i = 1; i< N-2; i ++){
        tmp = tmp - a[i];
      }

      cout << tmp << endl;

      tmp = a[0] - a[N-2];
      cout << a[0] << " " << a[N-2] << endl;
      cout << a[N-1] << " " << tmp << endl;
      tmp = a[N-1] - tmp;

      for(int i = 1; i< N-2; i ++){
        cout << tmp << " " << a[i] << endl;
        tmp = tmp - a[i];
      }
      
      //      cout << "plus two end" << endl;
      
    //プラス3以上
    }else{
      
      tmp = a[0] - a[bcnt];
      
      for(int i=bcnt+1; i<N-1; i++){
        tmp = tmp - a[i];
      }

      tmp = a[N-1] - tmp;

      for(int i=1; i<bcnt; i++){
        tmp = tmp - a[i];
      }

      cout << tmp << endl;



      
      tmp = a[0] - a[bcnt];
      cout << a[0] << " " << a[bcnt] << endl;
      
      for(int i=bcnt+1; i<N-1; i++){
        cout << tmp << " " << a[i] << endl;
        tmp = tmp - a[i];
      }

      cout << a[N-1] << " " << tmp << endl;
      tmp = a[N-1] - tmp;

      for(int i=1; i<bcnt; i++){
        cout << tmp << " " << a[i] << endl;
        tmp = tmp - a[i];
      }
      
    }

  }
}
