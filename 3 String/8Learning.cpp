
#include<iostream>
#include<cstring>
using namespace std;
char *input;
char* mystrtok(char* arr,char delim)
{

   if(input==NULL)
   {
      return NULL;
   }

   char *output=new char[strlen(input+1)];

    int i=0;
   for(;input[i]!='\0';i++)
   {
      if(input[i]!=delim)
      {
         output[i]=input[i];
      }
      else{
         output[i]='\0';
         input=input+i+1;
         return output;
      }
   }
   output[i]='\0';
   input=NULL;
   return output;

}
int main()
{
   char arr[100]="Hello world how are you";
   input=arr;
   char *ptr=mystrtok(arr,' ');
   cout<<ptr<<endl;

   while(ptr!=NULL)
   {
      ptr=mystrtok(NULL,' ');
      cout<<ptr<<endl;
   }


   // char *input="Hello world";    /////This can also make array of requisite size;
   // input=input+1;                 ///You can also shift pointers like this
   // cout<<input<<endl;

    return 0;
}