# Iot-project-Software-Engineering
# Soil Moisture, Temperature and Humidity Monitoring System

# Problem Statement
The conventional garden does not have a monitoring system to monitor the temperature, humidity and soil moisture of the garden. With implementation of sensors and IoT, we can get real time data of the temperature, humidity and soil moisture in the garden. 

# Design Statement
	1. To determine the temperature of the surroundings in the garden.
	2. To determine the humidity of the garden.
	3. To determine the soil moisture value of the soil in the garden.


# System Architecture
![System Architecture-01](https://user-images.githubusercontent.com/117339094/209456203-f0957854-d7cf-4bfb-a63e-3a60616972a2.png)



# Sensor
The device we are using for this project is Esp32. 
The sensor we are using for this project is DHT22 sensor.
The sensor we are using for this project is soil moisture sensor

<image src= "https://user-images.githubusercontent.com/116787176/209455921-58ffacfa-d2da-48a0-9d04-6feccb0fc1f6.png" width = "500" /> <image src= "https://user-images.githubusercontent.com/116787176/209455926-69c73bcd-6f0f-4798-94a9-e7143b34c700.png" width = "500" />



The data transmission protocol we are using is *HTTPS* method.

![image](https://user-images.githubusercontent.com/116787176/209455936-1328bad4-dc77-42b5-97e5-b9f3059f2ccb.png)

# Database
We are using MySQL to create the relational database relationships. The tables we created are sensor, reading, technician and TechBackground. The relationships between the tables via primary key and foreign key can is shown below.

![software P5](https://user-images.githubusercontent.com/117338680/216806613-d0f3d05c-2308-42e5-9da6-9abe8f211f05.png)

# Cloud platform
for the cloud platform our group using pythonanywhere website.
below is the link of exmaple video on how to port our webapp of Django to the pythonanywhere.
https://drive.google.com/file/d/1463mHZoolt4EWgSwKD4wkapqGZmLdVN3/view?usp=share_link

# Dashboard	
![software P2](https://user-images.githubusercontent.com/117338680/211983076-59d77e4f-0446-4424-99f8-45201a23e759.png)

# Youtube Video
https://youtu.be/hzmCh2doquY










