#include <stdio.h>

const int line_width = 1000;

int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
char line[line_width];
char c, cLast;
FILE *fp;


    if((fp = fopen(input_fn, "r")) == NULL)
    {
        perror("Error input file!");
        return 1;
    }


int count = 0;
    while(((c = getc(fp)) != EOF) && (c != '\n'))
        {
            cLast = c;
            line[count++] = c;
        }

    line[count] = '\0';


    fclose(fp);


    if((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error output file!");
        return 1;
    }


    for (int i = 0; i < count-1; i++)
    {
        if (line[i] == cLast)
            fprintf(fp, "%d ", i);
    }
    fclose(fp);
    return 0;
}
