#Linux Filing System

###1/ list files/directories.
- {the original command} : `ls -l`
- it lists the folders in a long format.

###2/ Change permissions of files
- {the original command} : `chmod [path] [permission number(0 : 7)]`
- it takes a path from the user and a number that describes the mode of the permission and   concatenate them together.
(permission cases : 
 0 = ---
 1 = --x
 2 = -w-
 3 = -wx
 4 = r--
 5 = r-x
 6 = rw-
 7 = rwx
[ r - read || w - write || x - acess ]

note : the left position is for user, the middle is for group and the last is for world.

###3/ Make/delete files/directories.

to make files
{the original commands} : 
```
nano [name] [path]
gedit [name] [path]
gedit [name&] [path]
```
- it takes a name from the user and a path and make a new file in that path.

to make directories
- {the original command} : `mkdir [name]`
- it takes a name from the user and make a new folder in this current path.

###4/ delete files/directories

to delete both files and directories
- it takes a file/directory Name with path and remove the whole file/directory including its components.
- {the original command} : `rm -r [name] [path]`

###5/ Create symbolic link files.
- {the original command} : `ln -s [name] [path]`
- it takes name and path from user and concatenate them together and set a short-cut in a new link.
- to get a short-cut from a folder 

###6/ Rename Files/directories
- {the original command} : `mv [old name] [new name]`
- it takes an old File/directory name and set a new one.
- it is done with the move command
- we use the "/" character to organize the path.

###7/ clear command
- {the original command} : `clear`
- it clears all the current commands in the display.

###8/ exit command
- {the original command} : `exit`
- it quits the program