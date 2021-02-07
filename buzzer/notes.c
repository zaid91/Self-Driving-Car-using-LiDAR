#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define BUZZ 0

void C0(float i)
{
	i = i * 16.35;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(30581.04);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(30391.04);
	}
}
 
void C0D0(float i)
{
	i = i * 17.32;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(28868.36);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(28678.36);
	}
}

void D0(float i)
{
	i = i * 18.35;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(27247.96);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(27057.96);
	}
}
 
void D0E0(float i)
{
	i = i * 19.45;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(25706.94);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(25516.94);
	}
}
void E0(float i)
{
	i = i * 20.60;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(24271.84);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(24081.84);
	}
}
 
void F0(float i)
{
	i = i * 21.83;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(22904.26);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(22714.26);
	}
}

void F0G0(float i)
{
	i = i * 23.12;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(21626.3);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(21436.3);
	}
}
 
void G0(float i)
{
	i = i * 24.50;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(20408.16);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(20218.16);
	}
}

void G0A0(float i)
{
	i = i * 25.96;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(19260.4);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(19070.4);
	}
}
 
void A0(float i)
{
	i = i * 27.50;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(18181.82);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(17991.82);
	}
}
 
void A0B0(float i)
{
	i = i * 29.14;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(17158.54);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(16968.54);
	}
}
 
void B0(float i)
{
	i = i * 30.87;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(16196.96);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(16006.96);
	}
}

void C1(float i)
{
	i = i * 32.70;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(15290.52);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(15100.52);
	}
}

void C1D1(float i)
{
	i = i * 34.65;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(14430.01);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(14240.01);
	}
}

void D1(float i)
{
	i = i * 36.71;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(13620.27);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(13430.27);
	}
}
 
void D1E1(float i)
{
	i = i * 38.89;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(12856.78);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(12666.78);
	}
}
void E1(float i)
{
	i = i * 41.20;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(12135.92);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(11945.92);
	}
}
 
void F1(float i)
{
	i = i * 43.65;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(11454.75);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(11264.752);
	}
}

void F1G1(float i)
{
	i = i * 46.25;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(10810.81);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(10620.81);
	}
}
 
void G1(float i)
{
	i = i * 49;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(10204.08);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(10014.08);
	}
}

void G1A1(float i)
{
	i = i * 51.91;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(9632.06);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(9442.06);
	}
}
 
void A1(float i)
{
	i = i * 55;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(9090.91);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(8900.91);
	}
}
 
void A1B1(float i)
{
	i = i * 58.27;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(8580.75);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(8390.75);
	}
}
 
void B1(float i)
{
	i = i * 61.74;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(8098.48);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(7908.48);
	}
}

void C2(float i)
{
	i = i * 65.41;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(7644.1);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(7454.1);
	}
}
 
void C2D2(float i)
{
	i = i * 69.30;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(7215.01);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(7025.1);
	}
}

void D2(float i)
{
	i = i * 73.42;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(6810.13);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(6620.13);
	}
}
 
void D2E2(float i)
{
	i = i * 77.78;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(6428.39);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(6238.39);
	}
}
void E2(float i)
{
	i = i * 82.41;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(6067.23);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(5877.23);
	}
}
 
void F2(float i)
{
	i = i * 87.31;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(5726.72);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(5536.72);
	}
}

void F2G2(float i)
{
	i = i * 92.50;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(5405.41);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(5215.41);
	}
}
 
void G2(float i)
{
	i = i * 98;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(5102.04);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(4912.04);
	}
}

void G2A2(float i)
{
	i = i * 103.83;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(4815.56);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(4625.56);
	}
}
 
void A2(float i)
{
	i = i * 110;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(4545.46);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(4355.46);
	}
}
 
void A2B2(float i)
{
	i = i * 116.54;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(4290.37);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(4100.37);
	}
}
 
void B2(float i)
{
	i = i * 123.47;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(4049.57);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(3859.57);
	}
}
void C3(float i)
{
	i = i * 130.81;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(3822.34);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(3632.34);
	}
}
 
void C3D3(float i)
{
	i = i * 138.59;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(3607.76);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(3417.76);
	}
}

void D3(float i)
{
	i = i * 146.83;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(3405.3);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(3215.3);
	}
}
 
void D3E3(float i)
{
	i = i * 155.56;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(3214.19);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(3024.19);
	}
}
void E3(float i)
{
	i = i * 164.81;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(3033.8);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(2843.8);
	}
}
 
void F3(float i)
{
	i = i * 174.61;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(2863.52);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(2673.52);
	}
}

void F3G3(float i)
{
	i = i * 185;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(2702.7);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(2512.7);
	}
}
 
void G3(float i)
{
	i = i * 196;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(2551.02);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(2361.02);
	}
}

void G3A3(float i)
{
	i = i * 207.65;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(2407.9);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(2217.9);
	}
}
 
void A3(float i)
{
	i = i * 220;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(2272.73);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(2082.73);
	}
}
 
void A3B3(float i)
{
	i = i * 233.08;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(2145.19);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1955.19);
	}
}
 
void B3(float i)
{
	i = i * 246.94;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(2024.78);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1834.78);
	}
}
void C4(float i)
{
	i = i * 261.63;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1911.1);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1721.1);
	}
}
 
void C4D4(float i)
{
	i = i * 277.18;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1803.88);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1613.88);
	}
}

void D4(float i)
{
	i = i * 293.66;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1702.65);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1512.65);
	}
}
 
void D4E4(float i)
{
	i = i * 311.13;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1607.05);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1417.05);
	}
}
void E4(float i)
{
	i = i * 329.63;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1516.85);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1326.85);
	}
}
 
void F4(float i)
{
	i = i * 349.23;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1431.72);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1241.72);
	}
}

void F4G4(float i)
{
	i = i * 369.99;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1351.39);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1161.39);
	}
}
 
void G4(float i)
{
	i = i * 392;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1275.51);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1085.51);
	}
}

void G4A4(float i)
{
	i = i * 415.30;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1203.95);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(1013.95);
	}
}
 
void A4(float i)
{
	i = i * 440;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1136.36);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(946.36);
	}
}
 
void A4B4(float i)
{
	i = i * 466.16;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1072.59);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(882.59);
	}
}
 
void B4(float i)
{
	i = i * 493.88;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(1012.39);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(822.39);
	}
}
/*
void C0(float i)
{
	i = i * 16.35;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(30581.04);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(30391.04);
	}
}
 
void C0D0(float i)
{
	i = i * 17.32;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(28868.36);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(28678.36);
	}
}

void D0(float i)
{
	i = i * 18.35;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(27247.96);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(27057.96);
	}
}
 
void D0E0(float i)
{
	i = i * 19.45;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(25706.94);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(25516.94);
	}
}
void E0(float i)
{
	i = i * 20.60;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(24271.84);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(24081.84);
	}
}
 
void F0(float i)
{
	i = i * 21.83;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(22904.26);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(22714.26);
	}
}

void F0G0(float i)
{
	i = i * 23.12;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(21626.3);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(21436.3);
	}
}
 
void G0(float i)
{
	i = i * 24.50;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(20408.16);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(20218.16);
	}
}

void G0A0(float i)
{
	i = i * 25.96;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(19260.4);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(19070.4);
	}
}
 
void A0(float i)
{
	i = i * 27.50;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(18181.82);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(17991.82);
	}
}
 
void A0B0(float i)
{
	i = i * 29.14;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(17158.54);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(16968.54);
	}
}
 
void B0(float i)
{
	i = i * 30.87;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(16196.96);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(16006.96);
	}
}
void C0(float i)
{
	i = i * 16.35;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(30581.04);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(30391.04);
	}
}
 
void C0D0(float i)
{
	i = i * 17.32;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(28868.36);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(28678.36);
	}
}

void D0(float i)
{
	i = i * 18.35;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(27247.96);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(27057.96);
	}
}
 
void D0E0(float i)
{
	i = i * 19.45;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(25706.94);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(25516.94);
	}
}
void E0(float i)
{
	i = i * 20.60;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(24271.84);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(24081.84);
	}
}
 
void F0(float i)
{
	i = i * 21.83;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(22904.26);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(22714.26);
	}
}

void F0G0(float i)
{
	i = i * 23.12;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(21626.3);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(21436.3);
	}
}
 
void G0(float i)
{
	i = i * 24.50;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(20408.16);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(20218.16);
	}
}

void G0A0(float i)
{
	i = i * 25.96;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(19260.4);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(19070.4);
	}
}
 
void A0(float i)
{
	i = i * 27.50;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(18181.82);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(17991.82);
	}
}
 
void A0B0(float i)
{
	i = i * 29.14;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(17158.54);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(16968.54);
	}
}
 
void B0(float i)
{
	i = i * 30.87;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(16196.96);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(16006.96);
	}
}
void C0(float i)
{
	i = i * 16.35;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(30581.04);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(30391.04);
	}
}
 
void C0D0(float i)
{
	i = i * 17.32;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(28868.36);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(28678.36);
	}
}

void D0(float i)
{
	i = i * 18.35;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(27247.96);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(27057.96);
	}
}
 
void D0E0(float i)
{
	i = i * 19.45;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(25706.94);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(25516.94);
	}
}
void E0(float i)
{
	i = i * 20.60;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(24271.84);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(24081.84);
	}
}
 
void F0(float i)
{
	i = i * 21.83;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(22904.26);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(22714.26);
	}
}

void F0G0(float i)
{
	i = i * 23.12;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(21626.3);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(21436.3);
	}
}
 
void G0(float i)
{
	i = i * 24.50;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(20408.16);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(20218.16);
	}
}

void G0A0(float i)
{
	i = i * 25.96;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(19260.4);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(19070.4);
	}
}
 
void A0(float i)
{
	i = i * 27.50;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(18181.82);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(17991.82);
	}
}
 
void A0B0(float i)
{
	i = i * 29.14;
	
	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(17158.54);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(16968.54);
	}
}
 
void B0(float i)
{
	i = i * 30.87;

	for(int n = 0; n < (int)i; n++)
	{
        	digitalWrite(BUZZ, HIGH);
        	delayMicroseconds(16196.96);
        	digitalWrite(BUZZ, LOW);
        	delayMicroseconds(16006.96);
	}
}*/
