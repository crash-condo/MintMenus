#include <stdio.h>
#include "config.h"
#include "menu.h"

int main(int argc, char *argv[]) {
    // Load config from /etc/mintmenus.conf
    if (!load_config("/etc/mintmenus.conf")) {
        fprintf(stderr, "Error loading configuration\n");
        return 1;
    }

    // Initialize the menu
    Menu *menu = create_menu();
    if (menu == NULL) {
        fprintf(stderr, "Error creating menu\n");
        return 1;
    }

    // Display the menu (for example)
    display_menu(menu);

    // Clean up
    free_menu(menu);

    return 0;
}
