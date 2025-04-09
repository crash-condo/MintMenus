#include <stdio.h>
#include <stdlib.h>
#include "config.h"

int load_config(const char *config_file) {
    FILE *file = fopen(config_file, "r");
    if (!file) {
        return 0; // Failed to open the file
    }

    // Parse the configuration file (you can expand this to read real key-value pairs)
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("Config line: %s", line);
    }

    fclose(file);
    return 1; // Success
}
