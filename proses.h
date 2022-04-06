using namespace std;

class Proses {
	public : 
	void cetak(){
		cout<< "Anda sebagai proses \n";
	}

	void getData(){
		ambil_data.open("api_data.txt");
		bool ayam_geprek = true;
		while(!ambil_data.eof()){
			if(ayam_geprek){
				ambil_data>>bnyk_aymPr;
				ayam_geprek = false;
			}
			else{
				ambil_data >> bnyk_aymGr;
			}
			else{
				ambil_data >> bnyk_udgGr;
			}
			else{
				ambil_data >> bnyk_cumGr;
			}
			else{
				ambil_data >> bnyk_aymBr;
			}
		}
		ambil_data.close();
	}
	void toFile(){
		int total = (hrg_aymPr * bnyk_aymPr)+(hrg_aymGr*bnyk_aymGr)+(hrg_udgGr*bnyk_udgGr)+(hrg_cumGr*bnyk_cumGr)+(hrg_aymBr*bnyk_aymBr);
		float batas = 50000;
		float t2 = float(total);
		float diskon = t2 * 0.15;

		if (total >= batas)
			t2 = t2 - diskon;


		tulis_data.open("api_data.txt");
		tulis_data << total << endl;
		tulis_data << diskon << endl;
		tulis_data << t2 << endl;
		tulis_data << bnyk_aymPr << endl;
		tulis_data << bnyk_aymGr << endl;
		tulis_data << bnyk_udgGr << endl;
		tulis_data << bnyk_cumGr << endl;
		tulis_data << bnyk_aymBr;
		tulis_data.close();
	}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_aymPr;
		int bnyk_aymGr;
		int bnyk_udgGr;
		int bnyk_cumGr;
		int bnyk_aymBr;
		int hrg_aymPr = 21000;
		int hrg_aymGr = 17000;
		int hrg_udgGr = 19000;
		int hrg_cumGr = 20000;
		int hrg_aymBr = 25000;
};
