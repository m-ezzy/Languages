<?php
if(isset($_POST['t1'])) {
echo($_POST['t1'] . " " . "sd");
}
?>
<html>
<body>
	<form name="f1" method="POST" action="<?php echo $_SERVER['PHP_SELF']; ?>">
	<input type="text" name="t1" />
	<input type="text" name="t2" />
	<input type="submit" value="submit">
	</form>
</body>
</html>
