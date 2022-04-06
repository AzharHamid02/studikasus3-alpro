using namespace std;

class input {
	public : 
	int cetak(){
		cout<< "STRUK PEMBELIAN \n";
		cout<< "Yang dibeli : \n";
		cout<< "Ayam Geprek  -> "<< data_file[3]<<endl;
		cout<< "Ayam Goreng  -> "<< data_file[4]<<endl;
		cout<< "Udang Goreng -> "<< data_file[5]<<endl;
		cout<< "Cumi Goreng  -> "<< data_file[6]<<endl;
		cout<< "Ayam Bakar   -> "<< data_file[7]<<endl;
		cout<< "Harga total Rp.  " << data_file[0]<<endl;
		cout<< "Diskon		Rp.  " << data_file[1]<<endl;
		cout<< "Harga Bayar	Rp.  " << data_file[2]<<endl;
	}

	void getData(){
		ambil_data.open("api_data.txt");
		while(!ambil_data.eof()){
			ambil_data >> data_file[index];
			index += 1;
		}
		ambil_data.close();
	}

	private :
		ifstream ambil_data;
		int bnyk_aymPr;
		int bnyk_aymGr;
		int bnyk_udgGr;
		int bnyk_cumGr;
		int bnyk_aymBr;
};
