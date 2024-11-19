#include<bits/stdc++.h>
using namespace std;
string isprime(int n)
{
    for (int i=2;i*i<n;i++){
        if(n%i==0){
            return "non prime";

        }
    }                   
        return "prime";
    }
    void printDigits(int n){
       while(n!=0){
        int digit=n%10;
        cout<<digit<<endl;
        n=n/10;
       }
    }
    int main(){
      int n=3568;
      printDigits(n);
return 0;   
    }
    