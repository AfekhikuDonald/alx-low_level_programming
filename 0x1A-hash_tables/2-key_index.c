#include "hash_tables.h"

/**
 * key_ index - gives the index of a key
 * @key: key
 * @size: size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size) {
    unsigned long int hash = hash_djb2(key);
    return hash % size;
}
