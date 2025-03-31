#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
//int main()
//{
   /*string e="i love you";
   e.resize(12,'@');
   cout<<(char)e.at(8)<<endl;
    cout<<e.length()<<endl;
    cout<<(int)e.at(11)<<endl;
    cout<<e<<endl;*/
    //HOW TO INPUT A STRING ??
    //string s;        -------------------------->aise krke bhi input le skte hai.
    //cin>>s;
   /* string jag ;//="hdbhckhdchbc cjbjcbcjbcjb";
   getline(cin,jag);
     
    jag.resize(jag.length()+5,'#');
    jag.at(jag.length()-1)='4';
    jag.at(5)='6';
    cout<<jag<<endl;
    //adding of two string 
    string s1 ="hello";
    string s2 ="world";
    string s3=s1+" "+s2+"2";
    cout<<s3;*/
    //to use string in loops
     /*string input;
     string overallinput;
     do
     {
        cout<<"enter some text ";
        getline(cin,input);
       overallinput+=input;
     }while(input!="<<@");
        cout<<overallinput;*/
        //for removing of character from string 
      /* string removal( string s)
       {
        string ns;
        //getline(cin,s);
        for(int a=0;a<s.length();a++)
        {
            //if(s.at(a)!='a'&&s.at(a)!='b')
            if(s.at(a)>='0' && s.at(a)<='9')
            {
                ns+=s.at(a);
            }
        }
        return ns;
       }
       int main ()
       {
         string inputtext;
         getline(cin,inputtext);
         string ns=removal(inputtext);
         cout <<"new string ns\n"<<ns;

         return 0;
       }*/
       // sub string:-- string ke bich se kuch character nikalne ka tarika
       int main ()
       { 
       // string s="i love you";  
       // cout<<s.substr(6,2);
      // string s="abc abc abc abc";
      // int found=s.find("bca");
       //cout<<found<<endl;
       //cout<<s.find_first_of("b");//it will find where the particular 
       //one of them character are present
       //finding character in string by using loops
       //int found=-1;
        //for(int a=0;a<(s.length())/3;a++)
//{  
    //int found=-1;
  // found=s.find("abc",found+1);
    //   cout<<found<<endl;            //------------>for this we will using 
                                       // ----------->do -while loop
// found!=-1;  
    
//}
//cout<<found<<endl;
//found!=-1;
//lower case alphabet to uppercase alphabet<----------------//code for changing 
/*string s="jagriti";
char sdt='f';
char vfg='F';
for(int i=0;i<s.length();i++)
{
  s.at(i) -=32;
}
        cout<<s<<endl;
        cout<<(int)sdt<<endl<<(int)vfg;*/
      //  -------->inserting an string by using loops
/*string s="one two three four five six";
string j="zero";
int lastspace =0;
int found = -1;
do
{
  found=s.find(" ",found+1);
  cout<<found<<endl;
  if(found!=-1)
  {
    lastspace =found;
  }
} while (found!=-1);

//int found=s.find(" ");
//cout<<found;
s=s.substr(0,lastspace)+" "+ j+s.substr(lastspace); //,s.length()-found);
cout<<s;*/
        //-------------> removing some words from string
        string s="dtydxfm jhg hjflg, jhggjvgfgjg.,fjhggy jhg jhftschbhkll";
        string y="jhg";
        int found =-1;
        do
        {
          found=s.find(y,found+1);
          if(found!=1)
          {
           s=s.substr(0,found)+s.substr(found+y.length());
          }
        } while (found!=-1);
        cout<<s<<endl;
        
         return 0;
       }

       // cout<<ns<<endl;


    //return 0;
