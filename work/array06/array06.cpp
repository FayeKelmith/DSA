#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;
//algorithm to detect if any element is duplicated. 

//We loop through the array and create a set out of the elemtns. We then inspect if any new element already exists in the set, if they do- we return true, else at the end of the program it's false.

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
           // print(arr,start, end-1);

           //checking if the sum already exists in the dictionary before adding an element.
            if(sumToList.find(sum)==sumToList.end())
                sumToList[sum] = list;
            
            //reseting trackers to find the next list.
            sum =0;
            list.clear();
            //we have to restart, so complexity is O(n^2)
            ++start;
            end = start-1;
        }
        else{
        //if duplicate is not found we grow our sum and subarray simultaneously. 
        sum+=arr[end];
        list.push_back(arr[end]);
        }
    }

    sum = -1;

    for(auto it: sumToList){
        if(it.first>sum)
          sum = it.first;
    }

    for(auto it: sumToList[sum])
        cout<<it<<" ";
    cout<<endl;
}

int main(){
    vector<int> numbers { 2, 0, 2, 1, 4, 3, 1, 0 };
    longestSub(numbers);
    
}