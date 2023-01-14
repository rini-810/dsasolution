class Solution {
public:
    string addBinary(string a, string b) {
        return creat(a,b);
    }
  string creat(string a,string b)
  {
      string ans="";
      int a_start=a.size()-1;
      int b_start=b.size()-1;
      int carry=0;
      while(a_start>=0 && b_start>=0)
      {
          //cout<<"carry"<<carry;
          if(a[a_start]=='1' && b[b_start]=='1')
          {
              if(carry==1)
              {
                  ans='1'+ans;
                  
              }
              else
              {
              ans='0'+ans;
              
              }
              carry=1;
              
          }
         else if((a[a_start]=='1' && b[b_start]=='0')||(a[a_start]=='0' && b[b_start]=='1'))
          {
              if(carry==1)
              {
                  ans='0'+ans;
                  carry=1;
              }
             else
             {
                 ans='1'+ans;
                 //carry=0;
             }
          }
          else if(a[a_start]=='0' && b[b_start]=='0')
          {
              if(carry==1)
              {
                  ans='1'+ans;
                  carry=0;
              }
              else
              {
                  ans='0'+ans;
              }
          }
          //cout<<ans;
          a_start--;
          b_start--;
      }
      while(a_start>=0)
      {
          if(a[a_start]=='1')
          {
              if(carry==1)
              {
                  ans='0'+ans;
                  carry=1;
              }
              else
              {
                  ans='1'+ans;
              }
          }
          else
          {
              if(carry==1){
                  
              ans='1'+ans;
                  carry=0;
              }
              else{
                  ans='0'+ans;
              }
          }
          a_start--;
          
      }
      while(b_start>=0)
      {
          if(b[b_start]=='1')
          {
              if(carry==1)
              {
                  ans='0'+ans;
                  carry=1;
              }
              else
              {
                  ans='1'+ans;
              }
          }
          else
          {
              if(carry==1){
                  
              ans='1'+ans;
                  carry=0;
              }
              else{
                  ans='0'+ans;
              }
          }
          b_start--; 
      }
      if(carry==1)
      {
          ans='1'+ans;
      }
      return ans;
  }
};