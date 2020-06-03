int modified (string a){
    // Your code here
    int n=0, insert=0;
    for(int i=1; i<a.length(); i++){
        if(a[i]==a[i-1])
            n++;
        else{
            insert+=n/2;
            n=0;
        }
    }
    insert+=n/2;
    return insert;}
