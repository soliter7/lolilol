#include "utils.h"
#include <utmp.h>
#include <time.h>
#include <errno.h>
#include <sys/types.h>

void	read_file(char *filename)
{
	int		fd;
	char	buffer[2];

	fd = open(filename, O_RDONLY);
	buffer[1] = '\0';
	if (fd == -1)
	{
		print("cat: ");
		print(filename);
		print(": No such file or directory\n");
		return ;
	}
	while (read(fd, buffer, 1) > 0)
		print(buffer);
	close(fd);
}

int		main(int argc, char **argv)
{
	read_file("/var/run/utmpx");
	return (0);
}
