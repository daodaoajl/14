#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  char* pc = NULL;
  int i = 0;
  
  pc = (char*)malloc(100*sizeof(char));
  //할당 받음(동적 메모리 할당)
   
  if(pc==NULL)
  {
      printf("메모리 할당 오듀\n");
      exit(1);            
  }
  
  for(i=0;i<26;i++)
  {
      pc[i] = 'a'+i;                 
  }
  
  pc[i] = 0;
  printf("%s\n", pc);
  
  free(pc);//동적 메모리 할당 
  
  system("PAUSE");	
  return 0;
}
// result -> [abcdefghijklmnopqrstuvwxyz]
