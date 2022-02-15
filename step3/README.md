# Step 3 - Manual error handling
---
By default, `getopt` prints out errors it encounters, such as an argument option doesn't have an argument, or an non-existing option was given on the command-line.
To disable automatic error handling, prepend a `:` to the optstring.

Now we need to take care of 2 types of errors:
1. The user has provided an unknown option.
2. The user has not provided an argument to an option.

We use the `optopt` external global variable for retreiving the given problematic argument.