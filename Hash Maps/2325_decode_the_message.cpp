class Solution {
public:
    string decodeMessage(string key, string message) {
        //create mapping
        unordered_map<char,char>mapping;

        char ch='a';
        for(auto curr:key){
            if(mapping.find(curr)==mapping.end() && curr!=' '){

                mapping[curr]=ch++;
            }

        }

        string ans="";

        //decode with the help of created map
        for(auto curr:message){
                if(curr==' ') 
                    ans=ans+' ';

                else 
                    ans=ans+mapping[curr];
                   
        }

        return ans ;
    }
};
