#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
void longest(vector<int> array){
int start = 0;
int end = 0;
unordered_map<int,vector<int>> subs;
vector<int> list;
int sum = 0;

for(end = 0;end<array.size();end++){
    if(sum==8){
        subs[list.size()] = list;
        list.clear();
        sum = 0;
        ++start;
        end = start -1;
    }
    else{
       //compiling sums
        sum+=array[end];
        list.push_back(array[end]);
    }

    //if it traverses list without finding subarray, it shifts back
    if((end == (array.size()-1)) && (start < end)){
        list.clear();
        sum = 0;
        ++start;
        end = start -1;

    }
}

sum =-1;
for(auto it: subs){
    if(sum<it.first)
        sum = it.first;
}
    for(auto elt: subs[sum])
        cout<<elt<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr { 5, 6, -5, 5, 3, 5, 3, -2, 0 };

    longest(arr);
    
}