#include <stdio.h>

int main() {
    float MT, VT, c, C, UVT, UMT, R, UP, UM, UV;
	printf("Unesite potrosnju tokom velike tarife u kWh: ");
    scanf ("%f", &VT);
	printf("Unesite potrosnju tokom male tarife u kWh: ");
	scanf ("%f", &MT);
	printf("Unesite cijenu tokom velike tarife u KM: ");
    scanf ("%f", &C);
	printf("Unesite cijenu tokom male tarife u KM: ");
	scanf ("%f", &c);
	
	UP=MT+VT; // ukupno kwh
	UVT=VT*C; //cijena velike potrosnje
	UMT=MT*c; //cijena male potrosnje
	UM=MT/UP; //udio male potrosnje
	UV=VT/UP; //udio velike potrosnje
	R=UVT+UMT; //puna cijena
	
	printf("\n Ukupna potrosnja je %.2f kWh .", UP);
	printf("\n Udio velike tarife u ukupnoj potrosnji je  %.g %% ." , UV); //Pitanje, kako ispisati % bez upozorenja?
	printf("\n Udio male tarife u ukupnoj potrosnji je  %.g %% .", UM);
	printf("\n Iznos racuna je  %.2f KM .", R);
	return 0;
	
}
