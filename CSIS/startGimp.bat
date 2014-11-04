set DefaultGimp = C:\Program Files\GIMP 2\bin\
if not exist %DefaultGimp%gimp goto ERROR
set PATH =;%PATH%;%DefaultGimp%;
gimp ImageOutput3.ppm
:ERROR 
echo Something happened, exiting!
pause
cd