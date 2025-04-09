#ifndef MENU_H
#define MENU_H

typedef struct {
    char *title;
    char *options[10];
    int num_options;
} Menu;

Menu* create_menu();
void display_menu(Menu *menu);
void free_menu(Menu *menu);

#endif // MENU_H
