#include <stdio.h>

int main(void)
{

  FILE *input;
  FILE *output;
  // Open files for read and write. Replace /full/path/to/file with your desired file and output file destinations. Ex: /Users/elisaur/Desktop/chr21.fa
  input=fopen("/full/path/to/file.fa","r");
  output=fopen("/full/path/to/outputfile.fa","w");

  if (input == NULL) {printf("error opening input\n");}
  if (output == NULL){printf("error opening output\n");}

  // Determine length of input file
  fseek(input,0,SEEK_END);
  int sequencelength = ftell(input);
  printf("Sequence length from ftell is %d.\n", sequencelength);

  //Read contents of input file and then complement them onto outputfile. Maintains upper/lower case and N 

  int i;
  for(i=0;i<=sequencelength;i++)
    {
       // printf("Sequence length is: %d.",sequencelength);
        fseek(input,i, SEEK_SET);

        char base = fgetc(input);
        switch(base)
            {
                case 'A' :
                        fputc('T',output);
                        break;
                case 'a' :
                        fputc('t',output);
                        break;
                case 'T' :
                        fputc('A',output);
                        break;
                case 't' :
                        fputc('a',output);
                        break;
                case 'C' :
                        fputc('G',output);
                        break;
                case 'c' :
                        fputc('g',output);
                        break;
                case 'G' :
                        fputc('C',output);
                        break;
                case 'g' :
                        fputc('c',output);
                        break;
                case 'N' :
                        fputc('N',output);
                        break;
                case 'n':
                        fputc('n',output);
                        break;
                case '\n':
                        fputc('\n',output);
                        break;
                }

      }
//Close the files
  fclose(input);
  fclose(output);

}
