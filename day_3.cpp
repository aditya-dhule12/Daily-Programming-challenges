#include<iostream>
using namespace std;
int duplicateNumber(int arr[],int n){
    int sum = (n-1)*(n)/2;
    int sumA = 0;
    for(int i=0;i<n;i++){
        sumA = sumA + arr[i];
    }
    return sumA-sum;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Duplicate Number: "<<duplicateNumber(arr,n);
    return 0;
}