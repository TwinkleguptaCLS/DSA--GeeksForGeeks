int repeatedCharacter (string str) 
{ 
    unordered_set<int> s;
    int pos=-1;
    
    for(int i=str.length()-1;i>=0;i--){
        if(s.find(str[i]) != s.end()){
            pos = i;
        }
        
        s.insert(str[i]);
    }
    
    return pos;
} 
