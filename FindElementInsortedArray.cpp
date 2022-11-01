int Search(vector<int> vec, int K) {
    int n=vec.size();
    int l=0;
    int r=n-1;

    while(l<=r)
    {
        int mid=(r+l)/2;
        if(vec[mid]==K)
        {
            return mid;
        }
         if(vec[l]<vec[mid])
        {
            if(K>=vec[l] && K<=vec[mid])
            {
                r=mid-1;
            }
            else
            l=mid+1;
        }
        else
        {
            
            if(K>vec[mid] && K<=vec[r]){
            l=mid+1;
            }
            else
                r=mid-1;
        }
    }
    return -1;
}