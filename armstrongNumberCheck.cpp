#include<iostream>
using namespace std;

int main(){
    //code to get input and display output in txt files
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    
    int a = n, sum = 0;
    while(n>0){
        int ld = n%10;
        n /= 10;
        sum += ld*ld*ld;
    }
    if(sum == a){
        cout<<a<<" is a Armstrong Number";
    } else {
        cout<<a<<" is not a Armstrong number";
    }
    return 0;
}
