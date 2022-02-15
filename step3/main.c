#include <stdio.h>
#include <getopt.h>

void parse_opts(int argc,char **argv)
{
    int opt = 0;
    extern char *optarg;

    while(-1 != (opt = getopt(argc, argv, "a:b:X")))
    {
        switch(opt)
        {
            case 'a':
                printf("a arg: %s\n", optarg);
                break;
            case 'b':
                printf("b arg: %s\n", optarg);
                break;
            case 'X':
                printf("X provided\n");
                break;
        }
    }
}

int main(int argc, char **argv)
{
    printf("Calling parse_opts\n");
    parse_opts(argc, argv);
}