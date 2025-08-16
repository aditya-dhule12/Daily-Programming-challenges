#include<iostream>
using namespace std;
int missingElement(int arr[],int n){
    int sum = n*(n+1)/2;
    int sumA = 0;
    for(int i=0;i<n-1;i++){
        sumA = sumA+arr[i];
    }
    if(sumA == sum){
        cout<<"No missing element.";
        return 0;
    }
    else{
        return sum-sumA;
    }
}
int main(){
    int n;
    cout<<"Enter the nth term : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    cout<<"Missing Element = "<<missingElement(arr,n);
    return 0;
}