#ifndef PRINTF__MAIN_H_
#define PRINTF__MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/* my macro */
#define BUFFER_SIZE 1024

/* my structure */

/**
 * fpw_s - flag width and precision
 * @flag: flag passed if any
 * @width: num width
 * @precision: precision
 */
typedef struct fpw_s
{
	int flag: 4;
	int length: 4;
	int width: 4;
	int precision;
	int reverse;
} fpw_t;

/**
 * struct operations_s - structure
 * @c: character
 * @func: function
 *
 */
typedef struct operations_s
{
	char c;
	int (*func)(va_list, fpw_t *);
} operations;

enum flags
{
	E_PLUS = 1,
	E_SPACE,
	E_HASH
};

enum l_flags
{
	E_LONG = 1,
	E_SHORT
};

/* prototype */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list, fpw_t*);
int print_str(va_list, fpw_t*);
int print_percent(va_list, fpw_t*);
int print_integer(va_list, fpw_t*);
int print_binary(va_list, fpw_t*);
int print_unsigned(va_list, fpw_t*);
int print_octal(va_list, fpw_t*);
int print_hex(va_list, fpw_t*);
int print_HEX(va_list, fpw_t*);
int print_String(va_list, fpw_t*);
int print_voidp(va_list, fpw_t*);
int (*get_ops(char))(va_list, fpw_t *);

/* utilities */
int _strlen(char *);
void _strrev(char *);
int p_str(char *str);
int p_hex(int hex);
void handle_flag(const char *format, int *i, fpw_t *mod);



#endif /* PRINTF__MAIN_H_ */
