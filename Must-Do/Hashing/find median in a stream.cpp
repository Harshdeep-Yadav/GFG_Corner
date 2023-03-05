class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>pq; // max heap
    priority_queue<int,vector<int>,greater<int>>mpq; // min heap
    void insertHeap(int &x)
    {
        pq.push(x);
        mpq.push(pq.top());
        pq.pop();
        // balanceHeaps();
        if(mpq.size()>pq.size()){
            pq.push(mpq.top());
            mpq.pop();
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        // if(mpq.size()>pq.size()){
        //     pq.push(mpq.top());
        //     mpq.pop();
        // }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(mpq.size()<pq.size())
        return pq.top();
        else{
            return (pq.top()+mpq.top())/2.0;
        }
    }
};