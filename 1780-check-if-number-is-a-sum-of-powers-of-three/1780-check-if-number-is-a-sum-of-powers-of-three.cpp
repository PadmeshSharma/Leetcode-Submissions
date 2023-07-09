/*class Solution {
public:
    bool checkPowersOfThree(int n) 
    {
        int ans=1;
        for(int i=0;i<=30;i++)
        {
            if(ans==n)
            {
                return true;
            }
            for(i=0;i<n;i++)
                {
                    for(int j=0;j<=i;j++)
                    {
                        for(int k=0;k<=j;k++)
                        {
                          if(pow(3,i)+pow(3,j)+pow(3,k)==n)
                            return true;
                      
                        }
                    }
                }
        }
        return false;
    }
};*/
class Solution {
public:
  bool checkPowersOfThree(int n) {
    vector<int> pow3 = {1};
    int p = 1;
    
    while(pow3.back() < n){
      p *= 3;
      int k = pow3.size();
      pow3.push_back(p);
      for(int i = 0; i != k && pow3.back() < n; i++) pow3.push_back(p + pow3[i]); 
    }
    
    return pow3.back() == n;
  }
};
