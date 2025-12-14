
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
        char c[1024];
        char *ci=c;
        cc=starts();
        
        while(1){
            inputs(10,cursy,ci);
            cursy=cursy+10;
            gputs(10,cursy,ci);
            redraw();
            cursy=cursy+10;

        }
        redraw();
        while(1){}

        
        
	
	
}


