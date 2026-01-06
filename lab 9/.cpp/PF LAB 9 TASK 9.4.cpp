#include <iostream>
#include <stdlib.h>
#include<string.h>
using namespace std;
int main()
{
     int arr[10];
     int i,j;
     int temp;
  
     for(i=0;i<10;i++)
     {
        arr[i]=rand() % 100;
     }
        cout<<"Unsorted Array elements:"<<endl;
        
     for(i=0;i<10;i++)
        cout<<arr[i]<<"\t";
        cout<<endl;

    for(i=0;i<10;i++)
    {
    for(j=i+1;j<10;j++)
    {
    if(arr[i]>arr[j]) 
    {
      temp =arr[i];
      arr[i]=arr[j]; 
      arr[j]=temp; 
    }
    }
    }
       cout<<"Sorted (Ascending Order) Array elements:"<<endl;
for(i=0;i<10;i++)

     cout<<arr[i]<<"\t";
     cout<<endl;
     string st_name[3] = {"Bilal","Zubair","Ali"};
     string stemp;
     cout<<"\n\nUnSorted (Ascending Order) Array elements:"<<endl;
     
         for(i=0;i<3;i++)
           cout<<st_name[i]<<"\t";
           
         for(i=0;i<3;i++)
     {
         for(j=i+1;j<3;j++)
         {
           if(st_name[i]>st_name[j])
	{
              stemp =st_name[i];
              st_name[i]=st_name[j];
              st_name[j]=stemp;
           }
             }
               }
                 cout<<"\nSorted (Ascending Order) Array elements:"<<endl;
                 for(i=0;i<3;i++)
                   cout<<st_name[i]<<"\t";
                   char chst_name [3][20];
                   char t[20]; 
                   cout<<"\n\n";
                   
                  for(i=0;i<3;i++)
                   {
                      cout<<"Enter Value in char array ";
                      cin>>chst_name[i];
                      }
                        cout<<"\n\n";
                        cout<<"UNSorted (Ascending Order) Array elements:"<<endl; 
                        
                     for(i=0;i<3;i++)
                           cout<<chst_name[i]<<"\t";
                           cout<<endl;
                                 
                     for(i=0; i<3; i++) 
                        {
                           for(j=0; j<3; j++)
		     {		        
                     if(strcmp(chst_name[i], chst_name[j])<0)
                 {
                     strcpy(t, chst_name[i]); 
                     strcpy(chst_name[i], chst_name[j]);      
	          strcpy(chst_name[j], t);
           }
           }
           }
                                 cout<<"Sorted (Ascending Order) Array elements:"<<endl; for(i=0;i<3;i++)
                                 cout<<chst_name[i]<<"\t";
                                 cout<<endl;
        return 0;
}
