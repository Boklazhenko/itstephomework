#pragma once

class cplx
{
	double _rl;
	double _img;

public:
	cplx();
	cplx(double rl, double img);
	cplx(const cplx& other);
	~cplx();
	double getRl() { return _rl; }
	double getImg() { return _img; }
	void setRl(double rl) { _rl = rl; }
	void setImg(double img) { _img = img; }
	void show();
	cplx operator+ (const cplx& var);
	cplx operator- (const cplx& var);
	cplx operator* (const cplx& var);
	cplx operator/ (const cplx& var);
	static int ctr;
	static int getCtr();
};


