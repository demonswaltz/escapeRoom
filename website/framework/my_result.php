<!DOCTYPE html>
<html>
<body>
	<?php $favcolor= $_POST ['favcolor'];
	switch($favcolor){
		case "red":
			include("map1.html");
			break
		case "blue":
			echo "Your favorite color is blue!";
			break
		default:
			echo "Do you even know what a good color is??"
			break
	}
	?>

</body>
</html>
