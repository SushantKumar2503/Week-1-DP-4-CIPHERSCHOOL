class Solution {
public:
    void generate_brackets(vector<string>&output,int n,int openingBracketCount,int closingBracketCount,string s){
        //base case
        if(openingBracketCount==n && closingBracketCount==n){
            output.push_back(s);
            return;
        }
        //Recursive case
        //when opening brackets is less than N
        if(openingBracketCount<n){
            generate_brackets(output,n,openingBracketCount+1,closingBracketCount,s+"(");
        }
        if(closingBracketCount<openingBracketCount){
            generate_brackets(output,n,openingBracketCount,closingBracketCount+1,s+")");
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>output;
        int openingBracketCount=0,closingBracketCount=0;
        string s="";
        generate_brackets(output,n,openingBracketCount,closingBracketCount,s);
        return output;
    }
};