#ifndef _STDIO_H_
#define _STDIO_H_

#include "stddef.h"

#ifdef _MSC_VER
#define restrict __restrict
#endif

#define EOF (-1)

typedef struct __FILE FILE;
FILE *__stdin(void);
FILE *__stdout(void);
FILE *__stderr(void);

#define stdin __stdin()
#define stdout __stdout()
#define stderr __stderr()

int fputc(int ch, FILE *stream);
int fputs(const char *str, FILE *stream);
size_t fwrite(const void *restrict buffer, size_t size, size_t count, FILE *restrict stream);
int putc(int ch, FILE *stream);
int puts(const char *str);

#ifdef _MSC_VER
#undef restrict
#endif

#endif
