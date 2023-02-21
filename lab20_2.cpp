#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
    double under = max(R1->y-R1->h,R2->y-R2->h);
    double on = min(R1->y,R2->y);
    double left = max(R1->x,R2->x);
    double right = min(R1->w+R1->x,R2->w+R2->x);
    
    if(on > under && right > left){
        return (on-under)*(right-left);
    }else{
        return 0;
    }


}