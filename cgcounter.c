// Pierre Lindenbaum's C program for counting CG

#include <stdio.h>


int main(int argc,char** argv)
    {
    long N=0L;
    int prev=-1;
    for(;;)          //forever 
        {
        int c=fgetc(stdin);
        switch(c)
            {
            case EOF: case '>': {
                if(N>0) {
                    printf("\t%ld\n",N);
                    }
                if(c==EOF) return 0;
                fputc('>',stdout);
                while((c=fgetc(stdin))!=EOF && c!='\n') {
                    fputc(c,stdout);
                    }
                N=0L;
                prev=-1;
                break;
                }
            case '\n':break;
            case 'g':case 'G': {
                if(prev=='C') N++;
                prev='G';
                break;
                }
            case 'c': case 'C': {
                if(prev=='G') N++;
                prev='C';
                break;
                }
            default: {
                prev=c;
                break;
                }
            }
        }
    return 0  ;
    }
