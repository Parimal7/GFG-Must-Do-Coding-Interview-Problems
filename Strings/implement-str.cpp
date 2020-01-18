int strstr(string s, string x)
{
     //Your code here
     int firstIndex = -1;
     for(int i = 0; i < int(s.length()); ++i) {
         if(s[i] == x[0]) {
             int j = 0;
             while(j < int(x.length())) {
                 if(s[i+j] == x[j]) j++;
                 else break;
             }
             if(j == int(x.length())) {
                 firstIndex = i;
                 break;
             }
         }
     }
     return firstIndex;
}
