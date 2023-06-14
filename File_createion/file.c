#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){

	int ret;
	
	ret = open("./file.txt" , O_RDWR, O_RDWR);
	
	write(ret, "asif", 4);
	
	close(ret);
	
	ret = open("./file.txt" , O_APPEND | O_RDWR, O_RDWR);
	
	write(ret, "Ikbal", 5);



	return 0;
}
