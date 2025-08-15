#include<iostream>
using namespace std;
void sortArray(int arr[],int n){
    int lo = 0;
    int hi = n-1;
    int mid = 0;
    while(mid<=hi){
        if(arr[mid] == 0){
            swap(arr[mid],arr[lo]);
            mid++;
            lo++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[hi]);
            hi--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array which have {0,1,2}: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortArray(arr,n);
    return 0;
}