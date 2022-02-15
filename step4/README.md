# Step 4 - Non-option arguments
---
Up until now, we only dealt with options. What about arguments given to the program? For example:
```
$ gcc -c -o main main.c
```
`main.c` is not an option, is an argument given to the program.

Here comes into play another external global variable, `optind`, which is the index of the current option.

The default behaviour of `getopt` is to move all the non-option arguments to the end of the array. The `optind` variable
acts as an index in the `argv` array, so you can use it to know how many non-option arguments are left.

You can also have `getopt` take care of non-option arguments by specifying a `-` in the beginning of the optstring, but we 
won't cover it here.