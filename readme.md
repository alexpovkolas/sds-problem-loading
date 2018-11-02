Problem Loading
Input file name: loading.in
Output file name: loading.out
Time limit: 1 s
Memory limit: 512 MB

Ales is an active internet user. Today he started downloading several big files, and he knows an estimated download time for each of these files. However, this time is obviously incorrect due to the following reason. When some file is loaded successfully, the speed of downloading of all other files will be increased, because the internet channel is divided equally between all active downloads. Therefore Ales has a reasonable question: when will he get all the files? Please help him to find an answer to this question.

Input

The first line contains the number n of files (0 ≤ n ≤ 200 000). The second line contains n positive integers less than 109, the estimated time for each file.
Output

Output one real number, the answer to Ales’s question. The absolute or relative error shouldn’t exceed 10−9.
Examples

loading.in	
5
1 2 3 4 5

loading.out
3.0000000000000


loading.in
3
13 21 34


loading.out
22.6666666666667