#include <stdio.h>
#include <getopt.h>

void parse_opts(int argc,char **argv)
{
    int opt = 0;
    extern char *optarg;
    extern int optopt, optind;
    
    while(-1 != (opt = getopt(argc, argv, ":a::b:X")))
    {
        printf("optind: %d\n", optind);
        switch(opt)
        {
            case 'a':
                printf("a arg: %s\n", optarg ? optarg : "None");
                break;
            case 'b':
                printf("b arg: %s\n", optarg);
                break;
            case 'X':
                printf("X provided\n");
                break;
            case ':':
                printf("Not given argument for %c", optopt);
            case '?':
                printf("Unkown option: %c\n", optopt);
        }
    }

    printf("optind after loop: %d\n", optind);
    if(optind < argc)
    {
        printf("Non-option args:\n");
        while(optind < argc)
        {
            printf("%s\n", argv[optind++]);
        }
    }
}

int main(int argc, char **argv)
{
    printf("argc: %d\n", argc);
    printf("Calling parse_opts\n");
    parse_opts(argc, argv);
}