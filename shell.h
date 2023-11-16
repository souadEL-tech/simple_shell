#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>

/*DECLARATIONS*/

extern char **environ;

/*INCLUDED FUNCTIONS*/
char **string_storage(char *line);
void path_finder(char **array);
int execute_line(char *con, char **array);

/*******CHECKS*******/
void exit_check(char **array, char *line, int exit_stat);
void env_check(char **array);
int clear_check(char **array);
void sigint_check(int sign);
int space_tabs_check(char *line);
/*******************/

/*****ALLOCATION*****/
void *_realloc(void *ptr, unsigned int size);
/*******************/
void free_2D(char **array);
/*******STRING*******/
int _putchar(char c);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
/********************/

/****ADVANCED FUNCTION*****/
ssize_t _getline(char **line, size_t *len, FILE *stream);
/**************************/

#endif
