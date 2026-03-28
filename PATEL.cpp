#include<iostream>
using namespace std;
int main(){
       
//  *  *  *  *    *  *  *  *    *  *  *  *  *    *  *  *  *    *
//  *        *    *        *          *          *             *
//  *        *    *        *          *          *             *
//  *  *  *  *    *  *  *  *          *          *  *  *  *    *
//  *             *        *          *          *             *
//  *             *        *          *          *             *
//  *             *        *          *          *  *  *  *    *  *  *  * 
    int n,p;
    cout<<"enter the value of n=";
    cin>>n;    
      p= n-(n-(n+1)/2);
    for(int i=1;i<=n;i++){       
        for(int j=1;j<=p;j++){  
        if(j==1 or i==(n+1)/2 or i==1 or (i<=p and j==p ))
            cout<<" * ";
        else{
            cout<<"   "; }            
        }      
      cout<<"  ";      
        for(int j=1;j<=p;j++){  
        if(j==1 or j==n or i==1 or (i==(n+1)/2 or j==p ) )
            cout<<" * ";
        else{
            cout<<"   "; }            
        }  
            cout<<"  ";
             for(int j=1;j<=p+1;j++){  
        if(i==1 or j==(p+2)/2)
            cout<<" * ";
        else{
            cout<<"   "; }            
        } 
          cout<<"  ";
             for(int j=1;j<=p;j++){  
        if(i==1 or i==(n+1)/2 or i==n or j==1 )
            cout<<" * ";
        else{
            cout<<"   "; }            
        } 
        cout<<"  ";
             for(int j=1;j<=p;j++){  
        if(j==1 or i==n)
            cout<<" * ";
        else{
            cout<<"   "; }            
        } 
        cout<<"\n";      
    }
}