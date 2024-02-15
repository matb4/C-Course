#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

int main() {
    // Get the current working directory
    char dir[100];
    getcwd(dir, sizeof(dir));

    // Get the list of files in the directory
    struct dirent **files;
    int num_files = scandir(dir, &files, NULL, alphasort);
    if (num_files < 0) {
        perror("scandir");
        exit(EXIT_FAILURE);
    }

    // Loop over the files and rename them
    for (int i = 0; i < num_files; i++) {
        char *file = files[i]->d_name;
        if (strcmp(file, ".") == 0 || strcmp(file, "..") == 0) {
            continue;
        }

        // Check if the file is a .cpp file
        int len = strlen(file);
        if (len < 4 || strcmp(file + len - 4, ".cpp") != 0) {
            continue;
        }

        // Get the base name of the file
        char base[len - 4 + 1];
        strncpy(base, file, len - 4);
        base[len - 4] = '\0';

        // Rename the file
        char new_name[100];
        sprintf(new_name, "%s/0%s.cpp", dir, base);
        rename(file, new_name);
    }

    // Free the memory allocated by scandir
    for (int i = 0; i < num_files; i++) {
        free(files[i]);
    }
    free(files);

    return 0;
}
