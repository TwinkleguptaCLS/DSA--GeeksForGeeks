bool search(string pat, string txt)
{

int n = txt.length();
int m = pat.length();
for(int i = 0; i < n; i++)
{
int j;
for(j = 0; j < m; j++)
{
if(txt[i+j] != pat[j])
break;
}
if(j == m)
return true;
}
return false;
}
