#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double max(double x,double y){
	if(x>y) return x;
	if(y>=x) return y;
	return 0;
}

double min(double x,double y){
	if(x<y) return x;
	if(y<=x) return y;
	return 0;
}


double overlap(Rect *R,Rect *r){
    Rect over;
    
    over.x =  min(R->x+R->w ,r->x+r->w)-max(R->x,r->x); 
    over.y =  min(R->y,r->y)-max(R->y-R->h, r->y-r->h); 
    
    if( over.x*over.y < 0 ) return 0;
    else return  over.x*over.y;
    
    
 

}