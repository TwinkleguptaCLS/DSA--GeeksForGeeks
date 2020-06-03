string concatenatedString(string s1, string s2) 
{ 
 int a[26]={0};
    string s="";
    for(int i=0;i<s1.length();i++){
        a[s1[i]-'a']=2;
    }
    for(int i=0;i<s2.length();i++){
        if(a[s2[i]-'a']==-1)continue;
        if(a[s2[i]-'a']==2)a[s2[i]-'a']=-1;
        if(a[s2[i]-'a']==0||a[s2[i]-'a']==1)a[s2[i]-'a']=1;
    }
    for(int i=0;i<s1.length();i++){
        if(a[s1[i]-'a']==2)s+=s1[i];
    }
    for(int i=0;i<s2.length();i++){
        if(a[s2[i]-'a']==1)s+=s2[i];
    }
    return s;
}
