/*H**********************************************************************
* FILENAME :        main.c
*
* DESCRIPTION :
*       Uses multiple GPUs to compute the largest eigenvalue/eigenvector of a matrix A. 
*	This eigenpair is computed using the power iteration algorithm. 
* 
* AUTHOR :    Brian Johnosn        START DATE :    16 April, 2018
*
*H*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
*	Returns matrix stored in filename (assumed .csv) as a matrix of floats
*
*	@input filename (should be .csv)
*	@output matrix of floats stored in filename
*
* 	This code to load a .csv into a 2d matrix is 100% stolen from 
*	https://stackoverflow.com/questions/20013693/read-csv-file-to-a-2d-array-on-c
*	I make 0 claim to this code. 
*
*/
float get_matrix (char *filename)
{
   char buffer[1024*1024] ;
   char *record,*line;
   int i=0,j=0;
   float mat[1000][1000];
   FILE *fstream = fopen(filename,"r");
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
     mat[i][j++] = atof(record) ;
     record = strtok(NULL,";");
     }
     ++i ;
   }
   return 0 ;
 }


/*
*	Main function for GPU power iteration code
*	@input None TODO: Should take filename as CMD arg
*	@output Largest eigenvalue of matrix 
*/
int main(){
	get_matrix("test_mat_1.csv");
	return 0;
	
}
