class MagicDictionary {
public:
    map<int,vector<string>>mp;
    MagicDictionary() {
    }
    
    void buildDict(vector<string> dictionary) {
        for(auto word:dictionary)
        {
            mp[word.size()].push_back(word);
        }
    }
    
    bool search(string searchWord) {
        int flag=0;
        for(auto temp:mp[searchWord.size()])
        {
            int len=0;
            for(int i=0;i<searchWord.size();i++)
            {
                if(searchWord[i]!=temp[i])
                {
                    len++;
                }
                if(len>1)
                {
                    break;
                }
            }
            if(len==1)
            {
                flag=true;
            }
        }
        return flag;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */
