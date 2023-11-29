#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int duplicate(vector<int>& array){
    sort(array.begin(),array.end());

    for(int i=1;i<array.size();i++){
        if(array[i-1]==array[i])
        return array[i];
    }

    return -1;
}
int main(){
    vector<int> numbers { 1, 2, 3, 4, 4 };
    unordered_set<int> set;
    for(int i = 0;i<numbers.size();i++){

        if(set.find(numbers[i])!=set.end())
        cout<<"Duplicate is "<<numbers[i]<<endl;

        set.insert(numbers[i]);
    }

    cout<<"Method two say: "<<duplicate(numbers)<<endl;

}