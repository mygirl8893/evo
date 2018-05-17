#pragma once

extern "C" {
#include "crypto/crypto-ops.hpp"
}

void sc_reduce32copy(unsigned char * scopy, const unsigned char *s);
