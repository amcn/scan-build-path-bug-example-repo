#include <example.h>
#include <stdlib.h>

example_t
example_create (void)
{
  void *buf = malloc(10);
  return (example_t)buf;
}

void
example_destroy (example_t ex)
{
  void *buf = (void *)ex;
  free(buf);
  free(buf); /* double free */
}
