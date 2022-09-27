#include "hash_tables.h"

/**
 * key_index - generates the key using hash_djb2
 * @key: the key
 * @size: size of the array of the table
 * Return: index key stored in the array of the table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	return (hash_djb2(key) % size);
}
