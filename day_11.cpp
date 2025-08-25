#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void permutation(string s,vector<bool> & used,string current,vector<string>& result){
    if(current.size() == s.size()){
        result.push_back(current);
        return;
    }
    for(int i=0;i<s.size();i++){
        if(used[i] == true) {
            continue;
        }
        if(i>0 && s[i] == s[i-1] && !used[i-1]) {
            continue;
        }
        used[i] = true;
        current.push_back(s[i]);
        permutation(s,used,current,result);
        current.pop_back();
        used[i] = false;

    }
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    sort(s.begin(),s.end());
    vector<bool> used (s.size(),false);
    vector<string> result;
    string current = "";

    permutation(s,used,current,result);
    cout<<"All the unique combination : \n";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}