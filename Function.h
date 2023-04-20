#pragma once
#include <Struct.h>
#include <Novice.h>

// â¡éZ
Vector3 Add(const Vector3 v1, const Vector3 v2);

// å∏éZ
Vector3 Subtract(const Vector3 v1, const Vector3 v2);

// ÉXÉJÉâÅ[î{
Vector3 Multiply(float scalar, const Vector3 v);

// ì‡êœ
float Dot(const Vector3 v1, const Vector3 v2);

// í∑Ç≥
float Length(const Vector3 v);

// ê≥ãKâª
Vector3 Normalize(const Vector3 v);


// ï\é¶
static const int kColumnWidth = 60;
void VectorScreenPrintf(int x, int y, const Vector3 vector, const char* label) 
{

	Novice::ScreenPrintf(x, y, "%.02f", vector.x);
	
	Novice::ScreenPrintf(x + kColumnWidth * 1, y, "%.02f", vector.y);
	
	Novice::ScreenPrintf(x + kColumnWidth * 2, y, "%.02f", vector.z);
	
	Novice::ScreenPrintf(x + kColumnWidth * 3, y, "%s", label);
}