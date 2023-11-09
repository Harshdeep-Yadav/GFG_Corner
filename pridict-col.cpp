class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int index = -1;
        int countZeroes = 0;
        
        for(int i=0;i<arr[0].size();i++){ // for columns
            int tempCount = 0;
            for(int j=0;j<arr.size();j++){ // for rows
                
                if(arr[j][i] == 0){
                    tempCount++;
                }
            }
            if(tempCount > countZeroes){
                countZeroes = tempCount;
                index = i;
            }
        }
        return index;
        
    }
};