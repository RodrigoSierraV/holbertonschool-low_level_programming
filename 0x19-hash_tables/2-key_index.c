#include "hash_tables.h"

/**
 * key_index -  function that gives you the index of a key.
 * @key: key to search
 * @size: size of the array of the table
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashnum = 0;

	hashnum = hash_djb2(*key) % size;
	return (hashnum);
}
