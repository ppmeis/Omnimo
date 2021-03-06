[Rainmeter]
Author=Xyrfo and fediaFedia
Update=-1
MouseActionCursor=0
MouseOverAction=!Execute [!ShowMeter btn1][!ShowMeter MeterClose][!ShowMeter size][!Redraw]
MouseLeaveAction=!Execute [!HideMeter btn1][!HideMeter MeterClose][!HideMeter size][!Redraw]
MiddleMouseUpAction=!DeactivateConfig
Blur=#globalblurenable#
BlurRegion=#blurtype#,5,5,(#Height#+5),(#Height#+5),#blurcornerradius#

[Variables]
@include=#@#Common\Variables\UserVariables.inc
@include2=#@#Common\color\color.inc
@include3=size.inc
@include4=UserVariables.inc
Name=Name
Image=
Action=Action
FixedIconSize=0
SplitString=0

[shadow]
ScaleMargins=10,10,10,10
Meter=Image
ImageName=#@#Common\Borders\#shadow#.png
X=0
Y=0
W=(#Height#+10)
H=(#Height#+10)
ImageTint=#bordercolor#
Greyscale=1

[bg]
Meter=Image
ImageName=#Imagedir#\btn3.png
X=5
Y=5
W=#Height#
H=#Height#
ImageTint=#colorskin#,#opacity#
Greyscale=1

[btn1]
Meter=Image
ImageName=#Imagedir#\btn3.png
X=5
Y=5
W=#Height#
H=#Height#
Hidden=1
ImageTint=#colorskin2#,#opacity2#
Greyscale=1

[overlay]
Meter=Image
ImageName=#@#Common\Overlay\#overlay#.png
X=5
Y=5
W=#Height#
H=#Height#

[icon]
Meter=Image
ImageName=#Image#
X=(#Height#/3.6)
Y=(#Height#/3.48)
W=(#Height#/2)
H=(#Height#/2)
AntiAlias=1
LeftMouseUpAction=!Execute ["#Action#"]

[text]
Meter=String
MeterStyle=DriveText
X=(5+(#Height#/#xposition#))
Y=((#Height#/(#yposition#))+5)
FontFace=#fonttype#
FontColor=#textcolor2#,255
FontSize=#defaultfontsize#
StringStyle=NORMAL
StringAlign=#align#
AntiAlias=1
Text=#Name#

[MeterClose]
Meter=Button
ButtonImage=#@#Common\Panel\Close.png
X=(#Height#-10)
Y=5
ButtonCommand=!DeactivateConfig
Hidden=1

[size]
Meter=Button
ButtonImage=#@#Common\Panel\size.png
X=(#Height#-10)
Y=(#Height#-10)
ButtonCommand=!Execute ["#@#Common\Size\size.exe" single "#CURRENTCONFIG#" "#SETTINGSPATH#"]
Hidden=1