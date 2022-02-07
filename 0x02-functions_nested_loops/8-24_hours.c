#include "main.h"
/**
 * print_last_digit - jdsjsdj
 *
 * @i: sdjsadka
 *
 * Return: Always 0 (Sucess)
 **/
int print_last_digit(int i)
{
	h <- seq(from=0, to=23)
	m <- seq(from=0, to=59)

	h <- sprintf('%02d', h)
	m <- sprintf('%02d', m)

	df <- data.frame(expand.grid(h, m))
	df$times <- paste0(df$Var1, ':', df$Var2)

	df <- df[order(df$times), ]
	df$times
}

