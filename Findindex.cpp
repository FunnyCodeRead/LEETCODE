#include<iostream>
#include<cstring>
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int Hsatck_length =haystack.length();
        int Needle_length =needle.length();

        if(Hsatck_length < Needle_length){
            return -1;
        }
        for(int i = 0 ;i <= Hsatck_length - Needle_length ; i++){
            int j =0 ;
            while(j < Needle_length && haystack[i + j] == needle[j] ){
                j++;
            }

            if(j == Needle_length){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    string haystack,needle;
    getline(cin , haystack);
    getline(cin,needle);
    Solution slt;
    int index =slt.strStr(haystack,needle);
    cout<<index<<endl;

return 0;
}