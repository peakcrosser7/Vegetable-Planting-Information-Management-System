﻿
// VegInfoSystemView.h: CVegInfoSystemView 类的接口
//

#pragma once


class CVegInfoSystemView : public CView
{
protected: // 仅从序列化创建
	CVegInfoSystemView() noexcept;
	DECLARE_DYNCREATE(CVegInfoSystemView)

// 特性
public:
	CVegInfoSystemDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CVegInfoSystemView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // VegInfoSystemView.cpp 中的调试版本
inline CVegInfoSystemDoc* CVegInfoSystemView::GetDocument() const
   { return reinterpret_cast<CVegInfoSystemDoc*>(m_pDocument); }
#endif

