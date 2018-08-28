# Computational_Photgraphy_Problems

Problem 1: Image Averaging
Solve this in whichever language you know best.
This should take an hour.

I have two images, and I want to average them and normalise the result to produce a third image. That is, if I have two 2x2 images

[a b c d]

[e f g h]

The average is:

[(a+e)/2 (b+f)/2 (c+g)/2 (d+h)/2]

For example, the average of {2, 200, 100} and {50, 4, 100} is {26, 102, 100}.

You should then normalise the average, which means multiplying all pixels with a constant so that the brightest pixel is 255.

In the above example, the result should be {65, 255, 250}.

Keep in mind:
You can represent an image as an array of numbers. Don’t use any Image class. Single-dimensional will do, no need of two-dimensional.
We’re not interested in the averaged array, only the final result after normalisation.
The two input images, and the final result after normalisation, must be integers in the range 0 to 255.
Images are all greyscale.
Make your code performant.


Problem 2: Space Probe
We’re sending a probe to Mercury to record temperature, which varies from -100 to +150 degrees.

The probe takes 200 readings over the course a day, evenly spaced, and it records all of them in its memory.

The recorded data is sent back to earth once a day. Due to bandwidth limitations, only 100 bytes can be sent per day. Scientists will look at this data to answer questions like:

- What was the temperature at any time of day?
- What was the minimum and maximum temperature over the course of the day?

Scientists would like as accurate answers to these questions as possible.
In what format will you send the data? How many readings, how much space does each take, how are they encoded?
No code is required for this question.
