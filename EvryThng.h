#pragma once
#include "Exclude.h" /* ��������� ��������, ������� �� ��������� ��� �������� ��������.*/
#include "envirmnt.h"
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <io.h>
#include "support.h"
#ifdef _MT
#include <process.h>
/* DWORD_PTR (����� ��� �����, ��������������� �������� ���������)
 * ������������ ��� ����� �����, ������������� � ����������� ��� ���������.
 * ��������� ����� � Win64 �� ����� ���������� ��������������� ���������,
 * ���������� �������� �������������� 32-������� � 64-������� ������,
 * ��������� � Win64 ����������� HANDLE � ��������� �������� 64-��������
 * ���� ����� �������������� ������ � ��� ������,
 * ���� ���������� ������������� ��������� _Wp64.
 */

#if !defined(_Wp64)
#define DWORD_PTR DWORD
#define LONG_PTR LONG
#define INT_PTR INT
#endif 
#endif