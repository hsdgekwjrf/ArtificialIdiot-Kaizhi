struct model{
	double *i[10];
	double f[10] = {0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0};
	double *o;
	double fo = 1.0;
	void r1(){
		*o = fo * (*i[1] * f[1] + *i[2] * f[2] + *i[3] * f[3] + *i[4] * f[4] + *i[5] * f[5] + *i[6] * f[6] + *i[7] * f[7] + *i[8] * f[8] + *i[9] * f[9]);
	}
	void set_f_i(double n,int num){
		f[num] = n;
	}
	void set_i(double *n,int num){
		i[num] = n;
	}
	void set_f(double n){
		fo = n;
	}
	void set_o(double *n){
		o = n;
	}
};