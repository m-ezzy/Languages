<?php
if (isset($_SESSION['userName'])) {
	session_start();
	//require('log_in.php');
	$q = "SELECT firstName from accounts WHERE userName = '" . $_SESSION['userName'] . "'";
	$rs = mysqli_query($conn,$q);
	$row = mysqli_fetch_array($rs);
	echo $row['firstName'];
}
?>

<html>
<head>
	<title>
		log in !
	</title>
</head>
<body>
	<form method="POST" action="logIn.php">
		<input type="text" name="userName">
		<input type="text" name="passWord">
		<input type="submit">
	</form>
</body>
</html>
