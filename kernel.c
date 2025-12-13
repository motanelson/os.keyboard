
#include "base.h"

char *cc;
void kernel_main()
{
        
        int n=0;
        int xx=10;
        int yy=10;
        int indexs=0;
        int i=1;
        int ii=0;
        cc=starts();
        
        while(1){
            i=inkeys();
            gputc(xx,yy,i);
            redraw();
            xx=xx+10;
            if (xx>600){
                xx=10;
                yy=yy+10;
            }
            i=1;
            keystop();

        }
        redraw();
        while(1){}

        
        
	
	
}


