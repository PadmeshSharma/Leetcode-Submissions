/*class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans[1000000];
        int count=0;
        for(int i=0;i<=n;i++)
        {
            while(n!=0)
            {
                if(n&1)
                {
                    count++;
                }
                n=n>>1;
            }
            cin>>ans[i];
        }
        return ans;
    }
};*/
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
		
		// iterating fromt 0 to n
        for(int i = 0; i<=n; i++)
        {
			// sum is initialised as 0
            int sum = 0;
            int num = i;
			// while num not equals zero
            while(num != 0)
            {
				// we have to count 1's in binary representation of i, therefore % 2
                sum += num%2;
                num = num/2;
            }
			// add sum to ans vector
            ans.push_back(sum);
        }
		// return 
        return ans;
    }
};