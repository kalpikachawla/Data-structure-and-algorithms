#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> arr,int index,vector<vector<int>> &ans){
    if(index>=arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int j=index; j<arr.size(); j++){
        swap(arr[index],arr[j]);
        solve(arr,index+1, ans);
        swap(arr[index],arr[j]);
    }
}
int main(){
    vector<int> arr={1,2,3};
    vector<vector<int>> ans;
    int index = 0;
    solve(arr,index,ans);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
    }
}