##################################
# exfastar                       #
# convert Excel file to fasta!   #
# by odoland                     #
##################################


docstring= """
        Save your excel sheet as tab-delimited .txt file and run this script to convert it into the FASTA format!
COMMAND:
        python exfastar.py <tab-delimited file> <sequence column> <header column> > <outputfile>
Example:
        python exfastar.py ./tabfile.txt 2 1 > outputfile.fa
To edit the code: vim exfastar.py
"""

import sys
#standard error checking
if len(sys.argv) < 4:
        sys.exit('\nERROR: You need three arguments%s' %(docstring))

inputfile = open(sys.argv[1]) #opens the input file (from argument 1)

seq_idx = int(sys.argv[2]) - 1   #stores sequence column into seq (from argument 2)

header_idx = int(sys.argv[3])-1 #stores header column into header, (from argument 3)

for line in inputfile: # iterates for each line in the file
        line= line.strip().split('\t') #remove whitespace,
        print('>' + line[header_idx]) # print the fasta label
        print(line[seq_idx])  # print the sequence

inputfile.close()
