#include "utils.h"
#include <string.h>
#include <stdlib.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!

	int i = 0;
	*argv = (char**) malloc (sizeof(char)*100);
	**argv = (char*) malloc (sizeof(char)*100);

	char* input= (char*) malloc (sizeof(char)*100);
	strcpy(input, command);
	
	char blank[] = " \n\t";

	char* ptr;
	ptr = strtok(input,blank);
	
	*argc = 0;

	 while (ptr != NULL) {
	   (*argv)[i] = (char*)malloc (sizeof(char)*100);
	   strcpy((*argv)[i++], ptr);
	   ptr = strtok(NULL,blank);
	   (*argc) = (*argc) +1; //count argc 
	  }	

}
