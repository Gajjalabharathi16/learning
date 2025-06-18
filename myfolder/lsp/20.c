#include <stdio.h>
#include <stdlib.h>//mkstemp()
#include <unistd.h>//lseek(),close,read,write
#include <fcntl.h>//open()
#include <string.h>

int main()
{
        char temp[]="/tmp/tempfileXXXXXX";//creates a file in /temp.here 6 XXXXXX are mandatory
        int fd=mkstemp(temp);//creates and opens a new unique temporary file
        char buf[]="hello my name is bharathi";
        int bytes=write(fd,buf,strlen(buf));
        lseek(fd,0,SEEK_SET);//rewinds to starting point
        char buf1[bytes+1];
        int bytesread=read(fd,buf1,sizeof(buf1)-1);
        buf1[bytesread]='\0';
        printf("%s",buf1);
        close(fd);
        unlink(temp);//unlink manually.mkstemp won't delete temp file manually
}
