class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        stack<int> s;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i] == "+")
            {
                int a=s.top();
                s.pop();
                int c=s.top()+a;
                s.push(a);
                s.push(c);
            }
            else if(operations[i] == "D")
            {
                s.push(2*s.top());
            }
            else if(operations[i] == "C")
            {
                s.pop();
            }
            else
            {
                int a = stoi(operations[i]);
                s.push(a);
            }
        }
        int res=0;
        while(!s.empty())
        {
            res=res+s.top();
            s.pop();
        }
        return res;
    }
};