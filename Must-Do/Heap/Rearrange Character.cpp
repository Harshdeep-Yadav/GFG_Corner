    priority_queue<pair<int,char>,vector<pair<int,char>>> pq;

        unordered_map<char,int> m;

        for(auto x:str)

        {

            m[x]++;

        }

        for(auto x:m)

        {

            pq.push({x.second,x.first});

        }

        string ans = "";

        string default_output = "-1";

        // while(pq.size()>0)

        // {

        //     cout<<pq.top().first<<" "<<pq.top().second<<endl;

        //     pq.pop();

            

        // }

        while(pq.size()>1)

        {

            auto x = pq.top();

            pq.pop();

            auto y = pq.top();

            pq.pop();

            ans=ans + x.second + y.second;

            char c = x.second;

            int j = x.first-1;

            char c2 = y.second;

            int j2 = y.first - 1;

            if(j!=0)

            {

                if(j>0)

                {

                  pq.push({j,c});

                }

                if(j2>0)

                {

                  pq.push({j2,c2});

                }

            }

            

        }

       //  cout<<ans;

        if(pq.size()==1)

        {

            if(pq.top().first > 1)

            {

                return default_output;

            }

            else

            {

                ans+=pq.top().second;

            }

        }

        // //cout<<ans<<" ";

        return ans;

    }