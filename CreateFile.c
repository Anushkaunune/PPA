#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",0777);

    if (fd != -1)
    {
        printf("File is succesfully opened with FD : %d\n",fd);

    }
    close (fd);
    return 0;
}