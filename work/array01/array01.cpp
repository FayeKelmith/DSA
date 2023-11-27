#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

//BRUTEFORCE
void findpair(vector<int>& arr, int target){
    bool found = false;
    for(int i=0;i<arr.size();i++){
        for(int j= i+1; j<arr.size();j++){
            if((arr[i] + arr[j])==target){
                cout<<"Found "<<arr[i]<<" "<<arr[j]<<endl;
                found = true;
            }
        }
    }
    if(!found)
    cout<<"Nothing found\n";
}

//Sorting
void findsortedpair(vector<int>& arr, int target){
    sort(arr.begin(),arr.end());

    int low = 0;
    int high = arr.size()-1;
    bool found = false;

    while(low<high){

        if((arr[low] + arr[high])==target){
            cout<<"Found "<<arr[low]<<" "<<arr[high]<<endl;
            found = true;
            //to move the needle
            low++;
        }else{
            ((arr[low] + arr[high])<target)? low++ : high--; 
        }
    }

    if(!found)
    cout<<"Not found"<<endl;
}

void findhashedpair(vector<int>& arr, int target){
    
}

int main(void)
{
    vector<int> nums { 8, 7, 2, 5, 3, 1 };
    int target = 10;
 
 
    findsortedpair(nums,target);
 
    return 0;
}