#define DELAY 300
#define N 10
#define MAX 50
#define MIN 1
int visited[20];
int random_int(int min,int max)
{
    return rand()%(max-min+1)+min;

}
void drawArray(int *arr,int n,int highlight_ind,int color)
{

    int bar_width=30;
    int margin=20;
    int y_margin=getmaxy()-20;

    for(int i=0;i<n;i++)
    {
        int x=200+i*(margin+bar_width)+margin;
        int bar_height=abs(arr[i]*10);
        int y=y_margin-bar_height;
        rectangle(x,y,x+bar_width,y_margin);
        if(visited[i])
        {
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(x+2,y+2,WHITE);
        }
        else if(i==highlight_ind)
        {

            setfillstyle(SOLID_FILL,color);
            floodfill(x+2,y+2,WHITE);
        }
        else if(i==highlight_ind+1)
        {

            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(x+2,y+2,WHITE);
        }
        char str[10];
        sprintf(str,"%d",arr[i]);
        outtextxy(x+10,y-20,str);
    }

}
void bubble_sort(int *arr,int n)
{
    int done=n;

    for(int i=0;i<n-1;i++)
    {
        int flag=0;

        for(int j=0;j<n-i-1;j++)
        {
            cleardevice();
            //settextstyle(2,HORIZ_DIR,100);
            //setcolor(BLACK);
            outtextxy(100,100,"Bubble sort visulization.");
            drawArray(arr,n,j,RED);
            if(arr[j]>arr[j+1])
            {
                flag=1;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            delay(DELAY);
        }
        visited[--done]=1;
        //if(!flag) break;
    }
    visited[0]=1;
}
