#include<stdio.h>
#include<graphics.h>
#include<time.h>
#include "bubblesort.h"
#include "linearsearch.h"

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    initwindow(1080,720,"Algorithtm Visualizer");

    //clearviewport();

    while(1)
    {
        //rectangle(400,360,700,400);
        outtextxy(405,362,"ALGORITHM VISUALIZER");

        rectangle(0,10,200,50);
        outtextxy(5,14,"Bubble sort");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(2,14,WHITE);

        rectangle(0,55,200,90);
        outtextxy(5,59,"Linear Search");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(2,59,WHITE);

        rectangle(0,95,200,135);
        outtextxy(5,99,"Binary Search");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(2,99,WHITE);

        rectangle(0,140,200,180);
        outtextxy(5,142,"Kadanes algo");
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(2,142,WHITE);

        rectangle(0,185,100,220);
        outtextxy(30,187,"Exit");
        setfillstyle(SOLID_FILL,RED);
        floodfill(2,187,WHITE);

        //settextstyle(9,HORIZ_DIR,1);






        int x,y;
        // getmouseclick(WM_LBUTTONDBLCLK,x,y);
        //clearmouseclick(WM_LBUTTONDBLCLK);
        while(!ismouseclick(WM_LBUTTONDOWN));
        getmouseclick(WM_LBUTTONDOWN,x,y);


        if((x>=0 && x<=200) && (y>=10 && y<=50))
        {
            memset(visited,0,sizeof(visited));
            int arr[N];
            srand(time(NULL));
            for(int i=0; i<N; i++)
            {

                arr[i]=random_int(MIN,MAX);
            }
            drawArray(arr,sizeof(arr)/sizeof(arr[0]),-1,RED);
            bubble_sort(arr,sizeof(arr)/sizeof(arr[0]));
            //cleardevice();
            drawArray(arr,sizeof(arr)/sizeof(arr[0]),-1,GREEN);
            outtextxy(200,200,"ARRAY IS SORTED!");
            delay(5000);
            cleardevice();

        }
        else if((x>=0 && x<=200) && (y>=55 && y<=90))
        {
            memset(visited,0,sizeof(visited));
            int arr[N];
            srand(time(NULL));
            for(int i=0; i<N; i++)
            {

                arr[i]=random_int(MIN,MAX);
            }
            cleardevice();

            //
            outtextxy(300,200,"Linear Search Visualization");
            linear_search(arr,sizeof(arr)/sizeof(arr[0]),-1);


            delay(5000);

            cleardevice();
        }
        else if((x>=0 && x<=200) && (y>=95 && y<=135))
        {
            outtextxy(540,300,"Binary Search Will be available soon!");

            //printf("%dpx %dpx",x,y);
            //getch();
            delay(5000);

            cleardevice();
        }
        else if((x>=0 && x<=100) && (y>=185 && y<=220))
        {

            return 0;
        }
        //cleardevice();
    }
    getch();

    closegraph();
}
