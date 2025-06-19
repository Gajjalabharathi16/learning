// Implement a C program to read and display the contents of a CSV file named "data.csv"?
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
        int fd=open("my.csv",O_RDONLY);
        char buf[32]={0};
        int bytesread;
        while((bytesread=read(fd,buf,sizeof(buf)-1))>0)
        {
                write(STDOUT_FILENO,buf,bytesread);
        }
        close(fd);
}

/*first create my.csv with content
ID,Name,Age
101,Bharathi,22
102,Anil,25
  
A CSV file contains plain text data separated by commas, for example:

Name,Age,City
Bharathi,22,Hyderabad
Anil,25,Bangalore
Each line is a row, and each value is a column.

//write(STDOUT_FILENO, buffer, bytesRead)	Writes data to terminal
  */
