#ifndef TEMPLATE_STRUCTS_H_INCLUDED
#define TEMPLATE_STRUCTS_H_INCLUDED
template<typename T>
struct vec2{
    T x;
    T y;
};
template<typename T>
T operator+(vec2<T> a,vec2<T> b)
{
    vec2<T> temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    return temp;
}
template<typename T>
//T operator+=(vec2<T>& a,vec2<T> b)
void operator+=(vec2<T>& a,vec2<T> b)
{
    //vec2<T> temp=a+b;
    a=a+b;
    /*a.x=a.x+b.x;
    a.y=a.y+b.y;*/
    //return temp;
}
template<typename T>
T operator*(vec2<T> a,vec2<T> b)
{
    vec2<T> temp;
    temp.x=a.x*b.x;
    temp.y=a.y*b.y;
    return temp;
}
template<typename T>
void operator*=(vec2<T>& a,vec2<T> b)
{
    //vec2<T> temp=a+b;
    a=a*b;
    /*a.x=a.x+b.x;
    a.y=a.y+b.y;*/
    //return temp;
}
template<typename T>
T operator/(vec2<T> a,vec2<T> b)
{
    vec2<T> temp;
    temp.x=a.x/b.x;
    temp.y=a.y/b.y;
    return temp;
}
template<typename T>
void operator/=(vec2<T>& a,vec2<T> b)
{
    //vec2<T> temp=a+b;
    a=a/b;
    /*a.x=a.x+b.x;
    a.y=a.y+b.y;*/
    //return temp;
}
template<typename T>
bool operator>(vec2<T> a,vec2<T> b)
{
    if(a.x>b.x&&a.y>b.y){
        return true;
    }
    return false;
}
template<typename T>
bool operator<(vec2<T> a,vec2<T> b)
{
    if(a.x<b.x&&a.y<b.y){
        return true;
    }
    return false;
}
template<typename T>
bool operator>=(vec2<T> a,vec2<T> b)
{
    if(a.x>=b.x&&a.y>=b.y){
        return true;
    }
    return false;
}
template<typename T>
bool operator<=(vec2<T> a,vec2<T> b)
{
    if(a.x<=b.x&&a.y<=b.y){
        return true;
    }
    return false;
}
template<typename T>
bool operator==(vec2<T> a,vec2<T> b)
{
    if(a.x==b.x&&a.y==b.y){
        return true;
    }
    return false;
}
template<typename T>
struct vec3{
    T x;
    T y;
    T z;
};
template<typename T>
T operator+(vec3<T> a,vec3<T> b)
{
    vec2<T> temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    temp.z=a.z+b.z;
    return temp;
}
template<typename T>
//T operator+=(vec2<T>& a,vec2<T> b)
void operator+=(vec3<T>& a,vec3<T> b)
{
    //vec2<T> temp;
    /*a.x=a.x+b.x;
    a.y=a.y+b.y;
    a.z=a.z+b.z;*/
    a=a+b;
    //return temp;
}
template<typename T>
T operator*(vec3<T> a,vec3<T> b)
{
    vec3<T> temp;
    temp.x=a.x*b.x;
    temp.y=a.y*b.y;
    temp.z=a.z*b.z;
    return temp;
}
template<typename T>
void operator*=(vec3<T>& a,vec3<T> b)
{
    //vec2<T> temp=a+b;
    a=a*b;
    /*a.x=a.x+b.x;
    a.y=a.y+b.y;*/
    //return temp;
}
template<typename T>
T operator/(vec3<T> a,vec3<T> b)
{
    vec3<T> temp;
    temp.x=a.x/b.x;
    temp.y=a.y/b.y;
    temp.z=a.z/b.z;
    return temp;
}
template<typename T>
void operator/=(vec3<T>& a,vec3<T> b)
{
    //vec2<T> temp=a+b;
    a=a/b;
    /*a.x=a.x+b.x;
    a.y=a.y+b.y;*/
    //return temp;
}
template<typename T>
bool operator>(vec3<T> a,vec3<T> b)
{
    if(a.x>b.x&&a.y>b.y&&a.z>b.z){
        return true;
    }
    return false;
}
template<typename T>
bool operator<(vec3<T> a,vec3<T> b)
{
    if(a.x<b.x&&a.y<b.y&&a.z<b.z){
        return true;
    }
    return false;
}
template<typename T>
bool operator>=(vec3<T> a,vec3<T> b)
{
    if(a.x>=b.x&&a.y>=b.y&&a.z>=b.z){
        return true;
    }
    return false;
}
template<typename T>
bool operator<=(vec3<T> a,vec3<T> b)
{
    if(a.x<=b.x&&a.y<=b.y&&a.z<=b.z){
        return true;
    }
    return false;
}
template<typename T>
bool operator==(vec3<T> a,vec3<T> b)
{
    if(a.x==b.x&&a.y==b.y&&a.z==b.z){
        return true;
    }
    return false;
}
#endif // TEMPLATE_STRUCTS_H_INCLUDED
