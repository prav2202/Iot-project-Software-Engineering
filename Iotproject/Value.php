<?php

if(isset($_GET["Value1"])&isset($_GET["ID"])) {
   $Value1 = $_GET["Value1"]; // get temperature value from HTTP GET
	$ID = $_GET["ID"];
   $servername = "localhost";
   $username = "ESP32";
   $password = "esp32io.com";
   $database_name = "db_softwareproject";

   // Create MySQL connection fom PHP to MySQL server
   $connection = new mysqli($servername, $username, $password, $database_name);
   // Check connection
   if ($connection->connect_error) {
      die("MySQL connection failed: " . $connection->connect_error);
   }

   $sql = "INSERT INTO Reading (Value,Sensor_ID) VALUES ($Value1,$ID)";
 

   if ($connection->query($sql) === TRUE) {
      echo "New record created successfully";
   } else {
      echo "Error: " . $sql . " => " . $connection->error;
   }

   $connection->close();
} else {
   echo "Value is not set in the HTTP request";
}
?>
