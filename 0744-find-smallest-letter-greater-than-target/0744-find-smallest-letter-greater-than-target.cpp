class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0;
        int end=letters.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if((letters[mid]-'a')>(target-'a')){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(end==letters.size()-1){
            return letters[0];
        }
        return letters[end+1];
    }
};