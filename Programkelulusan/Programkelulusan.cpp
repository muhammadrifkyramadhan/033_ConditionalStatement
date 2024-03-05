// Program Kelulusan
// Buatlah program dimana pengguna akan memasukn nilai Matematika dan Bahasa
// Jika nilai rerata lebih dari 60 atau Matematika lebih dari 70 maka ditanyakan lulus
// Selain daripada itu tidak lulus

#include <iostream>
using namespace std;

int main()
{
	int NilaiMTK, NilaiBahasa, NilaiFisika;
	string status, status2;
	float Rerata;

	cout << "Nilai Matematika" << endl;
	cin >> NilaiMTK;
	cout << "Nilai Bahasa" << endl;
	cin >> NilaiBahasa;
	cout << "Nilai Fisika" << endl;
	cin >> NilaiFisika;

	Rerata = (NilaiMTK + NilaiBahasa) / 2;

	if (NilaiMTK > 70 || Rerata > 60)
	{
		status = "Lulus";
		if (NilaiFisika >= 90)
			status2 = "Lulusan Terbaik";
	}
	else
	{
		status = "Tidak Lulus";
	}
	cout << "Nilai Matematika: " << NilaiMTK << endl;
	cout << "Nilai Bahasa" << NilaiBahasa << endl;
	cout << "Nilai Fisika" << NilaiFisika << endl;
	cout << "Status Kelulusan: " << status << endl;
	cout << "Status Mahasiswa: " << status2;
}