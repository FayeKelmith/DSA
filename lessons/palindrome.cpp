#include <bits/stdc++.h>
#include <string>

class Palindrome{
    public:
    Palindrome(){
        std::cout<<"Palindrome running\n";
    }
    bool isPalindrome(std::string s){
        int i=0, j = s.size()-1;

        while(i<j){
            while(i<j && !isalnum(s[i]))i++; //skip element if it's not character
            while(i<j && !isalnum(s[j]))j--; //skip element if it's not character
            if(tolower(s[i++]!=tolower(s[j--])))
                return false;
        }

        return true;

    }
};

int main(){
    Palindrome pal;
    std::cout<<pal.isPalindrome("mamam");
}