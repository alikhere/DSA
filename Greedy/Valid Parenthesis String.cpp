class Solution {
public:
    bool checkValidString(string s) {
        stack<char> open, star;

        for(int i=0; i<size(s); i++)
        {
            //push the index of '('
            if(s[i] == '(')
                open.push(i);

            //push the index of '*'
            else if(s[i] == '*')
                star.push(i);

            /*If we get a ')' then
                either pop '(' if we have some
                or pop '*' if there's no '('.
            */
            else{
                if(!open.empty())
                    open.pop();

                else if(!star.empty())
                    star.pop();
            
                //If both '(' ans '*' are exhausted then return false.
                else
                    return false;
            }
        }

        //Processingthe leftover brackets in 'open'

        /*compare the position of '*' ans '(' if position of '*' is greater than '(' then it means we can convert some '*' to ')'.*/
        while(!open.empty() && !star.empty() && star.top() > open.top())
        {
            open.pop();
            star.pop();
        }

//After processing if open stack is still not empty the return false.
        return open.empty();
    }
};
