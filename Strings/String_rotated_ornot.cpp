bool isRotated(string str1, string str2)
{
    // Your code here
    if(str1.length() != str2.length())
        return false;
        
    if(str1.length() <= 2 && str1.compare(str2) == 0)
        return true;
    
    if(str1.length() <= 2 && str1.compare(str2) != 0)
        return false;
    
    int i = str1.length();
    
    string sol1 = "";
    sol1 += str1.substr(i-2, 2) + str1.substr(0,i-2);
    
    string sol2 = "";
    sol2 += str1.substr(2, i-2) + str1.substr(0,2);
    
    return (str2.compare(sol1) == 0 || str2.compare(sol2) == 0);
}
