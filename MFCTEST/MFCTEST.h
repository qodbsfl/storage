
// MFCTEST.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CMFCTESTApp:
// �� Ŭ������ ������ ���ؼ��� MFCTEST.cpp�� �����Ͻʽÿ�.
//

class CMFCTESTApp : public CWinApp
{
public:
	CMFCTESTApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CMFCTESTApp theApp;