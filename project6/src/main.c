#include <stdio.h>
#include "../include/interface.h"
#include <sqlite3.h>

int main() {
  sqlite3 *db;

    if (open_database("/Users/diamondmax/Documents/lab4/Product.db", db) != 0){
    sqlite3_close(db);
    return 1;
  }
  while(1){
    if (process_menu_actions(db) == -1){
      break;
    }
  }

  sqlite3_close(db);
  return 0;
}

