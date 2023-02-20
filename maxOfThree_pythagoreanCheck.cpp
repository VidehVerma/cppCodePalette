#include<iostream>
#include<math.h>
using namespace std;

int maxOfThree(int a,int b, int c){
    if(a>=b){
        if (a>=c){
            return a;
        } else {
            return c;
        }
    } else {
        if (b>=c) {
            return b;
        } else {
            return c;
        }
    }
}

string pythagoreanCheck(int h,int b, int p){
    if(pow(h,2)==pow(b,2)+pow(p,2)){
        return "Pythagorean triplet";
    } else {
        return "Not a Pythagoren Triplet";
    }
}

int main(){
    //code to get input and display output in txt files
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a,b,c;
    cin>>a>>b>>c;
    
    int max = maxOfThree(a,b,c);
    if(a==max){
        cout<<pythagoreanCheck(a,b,c);
    } else if (b==max) {
        cout<<pythagoreanCheck(b,c,a);
    } else {
        cout<<pythagoreanCheck(c,a,b);
    }

    
    return 0;
}
