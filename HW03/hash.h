//
// Created by zaliberty on 20.11.22.
//

#ifndef HW03_HASH_H
#define HW03_HASH_H

#include <stdbool.h>
#include <stdint.h>

struct bin {
    int is_free: 1;
    uint32_t key;
};

struct hash_table {
    struct bin *table;
    uint32_t size;
};

struct hash_table *empty_table(uint32_t size);
void delete_table(struct hash_table *table);

void insert_key(struct hash_table *table, uint32_t key);
bool contains_key (struct hash_table *table, uint32_t key);
void delete_key (struct hash_table *table, uint32_t key);

#endif //HW03_HASH_H
