#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool duplicate(vector<int> array,int start, int end){
unordered_set<int> set;
for(int i = start;i<=end;i++){
    if(set.find(array[i])!=set.end()){
        return true;
    }
        set.insert(array[i]);
    
}
return false;
}

void print(vector<int> arr, int start, int end){
    for(int i=start;i<=end;i++)
        cout<<arr[i]<<" ";

    cout<<endl;   
}

void longestSub(vector<int> arr){
    unordered_map<int,vector<int>> sumToList;
    vector<int> list;
    int sum = 0;
    int start = 0;
    //to keep track of the previous duplicate

    for(int end=0;end<arr.size();end++){
        if(duplicate(arr,start,end)){
            print(arr,start, end-1);
            sumToList[sum] = list;
            sum =0;
            list.clear();
            ++start;
            end = start-1;
        }else{
        sum+=arr[end];
        list.push_back(arr[end]);
        }
    }

    for(auto it: sumToList){
        cout<< "Key: "<<it.first<<" -->";
        for(auto num: it.second){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    vector<int> numbers { 2, 0, 2, 1, 4, 3, 1, 0 };
    longestSub(numbers);
    
}