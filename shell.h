#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <dirent.h>
#include <signal.h>

extern char **environ;
void sig_handler(int);
char *val_getline(void);
int _memory(char *buff);
int _memory1(char *buff);
char **fun_strtok(char *buff, int pointer);
void exit1(char *buffer, char **commands);
int env1(char *buff, char **commands);
char *_getenv(char *variable);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
char *_str_str(char *haystack, char *needle);
int _strcmp(char *s0, char *s1);
char *get_path(char *command);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
void fun_fork(char *buffer, char **command, char **argv, int count);
char *_itoa(int number);
int *_perror(char *argv, char *str, char *command);


#endif
