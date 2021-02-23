#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect &a, Rect &b){
	double x = min(a.x + a.w , b.x + b.w) - max(a.x , b.x);
	double y = min(a.y + a.h , b.y + b.h) - max(a.y , b.y);
	double z;
	if (a.x + a.w <= b.x || a.y + a.h <= b.y) z = 0;
	else if(b.x + b.w <= a.x + a.w && b.y + b.h <= a.y + a.h){
		x = b.w;
		y = b.h;
		z = x*y;
	}
	else if(b.x + b.w <= a.x + a.w){
		x = b.w;
		z = x*y;
	}
	else if(b.y + b.h <= a.y + a.h){
		y = b.h;
		z = x*y;
	}
	else z = x*y;

return z;
}
