class Solution
{
public:
    // Function to find the nodes that are common in both BST.
    unordered_map<int, int> mp;
    void inorder(Node *root, set<int> &s)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left, s);
        mp[root->data]++;
        if (mp[root->data] == 2)
        {
            s.insert(root->data);
        }
        inorder(root->right, s);
    }
    vector<int> findCommon(Node *root1, Node *root2)
    {
        set<int> s;
        inorder(root1, s);
        inorder(root2, s);
        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};