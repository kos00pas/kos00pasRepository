#include <stdio.h>
#include "graph.h"

int main()
{
	GRAPH g;

	GR_init_from_file(&g, "graph.graph");

	GR_print(g);

	return 0;
}
