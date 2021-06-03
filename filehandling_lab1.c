# include <stdio.h>
# include <string.h>
   
int main( )
{
  
    FILE *filePointer ;
      
    char dataToBeWritten[50] 
        = "My name is Pratham Agarwal";
  
    filePointer = fopen("filehandling.c", "w") ;
      
    if ( filePointer == NULL )
    {
        printf( "file failed to open." ) ;
    }
    else
    {
          
        if ( strlen (  dataToBeWritten  ) > 0 )
        {
              
            fputs(dataToBeWritten, filePointer) ;   
            fputs("\n", filePointer) ;
        }
          
        fclose(filePointer) ;
          
    }


    FILE *filePointer ;
      
    char dataToBeRead[50];
  
    filePointer = fopen("filehandling.c", "r") ;
      
    if ( filePointer == NULL )
    {
        printf( "file failed to open." ) ;
    }
    else
    {
          
        while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {
          
            printf( "%s" , dataToBeRead ) ;
         }
          
        fclose(filePointer) ;
          
    }

    return 0;        
}