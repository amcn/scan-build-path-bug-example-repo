#include <example.h>
#include <stdlib.h>

int
main (int argc, char **argv)
{
  example_t example = example_create ();

  example_destroy (example);

  void *buf = malloc(10);
  free(buf);
  free(buf); /* double free */
}
