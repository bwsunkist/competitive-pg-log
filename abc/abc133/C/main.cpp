    #include<iostream>
    #include<vector>
    #include<cstdio>
    #include<string>
    #include<algorithm>
    #include<string.h>
    #include <iomanip>
    #include <sstream>
    using namespace std;
     
    int main() {
      long long  L, R;
      long long  ans = 0;
      long long  a, b;
      long long x,z;
      long long y = 2020;
     
      cin >> L >> R;
     
      if(L < 2019 && R < 2019){
        a = L;
        b = a + 1;
      }else if(L < 2019 && R == 2019){
        a = L;
        b = R;
      }else if(L == 2019){
        a = L;
        b = a + 1;
       }else{
        //LR間に2019の倍数が存在するか？
        x = R/2019;
        //    cout << "x = " << x << endl;
     
        if(L < x*2019){
          //存在する
          a = x*2019;
          b = a+1;
          //cout << "test2 " << endl;
        }else{
          // cout << "test3 " << endl;
          //存在しない
          //積が2019の倍数に近くなるような選び方をする
          for(int i = L; i < R; i++){
            for(int j = i+1; j <= R; j++){
              a = i;
              b = j;
              z = (a*b)%2019;
              y = min(z, y);
            }
          }
        }
        
      }
     
      if(y == 2020){
        cout << (a*b)%2019 << endl;
      }else{
        //cout << "test3 ans" << endl;
        cout << y << endl;
      }
      
    }