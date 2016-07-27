#include <stdio.h>
 
int main(void)
{
  // Opening input and output files for read/write
  // Under fopen, place the full path to your input and output files. Ex: /Users/elisaur/Desktop/chr21.fa
  FILE *input;
  FILE *output;
  input=fopen("/full/path/to/your/input/file.fa", "r");
  output=fopen("/full/path/to/your/output/file.fa", "w");
  
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
        fseek(input,i, SEEK_SET);
        fputc(fgetc(input),output);
    }   
 //Close the files
  fclose(input);
  fclose(output); 
}
