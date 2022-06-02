#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**
* main - Entry point
*
* @argc: number of arguments passed
*
* @argv: list of arguyments passed
*
* Return: (Always/Success).
*/

int main(int argc, char **argv)
{
    int fd1, fd2, write_return, close_ret1, close_ret2, read_return = 1;
	char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"); exit(97);
    }
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]); exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]); exit(99);
	}
	while (read_return > 0)
	{
		read_return = read(fd1, buffer, 1024);
		if (read_return == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]); exit(98);
		}
		write_return = write(fd2, buffer, read_return);
		if (write_return == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]); exit(99);
		}
	}
	close_ret1 = close(fd1);
	if (close_ret1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1); exit(100);
	}
	close_ret2 = close(fd2);
	if (close_ret2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2); exit(100);
	}
    return (0);
}
