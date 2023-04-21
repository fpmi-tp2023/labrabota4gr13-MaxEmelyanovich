#ifndef BDPROJECT_STRUCTURES_H
#define BDPROJECT_STRUCTURES_H

enum Menu{
  SELECT = 0,
  INSERT = 1,
  DELETE = 2,
  WHERE = 3,
  END_INSERT = 17
};

enum Columns{
  ID = 4,
  NAME = 5,
  PRICE = 6,
  SHELF_LIFE = 7,
  SORT = 8,
  MANUFACTURE_DATE = 9,
  EXPIRY_DATE = 10,
  CATEGORY_ID = 11,
  PHOTO = 12,
  END = 13,
  BEGIN_TRANSACTION = 14,
  COMMIT = 15,
  LIKE = 16,
  STR_NULL = 18,
  COMMA = 19
};

char* query_parts[] = {"SELECT * FROM Product", "INSERT INTO Product(id, name, price, sort, manufacture_date, expiry_date, category_id, photo)", 
			"DELETE * FROM Product", "WHERE", "id", "name", "price", "shelf_life", "sort", "manufacture_date", "expiry_date", "category_id", 
			"photo", ";", "BEGIN TRANSACTION;", "COMMIT;", "LIKE", ");", "null", ","};

#endif //BDPROJECT_STRUCTURES_H

