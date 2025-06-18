//. Develop a C program to delete all files in a directory named "Temp"?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    const char *dirName = "./Test"; // Current directory's "Temp" folder
    struct dirent *entry;
    DIR *dir = opendir(dirName);

    if (dir == NULL) {
        perror("Unable to open directory");
        return 1;
    }

    char path[1024];

    while ((entry = readdir(dir)) != NULL) {
        // Skip . and ..
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
            continue;

        snprintf(path, sizeof(path), "%s/%s", dirName, entry->d_name);

        struct stat statbuf;
        if (stat(path, &statbuf) == 0) {
            if (S_ISREG(statbuf.st_mode)) {
                   if (remove(path) == 0) {
                    printf("Deleted file: %s\n", path);
                } else {
                    perror("Failed to delete file");
                }
            }
        }
    }

    closedir(dir);
    return 0;
}
