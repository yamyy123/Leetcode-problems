int strStr(char * haystack, char * needle){
  int y=-1;
  if(strlen(needle)==1)
  {
      for(int k=0;k<strlen(haystack);k++)
      {
          if(haystack[k]==needle[0])
          {
                y=k;
                break;
          }
      }
      goto label;
  }
  for(int i=0;i<strlen(haystack);i++)
  {   int a=0;
      if(haystack[i]==needle[0])
      {
          y=i;
          for(int j=1,a=1;j<strlen(needle);j++,a++)
          {
               if(haystack[i+a]==needle[j])
               {
                    if(j==strlen(needle)-1)
                   {
                       goto label;
                   }
                   continue;
                  
                }
               else
               {
                   y=-1;
                   break;
               }
          }
      }
  }
  label:
  return y;
}
