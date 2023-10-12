class Solution
{
public:
    unordered_map<string, int> mp;
    string solve(Node *root)
    {
        if (root == NULL)
            return "";
        string s = solve(root->left) + to_string(root->data) + solve(root->right);

        mp[s]++;
        return s;
    }

    int dupSub(Node *root)
    {
        solve(root);
        for (auto it : mp)
        {
            if (it.first.length() > 2 and it.second > 1)
            {
                return 1;
            }
        }
        return 0;
    }
};
