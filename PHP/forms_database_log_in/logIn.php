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
$db = "db3";

// Create connection
$conn = new mysqli($servername, $username, $password, $db);

$un = $_POST["userName"];
$pw = $_POST["passWord"];

// Check connection
if ($conn->connect_error) {
	die("Connection failed: " . $conn->connect_error);
} else {
	echo "Connected successfully";
}

//sign up
//$sql = "INSERT INTO accounts (username,password) VALUES ('$user','$pass','$FirstName','$LastName')";

//log in
$query = "SELECT 'userName' FROM accounts WHERE 'userName' = '$un' AND 'passWord' = '$pw'";
$result = $conn->query($query);

if($result->num_rows == 1) {
    //$_SESSION['allowToWelcome'] = true;
    //header('Location:welcome.php');
	//setcookie("username",$username,time()+(86400),"/");
	$_SESSION['userName'] = $un;
	header('location: index.php');
	//die();
} else {
	$message = 'user does not exist';
}

/*
if ($conn->query($sql) === TRUE) {
	echo "New record created successfully ";
} else {
	echo "Error: " . $sql . "<br>" . $conn->error;
}
*/
$conn->close();

?>
