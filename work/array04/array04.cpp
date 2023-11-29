#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void sorted(vector<int>& arr){
    int i,k;
    i=k=0;
    for( i=0;i<arr.size();i++){
        if(arr[i]==0){
            arr[k++]=0;
        }
    }
    for(i = k;i<arr.size();i++)
    arr[i]=1;
}

int main(){

    vector<int> numbers{ 1, 0, 1, 0, 1, 0, 0, 1 };
    stack<int> ones;
    stack<int> zereos;

    for(int i=0;i<numbers.size();i++){
        //split the numbers and push them into two stacks spererately then pop each in order

        (numbers[i]==0) ? zereos.push(numbers[i]) : ones.push(numbers[i]);
    }
    

    while(!zereos.empty()){
        cout<<"0 ";
        zereos.pop();
    }

    while (!ones.empty()){
        cout<<"1 ";
        ones.pop();
    }
    cout<<endl;
}