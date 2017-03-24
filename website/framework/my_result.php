<!DOCTYPE html>
<html>
<body>
	<?php $favcolor= $_POST ['favcolor'];
	switch($favcolor){
		case "blue":
			include("map1.html");
			break;
		case "green":
			include("map2.html");
			break;
		case "pink":
			include("map3.html");
			break;
		default:
			include("index.html");
			break;
	}
	?>

</body>
</html>
