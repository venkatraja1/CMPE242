#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	int on;
	int led_no;
	int fd;

	/*if (argc != 3 || sscanf(argv[1], "%d", &led_no) != 1 || sscanf(argv[2],"%d", &on) != 1 ||
			on < 0 || on > 1 || led_no < 0 || led_no > 3) {
		fprintf(stderr, "Usage: leds led_no 0|1\n");
		exit(1);
	}*/

	fd = open("/dev/lab1led", 0);
	int n = 50;
	while(--n)
	{
	    ioctl(fd, 1, 1);
	    sleep(1);
	}
	close(fd);

	return 0;
}

