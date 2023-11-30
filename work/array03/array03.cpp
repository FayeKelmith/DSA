#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

void print(vector<int> list, int start, int end){
    for(int i = start; i<=end;i++)
    cout<<list[i]<<" ";

    cout<<endl;
}
//O(n) complexity algorithm
void subArraySet(vector<int>& numbers){
   
    unordered_map<int, int> sumToIndex;
    int sum = 0;

    for(int i = 0;i<numbers.size();i++){
        sum += numbers[i];
        //if the sum becomes zero, we print form the beginning till current number
        if(sum == 0){
            print(numbers,0,i);
        }
//eact time we meet a cummulative sum that we already met, we print values from the indice we last saw it.
        if(sumToIndex.find(sum) != sumToIndex.end()) {
            print(numbers, sumToIndex[sum]+1, i);
        }else{
            sumToIndex[sum] = i;
        }
    }

}


int main(){

    vector<int> arr { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }; 

   subArraySet(arr);

}