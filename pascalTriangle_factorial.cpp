#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n,int r){
    int factorial=1;
    for(int i=n;i>r;i--){
        factorial *= i;
    }
    return factorial;
}

int nCr(int n,int r){
    int ncr = factorial(n,r)/factorial(n-r,0);
    return ncr;
}

int main(){
    //code to get input and display output in txt files
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }cout<<endl;
    }
    return 0;
}
