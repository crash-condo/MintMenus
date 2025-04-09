#include <stdio.h>
#include "menu.h"

typedef struct {
    char *title;
    char *options[10];
    int num_options;
} Menu;

Menu* create_menu() {
    Menu *menu = malloc(sizeof(Menu));
    menu->title = "Main Menu";
    menu->num_options = 3;
    menu->options[0] = "Option 1";
    menu->options[1] = "Option 2";
    menu->options[2] = "Option 3";
    return menu;
}

void display_menu(Menu *menu) {
    printf("=== %s ===\n", menu->title);
    for (int i = 0; i < menu->num_options; i++) {
        printf("%d. %s\n", i + 1, menu->options[i]);
    }
}

void free_menu(Menu *menu) {
    free(menu);
}
