xcopy /Q /C /H /R /Y Quartus\project\MKRVIDOR4000\output_files\MKRVIDOR4000.ttf C\
cd C
vidorcvt < MKRVIDOR4000.ttf > app.h
cd ..
timeout 4
xcopy /Q /C /H /R /Y C\app.h Sketch
cd Sketch
Sketch.ino