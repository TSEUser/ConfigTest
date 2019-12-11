// ConfigTest.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <windows.h>

int main()
{
	// �ݒ�t�@�C���̒l
	static TCHAR strStartAddress[1024];
	static TCHAR strWriteAddress[1024];
	static TCHAR strReadAddress[1024];

	// �J�����g�p�X
	static TCHAR strPath[MAX_PATH];

	GetCurrentDirectory(MAX_PATH, strPath);
	wsprintf(strPath, TEXT("%s\\Config\\%s"), strPath, TEXT("setting.ini"));

	// �J�n�ʒm�A�h���X�擾
	GetPrivateProfileString(
		TEXT("PLCSetting"), TEXT("PLCStart"), 0,
		strStartAddress, 1024, strPath
	);

	// �ǂݍ��݃A�h���X
	GetPrivateProfileString(
		TEXT("PLCSetting"), TEXT("PLCRead"), 0,
		strReadAddress, 1024, strPath
	);

	// �������݃A�h���X
	GetPrivateProfileString(
		TEXT("PLCSetting"), TEXT("PLCWrite"), 0,
		strWriteAddress, 1024, strPath
	);

    return 0;
}

