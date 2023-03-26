void draw_ln_Array(int *arr,int n,int high_ind,int color)
{
    int box_width=40;
    int box_height=40;
    int x_margin=20;

    for(int i=0;i<n;i++)
    {
       int x=200+x_margin+i*(x_margin+box_width);
       rectangle(x,400,x+box_width,400+box_height);
       if(visited[i])
       {

           setfillstyle(SOLID_FILL,color);
           floodfill(x+2,402,WHITE);
       }
       char str[10];

       sprintf(str,"%d",arr[i]);
       outtextxy(x+10,380,str);
    }

}
void linear_search(int *arr,int n,int sr,int high_ind,int color)
{
    draw_ln_Array(arr,n,-1,RED);

    for(int i=0;i<n;i++)
    {
        outtextxy(200,100,"searching for ");
        char search[10];
        sprintf(search,"%d",sr);
        outtextxy(240,100,search);
        visited[i]=1;

        if(arr[i]==sr)
        {

            draw_ln_Array(arr,n,-1,GREEN);
            delay(5000);
            break;
        }
        else
        {

            draw_ln_Array(arr,n,-1,RED);
        }

    }

}
