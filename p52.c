#include <stdio.h> 
struct Point { 
	int x, y; 
}; 
int distSq(Point p, Point q) 
{ 
	return (p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y); 
} 
int isSquare(Point p1, Point p2, Point p3, Point p4) 
{ 
	int d2 = distSq(p1, p2); 
	int d3 = distSq(p1, p3);  
	int d4 = distSq(p1, p4);  
	if (d2 == d3 && 2 * d2 == d4 && 2 * d2 == distSq(p2, p3)) { 
		int d = distSq(p2, p4); 
		if (d == distSq(p3, p4) && d == d2)
				return (1); 
				else
				return 0;
	} 
	if (d3 == d4 && 2 * d3 == d2 && 2 * d3 == distSq(p3, p4)) { 
		int d = distSq(p2, p3); 
			if (d == distSq(p2, p4) && d == d3)
				return (1); 
				else
				return 0;
	} 
	if (d2 == d4 && 2 * d2 == d3 && 2 * d2 == distSq(p2, p4)) { 
		int d = distSq(p2, p3); 
				if (d == distSq(p3, p4) && d == d2)
				return (1); 
				else
				return 0;
	} 
	return 0; 
} 
int main() 
{ 
struct Point p1 = { 20, 10 }, p2 = { 10, 20 }, 
		p3 = { 20, 20 }, p4 = { 10, 10 }; 
		int r=isSquare(p1, p2, p3, p4);
if(r==0)
printf("\n yes");
else
printf("\n No"); 
	return 0;
} 
