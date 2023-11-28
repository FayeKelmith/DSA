#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>


using namespace std;


bool subArray(vector<int>& numbers){

    //sort the array, so that I am certain I can linearly evaluate all posibilities.
    sort(numbers.begin(),numbers.end());

    //looping through the entire array 
    for(int i = 0; i<numbers.size();i++){
    int sum = 0;

    //finding zero sums in sub arrays;
        for(int j = i; j<numbers.size();j++){
        sum+=numbers[j];

        //if found return true
        if(sum == 0)
        return true;

        }
        //complexity is O(n^2)
    }

    //unfortunate case of no null subarray
    return false;
}

//O(n) complexity algorithm
bool subArraySet(vector<int>& numbers){
    unordered_set<int> set;

    int sum = 0;

    for(int i = 0;i<numbers.size();i++){
        sum += numbers[i];

        if(set.find(sum) != set.end() || sum == 0)
            return true;
        set.insert(sum);
    }

    return false;
}


int main(){

    vector<int> arr { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }; 

    cout<< (subArray(arr) ? "Subarray exists" : "Subarray does not exist");

    cout<<endl;

}