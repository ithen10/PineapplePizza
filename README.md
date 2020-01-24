# PineapplePizza
This project was carried out during HackEd 2020 at the University of Alberta in a 3-man team. Renamed to Pineapple Slayer at the end.

# Goal
The goal of this project was to create a mechanical arm to pick pineapple off of pizza. The mechanical arm moves using servo motors and is controlled by an Arduino Uno. Image processing of a pizza is carried out using a camera, OpenCV and Python. The image obtained is analyzed and the pineapples are singled out. The x-y coordinates of each pineapple is communicated tothe Arduino through serial communication. The arm moves accordingly and removes the pineapple. Hurray!

# Stretch Goals
3D print the arm chassis and use machine learning to obtain more accurate and versatile image processing.

# Successful completion?
Sadly, no.

# Progress
- Controlled the servo motors with the Arduino and designed an arm (using cardboard and plastic forks)
- Achieved image tracking and recognition using color detection

# Problems met
- Not having an initial design for an arm and the appropriate materials led to a shaky and flimsy arm. This arm did not allow for the full range of motion as it would fall apart after about 5 mins of constant motion. This also meant that its movements were not accurate as parts of the arm kept moving unexpectedly.
- Was unable to communicate between Python and the Arduino, which left us with an incomplete product.

# What we learned
- For a hackathon, one should prepare well in order to succeed. 
- This was our first endeavor into image processing and we learned many tools and methods that could be used. We went with the easiest (not the best) method of color detection due to the time limit. 
- That hackathons are really fun and everyone is really helpful. (Ian: This was my first time at a hackathon and I really regret not doing one sooner)

# Note
We will revisit this project again when we have some more free time. Fret not pineapple haters, your dreams of no pineapple on pizza will come true.
