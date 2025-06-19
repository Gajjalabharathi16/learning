#include<stdio.h>
#include<unistd.h>
/*int main()
{
        char buf[100];
        if(getcwd(buf,sizeof(buf))!=NULL)
        {
                printf("'%s' is current working directory",buf);
        }
}*/
//in lsp
int main()
{
        char buf[100];
        int len=readlink("/proc/self/cwd",buf,sizeof(buf)-1);
        if(len==-1)
        {
                perror("readlink failed");
        }
        buf[len]='\0';
        printf("%s",buf);
}
