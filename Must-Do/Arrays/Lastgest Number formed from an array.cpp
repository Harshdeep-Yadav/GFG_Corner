class Solution{
public:
 static	bool comp(string a,string b){
	    return (a+b)>(b+a);
	}
	string printLargest(vector<string> &arr) {
	    sort(arr.begin(),arr.end(),comp);
	    string s="";
	    for(auto it:arr){
	        s+=it;
	    }
	    return s;
	}
};