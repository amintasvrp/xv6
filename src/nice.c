#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char const *argv[]) {
   int pid,prioridade;

   if(argc < 3 ){
       exit();
   }

   pid = atoi(argv[1]);
   prioridade = atoi(argv[2]);

   if(prioridade < 0 || prioridade > 31){
       printf(0,"Insira um valor de prioridade entre 0 e 31\n");
       exit();
   }

    printf(1, "%d %d\n", pid, getpriority(pid));
    setpriority(pid, prioridade);
   exit();
}