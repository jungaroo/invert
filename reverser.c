#include <stdio.h>
 
int main(void)
{
  // Opening input and output files for read/write
  FILE *input;
  FILE *output;
  input=fopen("/Users/elisaur/Desktop/chr9.fa", "r");
  output=fopen("/Users/elisaur/Desktop/invchr9.txt", "w");
  
  if (input == NULL) {printf("error opening input\n");}
  if (output == NULL){printf("error opening output\n");}

  // Determine length of input file
  fseek(input,0,SEEK_END);
  int sequencelength = ftell(input);
  printf("Sequence length from ftell is %d.\n", sequencelength);

  
  //Read contents of input file in reverse onto outputfile 
  int i;  
  for(i=sequencelength;i>=0;i--)
    {   
        //printf("Sequence length is: %d.",sequencelength);
        fseek(input,i, SEEK_SET);
        fputc(fgetc(input),output);
        //printf("Success fputc %d\n",i);
    }   

  fclose(input);
  fclose(output); 
}
