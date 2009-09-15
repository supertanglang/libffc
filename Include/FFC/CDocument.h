// CDocument.h
#ifndef __CDOCUMENT_H__
#define __CDOCUMENT_H__
///////////////////////////////////////////////////////////////////////////

#include "CObject.h"

///////////////////////////////////////////////////////////////////////////

class CDocument : public CCmdTarget
{
public:
	virtual BOOL OnNewDocument();
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	virtual BOOL OnSaveDocument(LPCTSTR lpszPathName);
	virtual void OnCloseDocument();
};

///////////////////////////////////////////////////////////////////////////
#endif//__CDOCUMENT_H__
