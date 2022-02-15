# Step 6 - Long options
---

We may want to have long options in our program, instead of a single-letter option.

For this, we define an array of `option` structs:

```
struct option 
{
  const char *name;    /* name without -- in front                                  */
  int         has_arg; /* one of: no_argument, required_argument, optional_argument */
  int        *flag;    /* how the results are returned                              */
  int         val;     /* the value to return or to put in flag                     */
};
```

And we use the `getopt_long` function:
```
int getopt_long(int argc, char * const argv[], const char *optstring, 
                const struct option *longopts, int *longindex);
```

The fourth argument is this array, and the fifth argument is a locally defined integer.

If `getopt_long` returns the value `0`, then it is a long option, and the value of `longindex` is the index of the option
in the array.

## Usage
In this example, you can use the program as such:

```
$ main --add=foo
$ main --delete
$ main --file=file.txt
$ main --file
```

You can still use the one-letter options:
```
$ main --add=foo -b fifi
$ main --delete -X
```