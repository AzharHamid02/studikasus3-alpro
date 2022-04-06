using namespace std;

class input {
	public : 
	void cetak(){
		cout<< "Aplikasi Penjualan Ayam \n";
		cout<< "Menu yang tersedia : ";
		cout<< "1) Ayam Geprek Rp. 21000 \n";
		cout<< "2) Ayam Goreng Rp. 17000 \n";
		cout<< "3) Udang Goreng Rp. 19000 \n";
		cout<< "4) Cumi Goreng Rp. 20000 \n";
		cout<< "5) Ayam Bakar Rp. 25000 \n";
	}

	void toFile(){
		tulis_data.open("api_data.txt");
		tulis_data << bnyk_aymPr <<endl;
		tulis_data << bnyk_aymGr <<endl;
		tulis_data << bnyk_udgGr <<endl;
		tulis_data << bnyk_cumGr <<endl;
		tulis_data << bnyk_aymBr;
		tulis_data.close();
	}
	
	private :
		ofstream tulis_data;
		int bnyk_aymPr, bnyk_aymGr, bnyk_udgGr, bnyk_cumGr, bnyk_aymBr;
};
