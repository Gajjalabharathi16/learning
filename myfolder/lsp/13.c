int main() {
    char basePath[100];

    printf("Enter directory path: ");
    scanf("%s", basePath);

    printf("Files and directories under %s:\n", basePath);
    listFilesRecursively(basePath);

    return 0;
}
void listFilesRecursively(const char *basePath)
{
        char path[1000];
        struct dirent *dp;
        DIR *dir=opendir(basePath);
        while((dp=readdir(dir))!=NULL)
        {
                if(strcmp(dp->d_name,".")==0 || strcmp(dp->d_name,"..")==0)
                        continue;

                snprintf(path,sizeof(path),"%s/%s",basePath,dp->d_name);
                printf("%s\n",path);


                struct stat statbuf;
                if(stat(path,&statbuf)==0 && S_ISDIR(statbuf.st_mode))
                     listFilesRecursively(path);
        }

closedir(dir);
}
