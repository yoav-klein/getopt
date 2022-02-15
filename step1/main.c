#include <stdio.h>
#include <getopt.h>

void parse_opts(int argc,char **argv)
{
    int opt = 0;

    while(-1 != (opt = getopt(argc, argv, "abX")))
    {
        switch(opt)
        {
            case 'a':
                printf("a provided\n");
                break;
            case 'b':
                printf("b provided\n");
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