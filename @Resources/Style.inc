[Rainmeter]
Update=1000
BackgroundMode=2
;SolidColor=255,0,0,255
SolidColor=0,0,0,1

@include1=#@#Variables.inc

[Variables]
fontName="Accidental Presidency"
fontSizeMult=0.95
titleY=-2

barAlign=95
barWidth=80

valueAlign=(#barAlign#+#barWidth#+2)
tempAlign=(#barAlign#-5)
titleAlign=(#barAlign#+3)

[styleTitle]
;SolidColor=255,0,255,255
StringAlign=Right
FontColor=#colorText#
FontSize=(Floor(42*#fontSizeMult#))
X=#titleAlign#
Y=#titleY#
H=50

StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleValue]
;SolidColor=255,128,128,255
StringAlign=Right
FontColor=#colorText#
FontSize=(Floor(18*#fontSizeMult#))

X=#valueAlign#
Y=5

StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleTemp]
;SolidColor=255,128,128,255
StringAlign=Left
FontColor=#colorText#
FontSize=(Floor(18*#fontSizeMult#))

X=#tempAlign#
Y=5

StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleBlack]
StringAlign=Left
FontColor=#colorBlackText#
FontSize=(Floor(12*#fontSizeMult#))

X=#barAlign#
Y=30
H=16

StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleBar]
BarColor=#colorBar#
BarOrientation=HORIZONTAL
SolidColor=#colorBarBackground#
X=#barAlign#
Y=30
W=#barWidth#
H=16
