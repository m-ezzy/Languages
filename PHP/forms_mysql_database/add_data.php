<?php
/*
$servername = "sql302.epizy.com";
$username = "epiz_28162099";
$password = "jBwVaUaBK0SKK";
$db = "epiz_28162099_users";
*/

$servername = "localhost";
$username = "root";
$password = "";
$db = "db2";

// Create connection
$conn = new mysqli($servername, $username, $password, $db);

$name = $_POST["username"];
$pass = $_POST["password"];
$email = $_POST["email"];
$mobile = $_POST["mobile"];

// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
echo "Connected successfully";

$sql = "INSERT INTO user_info (username,password,email,mobile) VALUES ('$name','$pass','$email','$mobile')";

if ($conn->query($sql) === TRUE) {
	echo "New record created successfully";
} else {
	echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();

?>
