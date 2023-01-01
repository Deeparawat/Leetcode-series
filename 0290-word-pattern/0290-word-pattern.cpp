class Solution {
public:
       
     bool wordPattern(string pattern, string s) {        
        stringstream ss(s);
        string token;
        
        unordered_map<char,int>m;
        unordered_map<string,int>m2;
        for(int i=0;i<pattern.size(); i++)
        {
            getline(ss,token,' ');
            if(m2[token] != m[pattern[i]])
                return false;
            m2[token] = m[pattern[i]] = i+1;
        }
        if(getline(ss,token,' '))
            return false;
        return true;
    }
        
        
    
};