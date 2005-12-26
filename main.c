/* $Id$ */

#include <stdio.h>
#include <stdlib.h>

void usage(void);

int
main(int argc, char *argv[])
{
	int c;

	while ((c = getopt(argc, argv, "")) == -1)
		switch (c) {
		default:
			usage();
			/* NOTREACHED */
		}
	argv += optind;
	while (*argv != NULL)
		cflow(*argv++);
	exit(0);
}

void
usage(void)
{
	extern char *__progname;

	fprintf(stderr, "usage: %s\n", __progname);
	exit(1);
}
