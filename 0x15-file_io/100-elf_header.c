#include <elf.h>
#include "main.h"
#define REV(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
				(((n << 16) >> 24) << 16) | (n >> 24))
/**
 * verify- verify the file to check if is a ELF
 * @e_ident: the ELF struct
