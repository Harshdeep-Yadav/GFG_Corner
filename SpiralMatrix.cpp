
class Solution {
  public:
    vector<int> reverseSpiral(int r, int c, vector<vector<int>>&matrix)  {
    //   vector<int>ans;
    //   int left=0;
    //   int right =R-1;
    //   int top=0;
    //   int bottom=C-1;
    //   while(left<=right && top<=bottom)
    //   {
    //       for(int i=left;i<=right;i++)
    //       {
    //           ans.push_back(a[top][i]);
    //       }
    //       top++;
    //       for(int i=top;i<=bottom;i++)
    //       {
    //           ans.push_back(a[i][right]);
    //       }
    //       right--;
    //       if(left>right || top>bottom)
    //       {
    //           break;
    //       }
          
    //       for(int i=right;i>=left;i--)
    //       {
    //           ans.push_back(a[bottom][i]);
    //       }
    //       bottom--;
    //         if(left<=right){
    //       for(int i=bottom;i>=top;i--)
    //       {
    //           ans.push_back(a[i][left]);
    //       }
    //       left++;
    //   }
    //   reverse(ans.begin(),ans.end());
    //   return ans;
    // }
     vector<int>my_answer;
        int startrow=0;
        int endrow=r-1;
        int startcolumn=0;
        int endcolumn=c-1;
        while(startrow<=endrow and startcolumn<=endcolumn){
            for(int i=startcolumn;i<=endcolumn;i++){
                my_answer.push_back(matrix[startrow][i]);
            }
            startrow++;
            for(int i=startrow;i<=endrow;i++){
                my_answer.push_back(matrix[i][endcolumn]);
            }
            endcolumn--;
            if(startrow<=endrow){
                for(int i=endcolumn;i>=startcolumn;i--){
                    my_answer.push_back(matrix[endrow][i]);
                }
                endrow--;
            }
            if(startcolumn<=endcolumn){
                for(int i=endrow;i>=startrow;i--){
                    my_answer.push_back(matrix[i][startcolumn]);
                }
                startcolumn++;
            }
        }
        reverse(my_answer.begin(),my_answer.end());
        return my_answer;
    }
};