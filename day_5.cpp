#include<iostream>
#include<vector>
using namespace std;
void leaderElements(int arr[],int n){
    vector<int> v;
    int maxElement =  arr[n-1];
    v.push_back(maxElement);
    for(int i=n-2;i>=0;i--){
        if(maxElement<arr[i]){
            v.push_back(arr[i]);
            maxElement = arr[i];
        }
    }
    cout<<"Leader Elements: ";
    for(int i=v.size()-1;i>=0;i--){
    cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element od the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leaderElements(arr,n);
    return 0;
}