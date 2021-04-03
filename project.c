#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main(void)
{
    FILE *input, *inputdir, *inputval;
    FILE *out, *outdir, *outval;

    input = fopen("/sys/class/gpio/export", "w");
    fseek(input, 0, SEEK_SET);
    fprintf(input, "%d", 49);
    fflush(input);
    fclose(input);


    outdir = fopen("/sys/class/gpio/gpio49/direction", "w");
    fseek(inputdir, 0, SEEK_SET);
    fprintf(inputdir, "in");
    fflush(inputdir);

    outval = fopen("/sys/class/gpio/gpio49/value", "w");
    fseek(inputval, 0, SEEK_SET);

    volatile int simplerate;

    while (1)
    {
       
        if (simplerate == 0)
        {
            fprintf(inputval, "%d", 0);
            fflush(inputval);
            printf("Repeat the process\n");
        }

        fflush(samplerate);
    }
    return 0;

    out = fopen("/sys/class/gpio/export", "r");
    fseek(out, 0, SEEK_SET);
    fprintf(out, "%d", 115);
    fflush(out);
    fclose(out);


    outdir = fopen("/sys/class/gpio/gpio115/direction", "r");
    fseek(outdir, 0, SEEK_SET);
    fprintf(outdir, "out");
    fflush(outdir);

    outval = fopen("/sys/class/gpio/gpio115/value", "r");
    fseek(outval, 0, SEEK_SET);

    volatile int samplerate;

    while (1)
    {
       
        if (samplerate == 0)
        {
            fprintf(outval, "%d", 0);
            fflush(outval);
            printf("Repeat the process\n");
        }

        fflush(samplerate);
    }
    
 return 0;   
}
