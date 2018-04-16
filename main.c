#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
 	This code to load a .csv into a 2d matrix is 100% stolen from 
	https://stackoverflow.com/questions/20013693/read-csv-file-to-a-2d-array-on-c
	I make 0 claim to this code. 
*/



int main()
{
   char buffer[1024*1024] ;
   char *record,*line;
   int i=0,j=0;
   int mat[1000][1000];
   FILE *fstream = fopen("test_mat_1.csv","r");
   if(fstream == NULL)
   {
      printf("\n file opening failed ");
      return -1 ;
   }
   while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
   {
     record = strtok(line,";");
     while(record != NULL)
     {
     printf("%s",record) ;    //here you can put the record into the array as per your requirement.
     mat[i][j++] = atoi(record) ;
     record = strtok(NULL,";");
     }
     ++i ;
   }
   return 0 ;
 }
