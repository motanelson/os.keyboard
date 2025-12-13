
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
            i=1;
            while(i){
               ii=inportl(0x60);
               if(ii>128)i=0;
            }
            gputc(xx,yy,keymap[ii & 127]);
            redraw();
            xx=xx+10;
            if (xx>600){
                xx=10;
                yy=yy+10;
            }
            i=1;
            while(i){
               ii=inportl(0x60);
               if(ii<128)i=0;
            }

        }
        redraw();
        while(1){}

        
        
	
	
}


