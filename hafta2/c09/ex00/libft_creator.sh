#!/bin/bash
cc -c -Wall -Werror -Wextra *.c
ar rc libft.a *.o