class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int open=0;

        for(char ch:s){

            if(ch=='(' && open++>0){
                   res+=ch;
            }

             if(ch==')' &&  open-->1){
                   res+=ch;
            }

        }
        
        return res;
            }
};