

    #include <stdio.h>
    #include <string.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <errno.h>
    #include <termios.h>


    int main(int argc, char* argv[])
	{
		 int i;
		 int fd; /* File descriptor for the port */
		 int iRet;
		 char buf[1024];

		 fd = open("/dev/ttyUSB0", O_RDWR | O_NOCTTY | O_NDELAY);
//		 printf("%d\n", fd);
		 if (fd < 0) { /** error **/
					   printf("[%s-%d] open error!!!\n", __FILE__, __LINE__);
					   goto err1;
					  }
					   //fcntl(fd, F_SETFL, FNDELAY);
					 fcntl(fd, F_SETFL, 0);

					 while(1)
					{
						sleep(1);
					 iRet = write(fd, "1234567\r\n", 8);
					 if (iRet < 0) {
						 printf("[%s-%d] write error!!!\n", __FILE__, __LINE__);
								   }

//					 iRet = read(fd, buf, 128);
//					 for(i = 0; i < iRet; i++) {
//				     if((i & 0xf) == 0) {
//																														                printf("\n");
//																																		            }
//				printf("%c",buf[i]);
//																																			        }
//					 printf("\n");
					}
					  close(fd);																								    err1:
																													        return 0;
																															    }


