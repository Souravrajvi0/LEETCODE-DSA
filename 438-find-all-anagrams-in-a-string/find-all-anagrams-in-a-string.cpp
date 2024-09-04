class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.length();
	    int i=0;
	    int j=0;
	    int count=0;
        vector<int>res;
	    unordered_map<char,int>m1;
	    for(int i=0;i<p.length();i++){
	        m1[p[i]]++;
	    }
	    unordered_map<char,int>m2;
      while(j<s.length()){
	        m2[s[j]]++;
	        
	        if(j-i+1<k){
	            j++;
	        }else if (j-i+1==k){
	            if(m2==m1)res.push_back(i);
	            m2[s[i]]--;
	            if(m2[s[i]]==0)m2.erase(s[i]);
	            i++;
	            j++;
	            }
	        
	        }
	        return res;
    }
};