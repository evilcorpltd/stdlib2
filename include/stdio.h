#ifndef _STDIO_H_
#define _STDIO_H_

#define EOF (-1)

typedef struct __FILE FILE;
FILE *__stdin(void);
FILE *__stdout(void);
FILE *__stderr(void);

#define stdin __stdin()
#define stdout __stdout()
#define stderr __stderr()

int fputc(int ch, FILE *stream);
int putc(int ch, FILE *stream);
int puts(const char *str);

#endif
