class Solution
{
public:	
bool sameFreq(string s){
     unordered_map<char, int>mp;
     for(int i=0 ; i<s.length() ; i++){
          mp[s[i]]++;
      }
     unordered_map<int, int>mp2;
      for(auto i:mp)
       {
           mp2[i.second]++;
           if(mp2.size()>2 ) return 0;
       }
     if(mp2.size()==1) 
     return 1;

     else{
       auto it1=mp2.begin();
       auto it2=it1++;
       int k=it1->second, l=it2->second;
       if(k==1 && ((it1->first==1)|| (it1->first-it2->first==1) )) 
           return 1;
       else if (l==1 && ((it2->first==1)|| (it2->first-it1->first==1) )) 
            return 1;
       else
         return 0;  
     }
 }
};