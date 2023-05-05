#include "user.h"
#include "kernel/sysinfo.h"

void print_info(struct sysinfo *x) {
  printf("Number of Hardware Threads: %d\n", x->num_t);
  printf("Number of Processes: %d\n", x->num_p);
  printf("Total Memory (bytes): %d\n", x->tot_mem);
  printf("Available Memory (bytes): %d\n", x->ava_mem);
  printf("Process Memory (bytes): %d\n", x->proc_mem);
}

int main(int argc, char *argv[]) {
  struct sysinfo x;
  
  if (argc != 1) {
    printf("Wrong commands given.\n");
    exit(1);
  }

  sysinfo(&x);
  print_info(&x);

  return 0;
}
