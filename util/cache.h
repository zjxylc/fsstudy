#ifndef CACHE_H
#define CACHE_H

#include "../util/hash.h"

typedef struct {
	HASH* hash;
	uint32_t block_size;
	uint32_t num_buckets;
} CACHE;

typedef struct {
	uint32_t block_num;
	char* block_data;
} CACHE_ITEM;

int cache_get(CACHE* cache, char* buffer, uint32_t block);
void cache_set(CACHE* cache, char* buffer, uint32_t block);
CACHE* cache_create(uint32_t block_size, uint32_t num_buckets);
void cache_destroy(CACHE* cache);

#endif