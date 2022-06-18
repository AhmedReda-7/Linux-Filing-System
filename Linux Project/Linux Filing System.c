#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc , char *argv[]){

if (argc>1){ 
	if (strcmp(argv[1],"--help")==0 || strcmp(argv[1],"-h")==0){
		printf("\nthis program about a file manager\nhere is the functions to make this program (file manager) executed\n\n1- option 1 :this lists the files or the directory using ls comand using -l that displays the results in long format (with its size and the last date it been updated in)\n\n2- option 2 :this changes the permission of the file using chmod that changes it by some shortcuts\n(0->1->2->3->4->5->6->7)\n\n3- option 3 : this option make a new directory or a folder using the comand (mkdir) and option -p If parent directories in the specified path do not exist, automatically generate them to accommodate (and do not generate an error).\n\n4- option 4 :this option make a new file using the comand (nano) and the (&) don't open the file in the shell comand line.\n\n5- option 5 : this option deletes the files or directories using the comand (rm) and the option (-r) the Recursively delete directories. This means that if a directory being deleted has subdirectories, delete them too. To delete a directory, this option must be specified.\n\n6- option 6: this option creates symbolic link between an orignal file and a shortcut using the command (ln) this option (-s) that creates a softcut that makes the shortcut will be no longer available if the original file deleted.\n\n7- option 7: this choise renames the files or directories using the comand (mv) by writing the path with the old name and the same path with the new name.\n\n8- option 8: this choice cleans the comands in the shell comand line using the comand (clear)\n\n9- option 9: this choice stop the program executing.\n");
	}
}
else {
while (1){
int choose; char t;
printf("\n1.List files/directories.\n2.Change permissions of files(Permission numbers).\n3.Make directories.\n4.Make files.\n5.delete files/directories.\n6.Create symbolic link files.\n7.Rename Files/directories.\n8.Clean.\n9.Exit.");
printf("\nEnter your choose:");
scanf("%d", &choose);
t = getchar();

char path[100] , PermissionNumbers [100] , pathLink[100] , oldName[100] , newName[100] , cmd[200];

switch (choose){
    //List files/directories.
    case 1:
        system("ls -l");
      break;

//Change permissions of files.
    case 2:
        printf("Enter FileName with path: ");
        gets(path);
        printf("Enter Permission numbers: ");
        gets(PermissionNumbers);
        strcpy(cmd , "chmod ");
        strcat(cmd , PermissionNumbers);
        strcat(cmd , " ");
        strcat(cmd , path);
        system(cmd);
      break;

//Make directories.
    case 3:
        printf("Enter new directorieName with path: ");
        gets(path);
        strcpy(cmd , "mkdir -p ");
        strcat(cmd , path);
        system(cmd);
      break;

//Make files.
    case 4:
        printf("Enter new fileName with path: ");
        gets(path);
        strcpy(cmd , "nano ");
        strcat(cmd , path);
        strcat(cmd , "&");
        system(cmd);
      break;

//delete files/directories.
    case 5:
        printf("Enter file/directorie Name with path: ");
        gets(path);
        strcpy(cmd , "rm -r ");
        strcat(cmd , path);
        system(cmd);
      break;

//Create symbolic link files.
    case 6:
        printf("Enter fileName with path: ");
        gets(path);
        printf("Enter link file Name with path: ");
        gets(pathLink);
        strcpy(cmd , "ln -s ");
        strcat(cmd , path);
        strcat(cmd , " ");
        strcat(cmd , pathLink);
        system(cmd);
      break;

//Rename Files/directories.
    case 7:
        printf("Enter path: ");
        gets(path);
        printf("Enter File/directorie Name: ");
        gets(oldName);        
        printf("Enter new File/directorie Name: ");
        gets(newName);
        strcpy(cmd , "mv ");
        strcat(cmd , path);
        strcat(cmd , "/");
        strcat(cmd , oldName);
        strcat(cmd , " ");
        strcat(cmd , path);
        strcat(cmd , "/");
        strcat(cmd , newName);
        system(cmd);
      break;

//Clean.
    case 8:
        system("clear");
      break;

//Exit.
    case 9:
        exit(0);
    default:
    printf("Error with your choice\n");
}
}
}
return 0;
}