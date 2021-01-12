# ImageProcessing
Rotate Image by Specified Angle


# AUTHOR : Abhishek Dobliyal

### Project Description

This projects harnesses the power of OpenCV (an image processing library) to rotate an image by a
desired angle.


### Technologies Used

1) C++

2) OpenCV

3) Sublime Text (Code Editor)


### Installation and Dependencies

1) C++ Compiler (Tutorial available at https://www.youtube.com/watch?v=hSAY50OL_J4)

2) OpenCV for C++ (Tutorial available at https://youtu.be/M-VHaLHC4XI)


### Usage

1) Open up Terminal/ Powershell and navigate to the project's directory from within
   the Terminal/ Powershell

2) Compile the project using the command: 'g++ -o output.exe file_name.cpp'

3) Execute the compiled file using the command: 'output.exe'

4) The project should run fine (as long as you have all the dependencies installed)


### Functions Used

1) int main()   return 0; LOL ;)

2) .imread(/Path/of/image/file) -> Read the image file and converts it into a 'Mat' object.

3) .empty() -> Returns a boolean whether the image was successfully read or not.

4) .getRotationMatrix2D(Point2f, double, double) -> Calculates an affine matrix of 2D rotation.

5) .warpAffine(src, dst, rotated_img, Size) -> Applies Affine transformation to the image

6) .imshow("Window Name", "frame_to_display") -> Displays the image inside a window.

7) .waitKey(time_in_miliseconds) -> Keyboard binding function that waits for a specified amount of time for keyboard events.
