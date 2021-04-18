#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

class Que {
public:
  Que();
  Que(int, int);
  int x;
  int y;
  void test();
  int SIZE = 2;
  void tansaku(int*);
private:
};

//constructor
  Que::Que(){
    x=0;
    y=0;
  }

//constructor
Que::Que(int a, int b){
    x=a;
    y=b;
  }

  
  void Que::test(){
    x++;
    y++;
    cout << "test! --> x=" << x << ", y=" << y  << endl;
  }

  void Que::tansaku(int *cnt){

    if(x==SIZE && y==SIZE){
      *cnt=*cnt+1;
      
      cout << "x = " << x << ", y = " << y << ", cnt=" << *cnt <<   endl;
      cout << "x, y stop" << endl;

      return;
    }

    
    if(x<SIZE){
      x++;
      cout << "x = " << x << ", y = " << y  << ", cnt=" << *cnt << endl;
      Que a(x, y);
      a.tansaku(cnt);
    }else{
      cout << "x stop" << endl;
    }

    if(y<SIZE){
      y++;
      cout << "x = " << x << ", y = " << y  << ", cnt=" << *cnt << endl;
      Que b(x, y);
      b.tansaku(cnt);
    }else{
      cout << "y stop" << endl;
    }

  }



int main(void) {
  int x=0;//x座標
  int y=0;//y座標
  int cnt=0;

  Que q;
  q.tansaku(&cnt);

  cout << "All :: " << cnt << endl;
  
  return 0;
}

