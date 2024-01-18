class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        if (coordinates.size() == 2)
        {
            return true;
        }

        if (coordinates[1][0] - coordinates[0][0] == 0)
        {
            for (int i = 2; i < coordinates.size(); i++)
            {
                if (coordinates[i][0] - coordinates[1][0] != 0)
                {
                    return false;
                }
            }
            return true; // All points lie on a vertical line, return true
        }

        float m = float(coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]);

        for (int i = 2; i < coordinates.size(); i++)
        {
            if (coordinates[i][0] - coordinates[1][0] == 0)
            {
                return false;
            }

            float current_slope = float(coordinates[i][1] - coordinates[1][1]) / (coordinates[i][0] - coordinates[1][0]);

            if (current_slope != m)
            {
                return false;
            }
        }
        return true;
    }
};
