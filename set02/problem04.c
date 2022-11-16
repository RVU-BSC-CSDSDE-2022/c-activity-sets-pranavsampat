#include<stdio.h>
void input(float *height,float *length,float *radius){
  printf("enter values for radius height and length");
  scanf("%f %f %f",height,length,radius);
}
int find_mood(float height,float length,float radius){
  if(radius<height&&radius<length){
    return 1;
  }
  else if(height<length&&height<radius){
    return 2;
  }
  else if(length<height&&length<radius){
    return 3;
    }
  else{
    return 4;
  }
}
void output(float height,float length,float radius, int mood){
if(mood==1){
  printf("the camel is sick");
}
else if(mood==2){
  printf("the camel is happy");
}
else{
  printf("the camel is tense");
}}
int main(){
  float height, length,radius;
  int mood;
  input(&height,&length,&radius);
  mood=find_mood(height,length,radius);
  output(height,length,radius,mood);
}