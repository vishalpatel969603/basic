#include<iostream>
using namespace std;
      int maze(int sr,int sc,int er,int ec){
        if(sr>er || sc>ec) return 0;
        if(sr==er && sc==ec) return 1;
        int rightway=maze(sr,sc+1,er,ec);
        int downway=maze(sr+1,sc,er,ec);
        return rightway+downway;
      }
      void printpath(int sr,int sc,int er,int ec,string s){
          if(sr>er || sc>ec) return;
        if(sr==er && sc==ec) {
            cout<<s<<endl;
            return;
        }
        printpath(sr,sc+1,er,ec,s+'R');//right
        printpath(sr+1,sc,er,ec,s+'D');//down
       
      }
     
int main(){
         int r,c;
         cin>>r>>c;
        cout<<endl; 
       cout<<maze(1,1,r,c);
       cout<<endl;
       printpath(1,1,r,c," ");
       

} 