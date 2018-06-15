EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
EELAYER 25 0
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
L Conn_01x03_Female J?
U 1 1 5B22F025
P 7650 4350
F 0 "J?" V 7600 4600 50  0000 C CNN
F 1 "Conn_01x03_Female" V 7750 4350 50  0000 C CNN
F 2 "" H 7650 4350 50  0001 C CNN
F 3 "" H 7650 4350 50  0001 C CNN
	1    7650 4350
	0    -1   -1   0   
$EndComp
$Comp
L Conn_01x15_Female J?
U 1 1 5B22F12D
P 8150 5000
F 0 "J?" V 8150 4200 50  0000 C CNN
F 1 "Conn_01x15_Female" V 8200 5000 50  0000 C CNN
F 2 "" H 8150 5000 50  0001 C CNN
F 3 "" H 8150 5000 50  0001 C CNN
	1    8150 5000
	0    1    1    0   
$EndComp
$Comp
L Conn_01x15_Female J?
U 1 1 5B22F1D4
P 8150 5200
F 0 "J?" V 8150 6000 50  0000 C CNN
F 1 "Conn_01x15_Female" V 8200 5200 50  0000 C CNN
F 2 "" H 8150 5200 50  0001 C CNN
F 3 "" H 8150 5200 50  0001 C CNN
	1    8150 5200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7850 5400 7850 5700
Wire Wire Line
	7950 5400 7950 5700
Wire Wire Line
	8050 5400 8050 5700
Wire Wire Line
	8150 5400 8150 5700
Wire Wire Line
	8250 5400 8250 5700
Text Label 7850 5700 1    60   ~ 0
A1
Text Label 7950 5700 1    60   ~ 0
A2
Text Label 8050 5700 1    60   ~ 0
A3
Text Label 8150 5700 1    60   ~ 0
A4
Text Label 8250 5700 1    60   ~ 0
A5
$Comp
L POT RV?
U 1 1 5B22F5EE
P 7200 6300
F 0 "RV?" V 7025 6300 50  0000 C CNN
F 1 "POT 1" V 7100 6300 50  0000 C CNN
F 2 "" H 7200 6300 50  0001 C CNN
F 3 "" H 7200 6300 50  0001 C CNN
	1    7200 6300
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7350 6300 7400 6300
Wire Wire Line
	7400 6300 7400 6100
Text Label 7400 6250 1    60   ~ 0
GND
Wire Wire Line
	7200 6150 7200 5950
Wire Wire Line
	7200 5950 7400 5950
Wire Wire Line
	7050 6300 7050 6100
Text Label 7050 6200 1    60   ~ 0
5V
$Comp
L POT RV?
U 1 1 5B22FDF7
P 7700 6300
F 0 "RV?" V 7525 6300 50  0000 C CNN
F 1 "POT 2" V 7600 6300 50  0000 C CNN
F 2 "" H 7700 6300 50  0001 C CNN
F 3 "" H 7700 6300 50  0001 C CNN
	1    7700 6300
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7850 6300 7900 6300
Wire Wire Line
	7900 6300 7900 6100
Text Label 7900 6250 1    60   ~ 0
GND
Wire Wire Line
	7700 6150 7700 5950
Wire Wire Line
	7700 5950 7900 5950
Wire Wire Line
	7550 6300 7550 6100
Text Label 7550 6200 1    60   ~ 0
5V
$Comp
L POT RV?
U 1 1 5B22FE49
P 8200 6300
F 0 "RV?" V 8025 6300 50  0000 C CNN
F 1 "POT 3" V 8100 6300 50  0000 C CNN
F 2 "" H 8200 6300 50  0001 C CNN
F 3 "" H 8200 6300 50  0001 C CNN
	1    8200 6300
	0    -1   -1   0   
$EndComp
Wire Wire Line
	8350 6300 8400 6300
Wire Wire Line
	8400 6300 8400 6100
Text Label 8400 6250 1    60   ~ 0
GND
Wire Wire Line
	8200 6150 8200 5950
Wire Wire Line
	8200 5950 8400 5950
Wire Wire Line
	8050 6300 8050 6100
Text Label 8050 6200 1    60   ~ 0
5V
$Comp
L POT RV?
U 1 1 5B22FE92
P 8700 6300
F 0 "RV?" V 8525 6300 50  0000 C CNN
F 1 "POT 4" V 8600 6300 50  0000 C CNN
F 2 "" H 8700 6300 50  0001 C CNN
F 3 "" H 8700 6300 50  0001 C CNN
	1    8700 6300
	0    -1   -1   0   
$EndComp
Wire Wire Line
	8850 6300 8900 6300
Wire Wire Line
	8900 6300 8900 6100
Text Label 8900 6250 1    60   ~ 0
GND
Wire Wire Line
	8700 6150 8700 5950
Wire Wire Line
	8700 5950 8900 5950
Wire Wire Line
	8550 6300 8550 6100
Text Label 8550 6200 1    60   ~ 0
5V
$Comp
L POT RV?
U 1 1 5B22FEF8
P 9200 6300
F 0 "RV?" V 9025 6300 50  0000 C CNN
F 1 "POT 5" V 9100 6300 50  0000 C CNN
F 2 "" H 9200 6300 50  0001 C CNN
F 3 "" H 9200 6300 50  0001 C CNN
	1    9200 6300
	0    -1   -1   0   
$EndComp
Wire Wire Line
	9350 6300 9400 6300
Wire Wire Line
	9400 6300 9400 6100
Text Label 9400 6250 1    60   ~ 0
GND
Wire Wire Line
	9200 6150 9200 5950
Wire Wire Line
	9200 5950 9400 5950
Wire Wire Line
	9050 6300 9050 6100
Text Label 9050 6200 1    60   ~ 0
5V
$Comp
L Conn_01x02_Male J?
U 1 1 5B230263
P 8650 4350
F 0 "J?" V 8700 4150 50  0000 C CNN
F 1 "Conn_01x02_Male" V 8550 4350 50  0000 C CNN
F 2 "" H 8650 4350 50  0001 C CNN
F 3 "" H 8650 4350 50  0001 C CNN
	1    8650 4350
	0    1    1    0   
$EndComp
Wire Wire Line
	7650 4550 7650 4650
Wire Wire Line
	7650 4650 7950 4650
Text Label 7800 4650 0    60   ~ 0
5V
Wire Wire Line
	7550 4550 7550 4650
Wire Wire Line
	7550 4650 7250 4650
Text Label 7250 4650 0    60   ~ 0
DATA
Wire Wire Line
	7750 4550 8550 4550
Text Label 8050 4550 0    60   ~ 0
GND
Wire Wire Line
	8650 4550 9100 4550
Text Label 8800 4550 0    60   ~ 0
Battery
Text Label 7300 5950 0    60   ~ 0
A1
Text Label 7800 5950 0    60   ~ 0
A2
Text Label 8300 5950 0    60   ~ 0
A3
Text Label 8800 5950 0    60   ~ 0
A4
Text Label 9300 5950 0    60   ~ 0
A5
Wire Wire Line
	8850 5400 8850 5450
Wire Wire Line
	8850 5450 9200 5450
Wire Wire Line
	8750 5400 8750 5600
Wire Wire Line
	8750 5600 9050 5600
Wire Wire Line
	8550 5400 8550 5700
Wire Wire Line
	8550 5700 8750 5700
Text Label 8900 5450 0    60   ~ 0
Battery
Text Label 8850 5600 0    60   ~ 0
GND
Text Label 8600 5700 0    60   ~ 0
5V
$EndSCHEMATC
