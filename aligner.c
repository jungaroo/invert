#include <stdio.h>

int deletemove(char column, int row)
        {
                // This script would delete the positions mentioned in the arguments, and shift the other values up.
        }


int main(void)
{

        //Opening input file for read/write

        FILE *input;

        input=fopen("/full/path/file.xlsx", "r");

        if (input == NULL) {printf("error opening input file\n");}

        //Store the values from file into an array

        int colA[1024];
        int colC[1024];

        // read contents of columns A and C and store in an array
        int ai;
        for(ai=1; ai<1024; ai++)
                {       fseek(input,ai,SEEK_SET);
                        colA[i]=fgetc(input);
                }
        int ci;
        for(ci=1; ci<1024; ci++)
                {       fseek(input,ci,SEEK_SET);
                        colC[i]=fgetc(input);
                }

        //Take difference between value of Column A and C to check if they are identical.

        for (j = 1; j < 1024; j++)
                {
                        int check = colA[j] - colC[j]  // check difference between two values in a column
                        if check > 0
                                deletemove(A,j);  //delete values from column C and D
                        else if check < 0
                                deletemove(B,j); // delete values from column A and B
                }


        fclose(input); // close files

}
