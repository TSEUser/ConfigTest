// ConfigTest.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <windows.h>

int main()
{
	// 設定ファイルの値
	static TCHAR strStartAddress[1024];
	static TCHAR strWriteAddress[1024];
	static TCHAR strReadAddress[1024];

	// カレントパス
	static TCHAR strPath[MAX_PATH];

	GetCurrentDirectory(MAX_PATH, strPath);
	wsprintf(strPath, TEXT("%s\\Config\\%s"), strPath, TEXT("setting.ini"));

	// 開始通知アドレス取得
	GetPrivateProfileString(
		TEXT("PLCSetting"), TEXT("PLCStart"), 0,
		strStartAddress, 1024, strPath
	);

	// 読み込みアドレス
	GetPrivateProfileString(
		TEXT("PLCSetting"), TEXT("PLCRead"), 0,
		strReadAddress, 1024, strPath
	);

	// 書き込みアドレス
	GetPrivateProfileString(
		TEXT("PLCSetting"), TEXT("PLCWrite"), 0,
		strWriteAddress, 1024, strPath
	);

    return 0;
}

