#include <iostream>
#include <limits.h>
using namespace std;

//Exemplul 1: Sa se calculeze suma a doua numere citite de la tastatura.

int a;
int b;


void SumaV1()

{

	cout << "Adunarea numerelor " << a << " si " << b << " este: " << a - b << endl;
}
void SumaV2()
{


	cout << "Suma este:" << a + b << endl; //afiseaza rezultatul operatiei
}
void SumaV3()

{
	cout << "Suma numerelor " << a << " si " << b << " este: " << a + b << endl;
}
void MicMare0() {

	if (a > 0) {
		cout << "numarul citit este mai mare decât 0" << endl;
	}
	if (a <= 0) {
		cout << "numarul citit nu este mai mare decât 0" << endl;
	}
}
// se declara variabilele n si s de tip intreg
// variabila n memoreaza numarul introdus de la tastatura
// variabila s memoreaza suma cifrelor impare ale lui n
int n, s;
void Impar()
{
	cout << "Introduceti numarul n: " << endl;
	// se citeste numarul n
	cin >> n;
	// se parcurg cifrele lui n
	while (n != 0)
	{
		if (n % 10 % 2 == 1) // se verifica daca cifra este impara
			s = s + n % 10; // se insumeaza pe rand cifrele impare ale lui n
		n = n / 10; // se taie pe rand cifrele lui n
	}
	// se afiseaza s (suma cifrelor impare ale lui n)
	cout << "Suma cifrelor impare ale lui n este: " << s << endl;
}
void PRODUS()
{
	cout << "Alege 2 numere. Te voi invata ceva nou!" << endl;

	cout << "PRODUSUL ESTE:" << a * b << endl; //afiseaza rezultatul operatiei
}

void FizzBuzz() {
	int N;
	cout << "Alege alt n, jocul s-a schimbat! (DIV2/DIV3/FIZZ/BUZZ/FIZZBUZZ)" << endl;
	cin >> N;
	if (N % 2 == 2 && N % 3 == 0)
	{
		cout << "fizzbuzz" << endl;

	}
	if (N % 2 == 0)
	{
		cout << "fizz" << endl;

	}
	if (N % 3 == 0)
	{
		cout << "buzz" << endl;
	}
}
void IfInlantuit() {
	int a, b;
	cout << "Alege 2 numere a si b!" << endl;
	cout << "a=" << endl;
	cin >> a;
	cout << "b=" << endl;
	cin >> b;
	if (a >= 0) {
		if (b >= 0) {
			cout << "Ambele numere citite sunt pozitive" << endl;
		}
		if (b < 0) {
			cout << "Primul numar citit este pozitiv, iar al doilea negativ" << endl;
		}
	}
	if (a < 0) {
		if (b < 0) {
			cout << "Ambele numere sunt negative" << endl;
		}
		if (b >= 0) {
			cout << "Primul numar citit este negativ, iar al doilea pozitiv" << endl;
		}
	}

}
void ParImpar() {
	int a;
	cout << " Alege alt a, jocul s-a schimbat!" << endl;
	cin >> a;
	if (a % 2 == 0) {
		cout << "Numarul citit este par" << endl;
	}
	if (a % 2 != 0) {
		cout << "Numarul citit este impar" << endl;
	}

}
void Crescator2()
{

	if (b < a)
	{
		cout << "B este mai mic ca A, pentru ca: " << b << " < " << a << endl;
	}
	else
	{
		cout << "A este mai mic ca B, pentru ca: " << a << " < " << b << endl;
	}


}
void SumaElemSirNnr()
{
	int i, n, a[10], suma;
	cout << "Acum voi vrea un alt n, pentru problema mea cu siruri" << endl;
	cout << "Cate numere sunt in sir? n=" << endl;
	cin >> n;
	suma = 0;
	cout << "Introduceti valoarea unui element" << " " << endl;
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=" << endl;
		cin >> a[i];
		suma = suma + a[i];
	}
	cout << "Suma celor " << n << " numere este: " << suma << endl;
}
//Vectori in C++

//Un vector este un sir de mai multe valori care au acelsi tip, componentele acestuia putand fi identificate prin numele vectorului urmat (intre paranteze drepte) de pozitia acestora in cadrul vectorului.

//Declaratia unui vector se realizeaza prin specificarea tipului componentelor vectorului, identificatorul vectorului urmat apoi de dimensiunea acestuia intre paranteze drepte:

	 //int a[5];       - declara un sir de 5 de numere intregi
	 //float f[10];   - declara un sir de 10 numere reale
	 //char c[20];  - declara un sir de 20 caractere alfanumerice
//Observatie: Primul element al vectorului are coordonata 0 (a[0]), al doilea are coordonata 1 (a[1]), s.a.m.d.:

//int a[5];
//Introducerea/afisarea componentelor unui vector sunt de regula operatii realizate cu ajutorul structurilor repetitive, in principal folosindu-se structura FOR:


void NumarSiValoareVector()
{
	int i, n, a[10];
	cout << "Acum voi vrea un alt n, pentru problema mea cu vectori" << endl;
	cout << "Cate numere sunt in sir? n=" << endl;
	cin >> n;
	cout << "Introduceti numarului valorii" << endl;
	cout << "Introduceti numarului valorii" << endl;
	cout << "Introduceti numarului valorii" << endl;
	for (i = 0; n > i; i++)
	{
		cin >> a[i];
		cout << "Numarul si valoarea vecorului este " << "a[" << i << "]=" << endl;
	}
}

void NumarSiValoareVectori2()
{
	int i, n;
	int a[5] = { 6,2,9,3,4 };
	cout << "Elementele sirului sunt urmatoarele:" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "a[" << i << "]=" << a[i] << endl;
	}
}
void SirNnrAfiseazaN()
{
	int i, n, a[50];
	cout << "Acum voi vrea un alt n, pentru problema mea cu vectori/siruri de N nr" << endl;
	cout << "Introducenti valoarea lui n:" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "a[" << i << "]=" << endl;
		cin >> a[i];
	}
	for (i = 1; i <= n; i++)
	{
		cout << a[i] << " " << endl;
	}
}
void SumaPrimilorNterm()
{
	int i, n, s, a[50];
	cout << "Acum voi vrea un alt n, pentru problema mea cu Suma Primilor N termeni" << endl;
	cout << "Introducenti valoarea lui n:" << endl;
	cin >> n;
	s = 0;
	for (i = 1; i <= n; i++)
	{
		cout << "a[" << i << "]=" << endl;
		cin >> a[i];
		s = s + a[i];
	}
	cout << "Suma celor " << n << " numere este:" << s << endl;

}
void SumaElemPozImpare()
{
	int i, n, s1 = 0, s2 = 0, a[50];
	cout << "Acum voi vrea un alt n, pentru problema mea cu Suma Elementelor Pozitiilor Impare" << endl;
	cout << "Introducenti valoarea lui n:";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "a[" << i << "]=" << endl;
		cin >> a[i];
		if (i % 2 != 0)
			s1 = s1 + a[i];
		else
			s2 = s2 + a[i];
	}
	cout << "Suma elementelor aflate pe pozitii impare este: s1= " << s1 << endl;
	cout << "Suma elementelor aflate pe pozitii pare este: s2= " << s2 << endl;

}
void div()
{
	int i, n, nr = 0, a[50], div;
	cout << "Acum voi vrea un alt n, pentru problema mea cu divizorul" << endl;
	cout << "Introducenti valoarea lui n:" << endl;
	cin >> n;
	cout << "Introducenti valoarea lui div:" << endl;
	cin >> div;
	for (i = 1; i <= n; i++)
	{
		cout << "a[" << i << "]=" << endl;
		cin >> a[i];
		if (a[i] % div == 0)
			nr++;
	}
	cout << "In sirul dat exista " << nr << " numere divizibile cu " << div << endl;

}
void intervalab()
{
	int i, n, j = 0, a, b, v[50], w[50];
	cout << "Acum voi vrea un alt n, pentru problema mea cu intervalul [a,b]" << endl;
	cout << "Cate elemente va avea sirul? n=" << endl;
	cin >> n;
	cout << "Introducenti valoarea lui a:" << endl;
	cin >> a;
	cout << "Introducenti valoarea lui b:" << endl;
	cin >> b;
	for (i = 1; i <= n; i++)
	{
		cout << "v[" << i << "]=" << endl;
		cin >> v[i];
		if (v[i] >= a && v[i] <= b)
		{
			j++;
			w[j] = v[i];
		}
	}

	cout << "Sirul contine " << j << " numere in intervalul [" << a << "," << b << "]" << endl;
	cout << "Numerele din sir continute in intervalul [" << a << "," << b << "] sunt urmatoarele: " << endl;
	for (i = 1; i <= j; i++)
		cout << w[i] << " " << endl;
}
void minmaxElem()
{
	int i, n, min = INT_MAX, max = INT_MIN, temp, v[50];
	cout << "Acum voi vrea un alt n, pentru problema mea cu minimul/maximul de elemente" << endl;
	cout << "Cate elemente va avea sirul? n=" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "v[" << i << "]=" << endl;
		cin >> v[i];
		if (v[i] >= max)
			max = v[i];
		if (v[i] <= min)
			min = v[i];
	}
	cout << "Numarul maxim din sir este: " << max << endl;
	cout << "Numarul minim din sir este: " << min << endl;

}

void CrescSauDescresc()
{
	int n, i, j, temp, a[50];
	cout << "Acum voi vrea un alt n, pentru problema mea cu crestere/descrestere" << endl;
	cout << "Cate elemente va avea sirul? n=" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "v[" << i << "]=" << endl;
		cin >> a[i];
	}
	for (i = 1; i < n; i++)
		for (j = i; j <= n; j++)
			if (a[j] <= a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	cout << "Elementele ordonate crescator sunt: " << endl;
	for (i = 1; i <= n; i++)
		cout << a[i] << " " << endl;
	cout << "Elementele ordonate descrescator sunt: " << endl;
	for (i = 1; i < n; i++)
		for (j = i; j <= n; j++)
			if (a[j] >= a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	for (i = 1; i <= n; i++)
		cout << a[i] << " " << endl;
}
//Matrici in C++
//Probleme rezolvate
//O matrice este o forma de organizare tabelara a unor elemente care au acelsi tip, componentele acesteia putand fi identificate printr-un nume urmat (intre paranteze drepte) de pozitia acestora in cadrul vectorului. Identificarea pozitiei in cadrul matricii se realizeaza prin specificarea liniei si coloanei pe care se afla elementul matricii.

//Declaratia unei matrici se realizeaza prin specificarea tipului componentelor matricii, identificatorul matricii urmat apoi de dimensiunea acesteia intre paranteze drepte (numarul de linii si de coloane ale matricii):

	 //int M[5][6];         - declara o matrice de 5 de linii si 6 coloane continand numere intregi
	 //float F[10][15];   - declara o matrice de 10 linii si 15 coloane continand numere reale
	 //char C[20][50];  - declara o matrice de 20 de linii si 50 de coloane continand caractere alfanumerice
//Observatie: Liniile si coloanele matricii se numara incapand de la valoarea 0. Astfel, prima line, respectiv prima coloana a matricii este linia/coloana 0, a doua linie/coloana este 1, s.a.m.d.:

//int M[5][6];

//Un caz particular de matrice este matricea patratica, caz in care numarul de linii este egal cu numarul de coloane:

//int M[5][5];

//Introducerea/afisarea componentelor unei matrici sunt de regula operatii realizate cu ajutorul structurilor repetitive, in principal folosindu-se structura FOR. Avand in vedere ca trebuie sa introducem/afisam niste valori aflate intr-o matrice, avand deci 2 dimensiuni, vom folosi cate o structura repetitiva pentru fiecare dimensiune: una reprezentand linia iar cealalta reprezentand coloana pe care se afla elementul matricii:

void sumaElementeMatrice()


{
	int columns, rows, matrice[10][10], suma;

	cout << "Introduceti numarul de linii: rows = " << endl;
	cin >> rows;
	cout << "Introduceti numarul de coloane: columns = " << endl;
	cin >> columns;

	suma = 0;

	cout << "Introduceti numerele:" << endl;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
		{
			cout << "matrice[" << i << "][" << j << "] = " << endl;
			cin >> matrice[i][j];
			suma = suma + matrice[i][j];
		}
	cout << "Suma elementelor matricii este: " << suma << endl;
}
void MatriceMxNv1()
{
	int i, j, m, n, M[10][10];
	cout << "Introduceti numarul de linii: m=" << endl;
	cin >> m;
	cout << "Introduceti numarul de coloane: n=" << endl;
	cin >> n;
	cout << "Introduceti numerele:" << endl;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			cout << "M[" << i << "][" << j << "]=" << endl;
			cin >> M[i][j];
		}
}
void MatriceMxNv2()
{
	int i, j;
	int M[2][3] = { 6,2,9,3,4,6 };
	cout << "Elementele sirului sunt urmatoarele:" << endl;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
		{
			cout << "M[" << i << "][" << j << "]=" << M[i][j] << endl;
		}
}

void pb1()
{
	int n, m, i, j, a[20][20];
	int nr, s = 0;
	cout << "m=" << endl;
	cin >> m;
	cout << "n=" << endl;
	cin >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "]=" << endl;
			cin >> a[i][j];
		}
	cout << "Matricea este:" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " " << endl;
		cout << endl;
	}
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			s = s + a[i][j];
	nr = m * n;
	cout << "Matricea contine:" << nr << " elemente" << endl;
	cout << "Suma elementelor matricii este:" << s << endl;
	cout << "Media aritmetica a acestora este: " << (float)s / nr << endl;

}
void     pb2()
{
	int n, i, j, a[20][20], s = 0;
	cout << "n=" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "]=" << endl;
			cin >> a[i][j];
		}
	cout << "Matricea este:" << endl;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " " << endl;
		cout << endl;
	}
	for (i = 1; i <= n; i++)
		s = s + a[i][i];

	cout << "Suma elementelor de pe diagonala principala a matricii este:" << s << endl;
}
void ProdElem2ndTrace()
{
	int n, i, j, a[20][20], p = 1;
	cout << "n=" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "]=" << endl;
			cin >> a[i][j];
		}
	cout << "Matricea este:" << endl;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " " << endl;
	}
	for (i = 1; i <= n; i++)
		p = p * a[i][n - i + 1];
	cout << "Produsul elementelor de pe secundara a matricii este:" << p << endl;
}

void SumaElemLin()
{
	int m, n, i, j, a[20][20], s;
	cout << "m=" << endl;
	cin >> m;
	cout << "n=" << endl;
	cin >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "]=" << endl;
			cin >> a[i][j];
		}
	cout << "Matricea este:" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " " << endl;
	}
	for (i = 1; i <= m; i++)
	{
		s = 0;
		for (j = 1; j <= n; j++)
			s = s + a[i][j];
		cout << "Suma elementelor de pe linia " << i << " este: " << s << endl;
	}
}
void SumaElemColoane()
{
	int m, n, i, j, a[20][20], s;
	cout << "m=" << endl;
	cin >> m;
	cout << "n=" << endl;
	cin >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "]=" << endl;
			cin >> a[i][j];
		}
	cout << "Matricea este:" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " " << endl;
	}
	for (j = 1; j <= n; j++)
	{
		s = 0;
		for (i = 1; i <= m; i++)
			s = s + a[i][j];
		cout << "Suma elementelor de pe coloana " << j << " este: " << s << endl;
	}
}
void Transpusa()
{
	int n, i, j, a[20][20], at[20][20];
	cout << "n=" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "]=" << endl;
			cin >> a[i][j];
		}
	cout << "Matricea este:" << endl;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " " << endl;
	}
	cout << "Matricea transpusa este:" << endl;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			at[i][j] = a[j][i];
			cout << at[i][j] << " " << endl;
		}

	}
}
void Suma2Matrici()
{
	int m, n, i, j, a[20][20], b[20][20], s[20][20];
	cout << "Introduceti dimensiunile celor 2 matrici" << endl;
	cout << "m=" << endl;
	cin >> m;
	cout << "n=" << endl;
	cin >> n;
	cout << "Introduceti prima matrice: " << endl;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "]=" << endl;
			cin >> a[i][j];
		}
	cout << "Introduceti a doua matrice: " << endl;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			cout << "b[" << i << "][" << j << "]=" << endl;
			cin >> b[i][j];
			s[i][j] = a[i][j] + b[i][j];
		}
	cout << "Prima matrice este:" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " " << endl;
		cout << endl;
	}
	cout << "A doua matrice este:" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " " << endl;

	}
	cout << "Suma celor doua matrici este:" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			cout << s[i][j] << " " << endl;
	}
}
void main()
{
	cout << "Te rog sa alegi doua numere si dupa ce le-ai tastat, apasa Enter, vom face o magie!" << endl;
	cin >> a >> b;
	//FUNCTII:
	SumaV1();
	SumaV2();
	SumaV3();
	MicMare0();
	Impar();
	//PROCEDURI:
	PRODUS();
	FizzBuzz();
	IfInlantuit();
	ParImpar();
	Crescator2();
	//SUBPROGRAME CU VECTORI:
	SumaElemSirNnr();
	NumarSiValoareVector();
	NumarSiValoareVectori2();
	SirNnrAfiseazaN();
	SumaPrimilorNterm();
	SumaElemPozImpare();
	div();
	intervalab();
	minmaxElem();
	CrescSauDescresc();
	//SUBPROGRAME CU MATRICI:
	sumaElementeMatrice();
	MatriceMxNv1();
	MatriceMxNv2();
	pb1();
	pb2();
	ProdElem2ndTrace();
	SumaElemLin();
	SumaElemColoane();
	Transpusa();
	Suma2Matrici();
}