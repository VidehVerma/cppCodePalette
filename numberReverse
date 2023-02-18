#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //code to get input and display output in txt files
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;

    int reverse = 0;
    while(n>0){
        int ld = n%10;
        n /= 10;
        reverse = reverse*10 + ld;
    }
    cout<<reverse;
    return 0;
}
