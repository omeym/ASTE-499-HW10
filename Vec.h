


#ifndef _VEC_H
#define _VEC_H
#include <ostream>
#include <math.h>
template<typename T>
class _vec3 {
public:

    //! This is the default constructor for Vec3 Class.
    /*! This constructor by default assigns a value of 0 to the defined object*/
    _vec3<T>() : d{ 0,0,0 } {}
    //! This is the constructor for Vec3 Class.
    /*! This constructor uses template to define the vector */
    _vec3<T>(T a, T b, T c) : d{ a,b,c } {}

    //! Operator Overloading for [].
    /*! This overloaded operator returns the reference to the element d[i] */
    T& operator[] (int i) { return d[i]; }
    //! Operator Overloading for [].
    /*! This overloaded operator returns the actual element d[i] */
    T operator[] (int i) const { return d[i]; }

    //! Friend Function which overloads the operator +.
    /*! It does elementwise addition of the two vectors a and b @param  a and b 
        @return \f[\vec{c} = \vec{a} + \vec{b} \f]*/
    friend _vec3<T> operator+(const _vec3<T>& a, const _vec3<T>& b) {
        return _vec3<T>(a[0] + b[0], a[1] + b[1], a[2] + b[2]);
    }
    //! Friend Function which overloads the operator -.
    /*! It does elementwise subtraction of the two vectors a and b @param  a and b 
        @return \f[\vec{c} = \vec{a} - \vec{b} \f]*/
    friend _vec3<T> operator-(const _vec3<T>& a, const _vec3<T>& b) {
        return _vec3<T>(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
    }

    //! Friend Function which evaluates dot product of the defined vec3 objects @param a and b.
    /*! It does elementwise multiplication of the two vectors a and b @return Dot product of two vectors a and b \f[\vec{c} = \vec{a} \cdot \vec{b} \f]*/
    friend T dot(const _vec3<T>& a, const _vec3<T>& b) {
        return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
    }

    //! Friend Function which evaluates the magnitude of the vector.
    /*! It uses the dot function @param a and b @return   Returns magnitude of vector a  \f[\vec{a} = \sqrt{\vec{a} \cdot \vec{a}} \f]*/
    friend double mag(const _vec3<T>& a) { return sqrt(dot(a, a)); }
    
    //! Friend Function which prints the elements of the vec3 object.
    /*! It uses OS stream opeator overloading of << to print the elements */
    friend std::ostream& operator<<(std::ostream& out, const _vec3<T>& a) {
        out << a[0] << " " << a[1] << " " << a[2]; return out;
    }
protected:
    T d[3];
};
using double3 = _vec3<double>;
#endif