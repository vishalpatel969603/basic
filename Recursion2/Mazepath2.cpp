#include<iostream>
using namespace std;
      
      int maze2(int row,int col){
        if(row<1 || col<1) return 0;
        if(row==1 && col==1) return 1;
            int rightway=maze2(row,col-1);//right
        int downway=maze2(row-1,col);//down
        return rightway+downway;

      }
      void printpath(int row,int col,string s){
                       if(row<1 || col<1) return;
        if(row==1 && col==1){
            cout<<s<<endl;
            return;
        } 
        printpath(row,col-1,s+'R');
        printpath(row-1,col,s+'D');
      }    
int main(){
         int r,c;
         cin>>r>>c;
        cout<<endl;
       cout<<maze2(r,c);
       cout<<endl;
       printpath(r,c," ");
       

} 