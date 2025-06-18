#include <stdio.h>
#include <unistd.h>
#include <pwd.h>
#include <sys/types.h>
#include <stdlib.h>  // for exit()

int main() {
    const char *filename = "file.txt";
    const char *new_owner = "user1";

    // Step 1: Get user details
    struct passwd *pw = getpwnam(new_owner);
    if (pw == NULL) {
        perror("getpwnam"); // Error if user not found
        exit(EXIT_FAILURE);
    }

    // Step 2: Change ownership
    if (chown(filename, pw->pw_uid, -1) == 0) {
        printf("Ownership of file '%s' changed to '%s'\n", filename, new_owner);
    } else {
        perror("chown"); // Print error if chown fails
        exit(EXIT_FAILURE);
    }

    return 0;
}

/*if the owner is not present makesure to create the owner using---> sudo useradd user1
for confirmation check--->getent passwd user
now execute using---> sudo ./a.out
