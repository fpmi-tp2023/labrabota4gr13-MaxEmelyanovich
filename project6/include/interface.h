#include <sqlite3.h>

#ifndef BDPROJECTS_INTERFACE_H
#define BDPROJECTS_INTERFACE_H


int open_database(char* path, sqlite3* db);

int process_menu_actions(sqlite3* db);

void string_concat(char *destination, int index);

void create_insert_query(char *query);

static int callback(void *data, int argc, char **argv, char **azColName);

void create_select_query(char *query);

void create_delete_query(char *query);

#endif //BDPROJECTS_INTERFACE_H
