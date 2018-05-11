#include <stddef.h>
#include <stdint.h>

#include "blake2.h"

void hash_extra_blake2(const void *out, size_t outlen, const void *in, size_t inlen, const void *key, size_t keylen) {
  //blake2(hash, data, length); //Declare soon new blake2b
}
