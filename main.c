#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc != 3)
    {
	printf("usage: %s infile outfile\n", argv[0]);
	return 1;
    }
    
    FILE *in, *out;
    char fromfile;
    
    in = fopen(argv[1], "r");
    if(!in)
	return 2;
    out = fopen(argv[2], "w");
    if(!out)
	return 3;

    while((fromfile = getc(in)) != EOF)
    {
	if(fromfile == 10)
	{
	    fprintf(out, "%c%c", 13,10);
	}
	else
	{
	    fprintf(out, "%c", fromfile);
	}
    }

    fclose(in);
    fclose(out);
    
    return 0;
}
