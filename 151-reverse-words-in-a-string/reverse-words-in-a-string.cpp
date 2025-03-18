class Solution 
{
public:
    string reverseWords(string s) 
    {
      int i=0;
      int n=s.length();
      string result = "";

      while(i<n)
      {
        while(i<n && s[i]==' ')
         i++;

        if(i>=n)
        break;
         
         
         int j=i+1;
         while(j<n && s[j]!=' ')
          j++;

         string temp = s.substr(i,j-i);
         if(result.length() == 0)
         result = temp;
         else
         result = temp+" "+result;

         i=j+1;
      }  

      return result;
    }
};