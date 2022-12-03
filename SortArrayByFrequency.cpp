class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool comp(pair<int,int>a, pair<int,int>b){

        if(a.second==b.second){

            return a.first<b.first;

        }

        return a.second>b.second;

    }

    vector<int> sortByFreq(int arr[],int n)

    {

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){

            mp[arr[i]]++;

        }

        vector<pair<int,int>>v;

        for(auto it:mp){

            v.push_back({it.first,it.second});

        }

        

        sort(v.begin(),v.end(),comp);

        vector<int>ans;

        for(int i=0;i<v.size();i++){

            while(v[i].second--){

            ans.push_back(v[i].first);

            }

        }return ans;
    }
};