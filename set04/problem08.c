#include<stdio.h>
#include<math.h>

typedef struct point {
    float start_end_x, start_end_y;
} Point;

typedef struct side {
    Point p1,p2;
    float distance;
} Side;

typedef struct polygon {
    Side sides[100];
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point();
void initialize_sides(int n,Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(int n,Polygon* p);
void output(Polygon p);

int input_n(){
    int n;
    printf("Enter number of sides: ");
    scanf("%d",&n);
    return n;
}

Point input_point(){
    Point x;
    printf("Enter point coordinates (x,y): ");
    scanf("%f %f",&x.start_end_x,&x.start_end_y);
    return x;
}

void initialize_sides(int n,Polygon *p){
    for(int i=0;i<n-1;i++) {
        p->sides[i].p1=p->p[i];
        p->sides[i].p2=p->p[i+1];
        p->sides[i].distance=find_distance(p->sides[i].p1,p->sides[i].p2);
    }
    p->sides[n-1].p1=p->p[n-1];
    p->sides[n-1].p2=p->p[0];
    p->sides[n-1].distance=find_distance(p->sides[n-1].p1,p->sides[n-1].p2);
}

float find_distance(Point a,Point b){
    float distance;
    distance=sqrt(pow(b.start_end_x - a.start_end_x, 2) + pow(b.start_end_y - a.start_end_y, 2));
    return distance;
}

void find_perimeter(int n,Polygon *p){
    p->perimeter=0;
    for(int i=0;i<n;i++){
        p->perimeter+=p->sides[i].distance;
    }
}

void output(Polygon p){
    printf("Perimeter of the polygon: %f\n", p.perimeter);
}

int main(){
    int n;
    n=input_n();
    Polygon z;
    for(int i=0;i<n;i++){
        z.p[i]=input_point();
    }
    initialize_sides(n,&z);
    find_perimeter(n,&z);
    output(z);
    return 0;
}

