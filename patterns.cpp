#include<iostream>
using namespace std;

int main(){
    //code to get values from txt files - 
    /* #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif */
    int a;
    cin>>a;
    int n = a*2;
    
    //zigzag horizontal line - 
//    *       *       *       *       
//  *   *   *   *   *   *   *   *   * 
//*       *       *       *       *    
    for(int j=1;j<=n;j++){
        if((j+1)%4==0){
            cout<<"* ";
        } else {
            cout<<"  ";
        }
    }cout<<endl;
    for(int j=1;j<=n;j++){
        if(j%2==0){
            cout<<"* ";
        } else {
            cout<<"  ";
        }
    }cout<<endl;
    for(int j=1;j<=n;j++){
        if((j-1)%4==0){
            cout<<"* ";
        } else {
            cout<<"  ";
        }
    }cout<<endl;

    //diamond/star/kite
//      *       
//    * * *     
//  * * * * *   
//* * * * * * * 
//* * * * * * * 
//  * * * * *   
//    * * *     
//      *       
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            if(i<=a && j>a-i && j<a+i){
                cout<<"* ";
            } else if (i>a && j<=a+n-i && j>=i-a) {
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }cout<<endl;
    }

    //butterfly alternative
  /*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/
    for(int i=0;i<2*a;i++){
        for(int j=0;j<2*a;j++){
            if(i+j>=(2*a - 1)&&(j-i)>=0)
                cout<<"*";
            else if (j-i<=0 && i+j <= (2*a - 1))
                cout<<"*";
            else 
                cout<<" ";
        }cout<<endl;
    }
    //butterfly 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=a && (j<=i || j>n-i))
                cout<<"*";
            else if (i>a && (j>=i || j<=n-i+1))
                cout<<"*";
            else 
                cout<<" ";
        }cout<<endl;
    }
  
    //rhombus
  /*
    ****
  ****
 ****
****
*/
    for(int i=1;i<=a;i++){
        for(int j=1;j<=n-i;j++){
            if(i+j>n/2){
                cout<<'*';
            } else {
                cout<<' ';
            }
        }cout<<endl;
    }
    //number pyramid pattern
 /*
    1    
   1 2   
  1 2 3  
 1 2 3 4 
1 2 3 4 5
*/
    for(int i=1;i<=a;i++){
        int count = 1;
        for(int j=1;j<=n-1;j++){
            if((i+j)%2==0 && j>a-i && j<a+i){
                cout<<count;
                count++;
            } else {
                cout<<' ';
            }   
        }cout<<endl;
    }
  
    //palindrome number pyramid
/*
        1         
      2 1 2       
    3 2 1 2 3     
  4 3 2 1 2 3 4   
5 4 3 2 1 2 3 4 5 
*/
    for(int i=1;i<=a;i++){
        int upcount = 1;
        int downcount = i;
        for(int j=1;j<=n-1;j++){
            if(j>a-i && j<a+i && j>=a){
                cout<<upcount<<" ";
                upcount++;
            } else if (j>a-i && j<a+i && j<a) {
                cout<<downcount<<" ";
                downcount--;
            } else {
                cout<<"  ";
            }
        }cout<<endl;
    }


    return 0;
}
