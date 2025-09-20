//File IO

#include<stdio.h>

int main(){
    FILE *fptr;
    // fptr = fopen("C:\\Users\\HP\\OneDrive\\Desktop\\C\\Test.txt", "r");
    // fptr = fopen("C:\\Users\\HP\\OneDrive\\Desktop\\C\\Test.txt", "w");
    // fptr = fopen("C:\\Users\\HP\\OneDrive\\Desktop\\C\\Test.txt", "r");
    if (fptr == NULL) {
    printf("File not found!\n");
    return 1;
    }
    // char ch;
    // fscanf(fptr, "%c", &ch); it will read and store the value of first char in ch
    // fprintf(fptr, "%c", ch); it will print the char by deleteung the existing data in file
    // printf("Character = %c", ch);
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // fputc('M',fptr);
    // fputc('A',fptr);
    // fputc('N',fptr);
    // fputc('G',fptr);
    // fputc('O',fptr);


    fclose(fptr);
    return 0;
}



/*

Volatile Memory-> RAM
Contents of RAM are lost when program terminates
Files are used to persist to data
Non-Volatile Memory -> hard disk


Test-Files(.txt , .c)
binary-files(.exe,.mp3,.jpg)

*/

/*
File Opening Modes:-
"r"(read),"rb"(read in binary),"w"(write),"wb"(write in binary),"a"(append)


if file does not exist and we open a file in read mode it will 
return NUll
FILE *fptr;
fptr = fopen("NewTest.txt","r");
if(fptr==NULL){
    printf("The file does not exist");
}
else{
    fclose(fptr);
}
*/



//Use of EOF
/*
FILE *fptr;
fptr = fopen ("Test, txt", "*"');
char ch;
ch = fgetc(fptr);
while(ch != EOF) {
printf ("&c", ch);
ch = fgetc(fptr);
printf ("\n"):
fclose(fptr):
return 0:
*/