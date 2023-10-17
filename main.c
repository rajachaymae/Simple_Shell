#include "list.h"

/**
 * main: principal function
 * @ac: len
 * @argv:arg vector
 *
 */
int main(int ac, char **argv){
  char *shell = "$  ";
  char *line = NULL;
  size_t len = 0;
  ssize_t nread = 0;

  /* use void until we used  */
  (void)ac; (void)argv;
  while (1)
  {
	  write(STDOUT_FILENO, shell, 3);
	  nread = getline(&line, &len, stdin);
		  if (nread == -1)
		  {
			  write(STDOUT_FILENO, "\n", 1);
			  return (-1);
		  }
          
  }
  write(STDOUT_FILENO, line, nread);

  free(line);
  return (0);
}
