EESchema Schematic File Version 4
LIBS:lcfs-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Low Cost Flex Sensor"
Date "2018-06-14"
Rev "v0.1.9"
Comp "Laboratório de Prototipagem, Robótica e Otimização"
Comment1 "Autor: Wederson M. Silva"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L lcfs-rescue:Conn_01x03_Female J4
U 1 1 5B22F025
P 9950 3700
F 0 "J4" V 9900 3500 50  0000 C CNN
F 1 "Pin_1x3_Transmissor" V 9900 4250 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x03_Pitch2.54mm" H 9950 3700 50  0001 C CNN
F 3 "" H 9950 3700 50  0001 C CNN
	1    9950 3700
	0    -1   -1   0   
$EndComp
$Comp
L lcfs-rescue:POT RV1
U 1 1 5B22F5EE
P 7900 6100
F 0 "RV1" V 7900 6100 50  0000 C CNN
F 1 "POT 1" V 7800 6100 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x03_Pitch2.54mm" H 7900 6100 50  0001 C CNN
F 3 "" H 7900 6100 50  0001 C CNN
	1    7900 6100
	0    -1   -1   0   
$EndComp
Text Label 8100 6050 1    60   ~ 0
GND
Text Label 7750 6000 1    60   ~ 0
5V
$Comp
L lcfs-rescue:POT RV2
U 1 1 5B22FDF7
P 8400 6100
F 0 "RV2" V 8400 6100 50  0000 C CNN
F 1 "POT 2" V 8300 6100 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x03_Pitch2.54mm" H 8400 6100 50  0001 C CNN
F 3 "" H 8400 6100 50  0001 C CNN
	1    8400 6100
	0    -1   -1   0   
$EndComp
Text Label 8600 6050 1    60   ~ 0
GND
Text Label 8250 6000 1    60   ~ 0
5V
$Comp
L lcfs-rescue:POT RV3
U 1 1 5B22FE49
P 8900 6100
F 0 "RV3" V 8900 6100 50  0000 C CNN
F 1 "POT 3" V 8800 6100 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x03_Pitch2.54mm" H 8900 6100 50  0001 C CNN
F 3 "" H 8900 6100 50  0001 C CNN
	1    8900 6100
	0    -1   -1   0   
$EndComp
Text Label 9100 6050 1    60   ~ 0
GND
Text Label 8750 6000 1    60   ~ 0
5V
$Comp
L lcfs-rescue:POT RV4
U 1 1 5B22FE92
P 9400 6100
F 0 "RV4" V 9400 6100 50  0000 C CNN
F 1 "POT 4" V 9300 6100 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x03_Pitch2.54mm" H 9400 6100 50  0001 C CNN
F 3 "" H 9400 6100 50  0001 C CNN
	1    9400 6100
	0    -1   -1   0   
$EndComp
Text Label 9600 6050 1    60   ~ 0
GND
Text Label 9250 6000 1    60   ~ 0
5V
$Comp
L lcfs-rescue:POT RV5
U 1 1 5B22FEF8
P 9900 6100
F 0 "RV5" V 9900 6100 50  0000 C CNN
F 1 "POT 5" V 9800 6100 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x03_Pitch2.54mm" H 9900 6100 50  0001 C CNN
F 3 "" H 9900 6100 50  0001 C CNN
	1    9900 6100
	0    -1   -1   0   
$EndComp
Text Label 10100 6050 1    60   ~ 0
GND
Text Label 9750 6000 1    60   ~ 0
5V
$Comp
L lcfs-rescue:Conn_01x02_Male J3
U 1 1 5B230263
P 8500 3750
F 0 "J3" V 8550 3850 50  0000 C CNN
F 1 "Pin_1x2_Bateria" V 8550 3300 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x02_Pitch2.54mm" H 8500 3750 50  0001 C CNN
F 3 "" H 8500 3750 50  0001 C CNN
	1    8500 3750
	0    1    1    0   
$EndComp
$Comp
L arduino_nano:Arduino_Nano A1
U 1 1 5B24786A
P 9050 4800
F 0 "A1" V 9000 5400 60  0000 C CNN
F 1 "Arduino_Nano" V 9000 4650 60  0000 C CNN
F 2 "Modules:Arduino_Nano" H 9050 4800 60  0001 C CNN
F 3 "" H 9050 4800 60  0000 C CNN
	1    9050 4800
	0    -1   1    0   
$EndComp
Text Label 7750 5600 0    60   ~ 0
DATA
Text Label 10050 4150 0    60   ~ 0
GND
Text Label 9600 3950 0    60   ~ 0
DATA
Wire Wire Line
	8050 6100 8100 6100
Wire Wire Line
	8100 6100 8100 5900
Wire Wire Line
	7750 6100 7750 5900
Wire Wire Line
	8550 6100 8600 6100
Wire Wire Line
	8600 6100 8600 5900
Wire Wire Line
	8250 6100 8250 5900
Wire Wire Line
	9050 6100 9100 6100
Wire Wire Line
	9100 6100 9100 5900
Wire Wire Line
	8750 6100 8750 5900
Wire Wire Line
	9550 6100 9600 6100
Wire Wire Line
	9600 6100 9600 5900
Wire Wire Line
	9250 6100 9250 5900
Wire Wire Line
	10050 6100 10100 6100
Wire Wire Line
	10100 6100 10100 5900
Wire Wire Line
	9750 6100 9750 5900
Wire Wire Line
	9900 5950 9900 5500
Wire Wire Line
	9400 5950 9400 5800
Wire Wire Line
	9400 5800 9800 5800
Wire Wire Line
	9800 5800 9800 5500
Wire Wire Line
	8900 5950 8900 5750
Wire Wire Line
	8900 5750 9700 5750
Wire Wire Line
	9700 5750 9700 5500
Wire Wire Line
	8400 5950 8400 5700
Wire Wire Line
	8400 5700 9600 5700
Wire Wire Line
	9600 5700 9600 5500
Wire Wire Line
	7900 5950 7900 5650
Wire Wire Line
	7900 5650 9500 5650
Wire Wire Line
	9500 5650 9500 5500
Wire Wire Line
	8200 5500 8200 5600
Wire Wire Line
	8200 5600 7750 5600
Wire Wire Line
	10050 3900 10050 4150
Wire Wire Line
	9950 4150 10050 4150
Connection ~ 10050 4150
Wire Wire Line
	9850 3950 9600 3950
Wire Wire Line
	8500 3950 8750 3950
Text Label 8550 3950 0    60   ~ 0
GND
NoConn ~ 10100 5500
NoConn ~ 10000 5500
NoConn ~ 9400 5500
NoConn ~ 9300 5500
NoConn ~ 9200 5500
NoConn ~ 9100 5500
NoConn ~ 9000 5500
NoConn ~ 8900 5500
NoConn ~ 8800 5500
NoConn ~ 8700 5500
NoConn ~ 8600 5500
NoConn ~ 8500 5500
NoConn ~ 8400 5500
NoConn ~ 8300 5500
NoConn ~ 8100 5500
NoConn ~ 8000 5500
NoConn ~ 9200 4150
NoConn ~ 8750 4150
NoConn ~ 8600 4150
Wire Wire Line
	8500 4150 8500 4050
Wire Wire Line
	8500 4050 9950 4050
Wire Wire Line
	9950 4050 9950 3900
Text Label 9450 4050 0    60   ~ 0
5V
Wire Wire Line
	8400 3950 8400 4150
Text Label 8400 4150 1    60   ~ 0
7.2V
Wire Wire Line
	9850 3900 9850 3950
$EndSCHEMATC
