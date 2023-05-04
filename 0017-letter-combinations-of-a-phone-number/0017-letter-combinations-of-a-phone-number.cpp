class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> a={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        vector<string> result;
        if(digits.empty())
            return result;
        result.push_back("");
        
        for(auto d:digits){
            vector<string> temp;
            for(auto x:a[d-'0']){
                for(auto s:result){
                    temp.push_back(s+x);
                }
            }
            result.swap(temp);
        }
        
        return result;
    }
};