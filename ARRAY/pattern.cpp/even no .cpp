#include<iostream>
using namespace std;
int findEvenArr(arr[],int size,int target){
    int s=0;
    int e=size(n-1);
    int mid=(s+e)/2;
    while(s<e){
        if (arr[mid]==target){
            return mid;
        }
        if(target>arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=(s+e)/2;l
        
    }

}
int main(){
int arr[]={10,20,30,40,50,60,70};
int size=7;

int target=60;
}