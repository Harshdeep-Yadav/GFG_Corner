class Solution
{
public:
void inorder(Node*root,vector<int>&v){
    if(root==NULL) return;
    
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
    int countPairs(Node* root1, Node* root2, int x)
    {
        vector<int>v1,v2;
        int sum=0;
        
        inorder(root1,v1);
        inorder(root2,v2);
        
        int cnt=0;
        int l=0;
        int r=v2.size()-1;
        
        while(l<v1.size() && r>=0){
            sum=v1[l]+v2[r];
            if(sum==x){
                l++;
                r--;
                cnt++;
            }
            else if(sum<x)
                 l++;
           else
                 r--;
            
        }
        return cnt;
    }
};