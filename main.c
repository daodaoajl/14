#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  char* pc = NULL;
  int i = 0;
  
  pc = (char*)malloc(100*sizeof(char));
  //�Ҵ� ����(���� �޸� �Ҵ�)
   
  if(pc==NULL)
  {
      printf("�޸� �Ҵ� ����\n");
      exit(1);            
  }
  
  for(i=0;i<26;i++)
  {
      pc[i] = 'a'+i;                 
  }
  
  pc[i] = 0;
  printf("%s\n", pc);
  
  free(pc);//���� �޸� �Ҵ� 
  
  system("PAUSE");	
  return 0;
}
// result -> [abcdefghijklmnopqrstuvwxyz]