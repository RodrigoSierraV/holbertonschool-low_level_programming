#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c)
{
  return(write(1, &c, 1));
}

int printchar(va_list str)
{
  _putchar(va_arg(str, int));
  return(1);
}
int printstring(va_list str)
{
  int a = 0;
  char *string = va_arg(str, char*);

  for(a = 0;  string[a]; a++)
    _putchar(string[a]);
  return(a);
}
int printdigit(va_list str)
{
  int n = va_arg(str, int);
  int digitcount = n;
  int digitprint = n;
  int k = 1;
  int i = 0;
  int residuo, z;
  int div;
  int digit;
  while (digitcount != 0)
    {
      digitcount = (digitcount - (digitcount % 10)) / 10;
      k = k * 10;
      i++;
    }
  div = k;
  z = i;
  if (i == 0)
    _putchar('0');
  if (n < 0)
    digitprint = -n;
  while (z > 0)
    {
      div /= 10;
      residuo = digitprint % div;
      digit = (digitprint - residuo) / div;
      digitprint = residuo;
      if (n < 0 && z == i)
	_putchar('-');
      _putchar(digit + '0');
      z--;
    }
  
  return(0);
}
typedef struct op
{
  char *op;
  int (*f)(va_list str);
} op_t;
int (*get_op_func(char *s))(va_list str)
{
  int i = 0;
  op_t ops[] = {
    {"c", printchar},
    {"s", printstring},
    {"d", printdigit},
    {"i", printdigit},
    {NULL, NULL}
  };

  while (i < 4)
    {
      if (*s == *ops[i].op)
	return(ops[i].f);
      i++;
    }
  return (NULL);
}
int _printf(const char *format, ...)
{
  va_list arguments;
  unsigned int i = 0, b = 0, c = 0;
  char id, letter[] = {'c', 's', 'd', 'i'};

  va_start(arguments, format);
  for(i = 0; format[i]; i++)
    {
      if(i == 0 && format[i] == '%' && !format[i + 1])
	return(-1);
      if (format[i] == '%')
	{
	  if (format[i + 1] == '%')
            {
              _putchar(format[i + 1]);
	      c -= 1;
              i += 1;
            }
	  else if (format[i + 1] != '%')
	    {
	      b = 0;
	      while (b < 4)
		{
		  if(format[i + 1] == letter[b])
		    {
		      id = format[i + 1];
		      c += (*get_op_func(&id))(arguments) - 2;
		      i += 1;
		    }
		b++;
		
		}
	    }
	  else
            _putchar(format[i]);
	}
      else
	_putchar(format[i]);
    }
  va_end(arguments);
  return(i + c);
}
int main(void)
{
  int len;
  int len2;

  len = _printf("Let's try to%% printf a simple sentence.\n");
  len2 = printf("Let's try to%% printf a simple sentence.\n");
  printf("Length:[%d, %i]\n", len, len2);
  printf("Character:[%c]\n", 'H');
  _printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
  len = _printf("%%\n");
  len2 = printf("%%\n");
  printf("Length:[%d, %i]\n", len, len2);
  return (0);
}
