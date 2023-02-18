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
    
    if(n!=2 && n%2==0 || n<2){
        cout<<n<<" is not prime";
    } else if (n==2 || n==3) {
        cout<<n<<" is a prime number";
    } else {
        int i = 3,prime = 1;
        do{
            if (n%i==0) {
                cout<<n<<" is not prime";
                prime = 0;
                break;
            } else {
                i+=2;
            }
        }while(i<=sqrt(n));
        if (prime==1) {
            cout<<n<<" is a prime number";
        }

    }
    return 0;
}
