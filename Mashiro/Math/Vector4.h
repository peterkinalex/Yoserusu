#ifndef INCLUDED_MASHIRO_MATH_VECTOR4_H
#define INCLUDED_MASHIRO_MATH_VECTOR4_H

namespace Mashiro{
namespace Math{

class Vector3;

///3�����������W�Ƃ��Ďg���ׂ��N���X�B���̂��߉��Z�͂قƂ�Ǘp�ӂ��Ȃ��B
class Vector4{
public:
	Vector4();
	explicit Vector4( float );
	Vector4( float, float, float, float = 1.f );
	Vector4( const Vector4& );
	explicit Vector4( const Vector3& );
	Vector4& operator=( const Vector4& );
	Vector4& operator=( const Vector3& );
	void set( float, float, float, float = 1.f );
	//���K��
	void normalize();

	float& operator[]( int );
	float operator[]( int ) const;

	float x, y, z, w;
};

}
}

#endif