# Content
### HTML
```html
<!DOCTYPE html>
<html lang="en">

<head>
	<meta charset="UTF-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="widtkh=device-width, initial-scale=1.0">
	<link rel="stylesheet" href="file.css">
	<title>Crescent</title>
</head>

<body>
	<div class="main">
		<button id="youtube"> </button>
		<button id="netflix"></button>
		<button id="linkden"></button>
		<button id="instagram"></button>
		<button id="github"></button>
		<button id="twitter"></button>
	</div>
</body>

</html>
```
### CSS
```css
.body {
    min-width: 400px;
    min-height: 500px;
}

:root {
    --md: calc(70% / 6);
}

.main {
    color: rgb(255, 255, 255);
    margin-left: 20%;
    margin-top: 2%;
    width: 700px;
    height: 600px;
    background-color: grey;
    display: flex;
    flex-direction: row;
    justify-content: center;
    justify-content: space-evenly;
    align-items: center;
}

#youtube {
    height: 60%;
    width: var(--md);
    position: relative;
    background-color: darkgrey;
    background-image: url("youtube-removebg-preview.png");
    background-position: center;
    background-size: 40%;
    background-repeat: no-repeat;
    display: flex;
    justify-content: center;
    align-items: center;
    border:none;
    transition-duration: 1s;
}

#youtube:hover {
    background-image: url("youtube-removebg-preview.png");
    background-position: center;
    background-size: 70%;
    background-repeat: no-repeat;
    color: white;
    cursor: pointer;
    background-color: rgb(100, 0, 0);
    font-size: larger;
    font-weight: 700;
    width: 200px;
    display: flex;
    transition: 1s;
    border-radius: 5%;
}

#linkden {
    height: 60%;
    width: var(--md);
    position: relative;
    background-color: darkgrey;
    background-image: url("linkden.png");
    background-position: center;
    background-size: 40%;
    background-repeat: no-repeat;
    display: flex;
    justify-content: center;
    align-items: center;
    border:none;
    transition-duration: 1s;
}

#linkden:hover {
    background-image: url("linkden.png");
    background-position: center;
    background-size: 70%;
    background-repeat: no-repeat;
    color: white;
    cursor: pointer;
    background-color: rgb(0, 53, 151);
    font-size: larger;
    font-weight: 700;
    width: 200px;
    display: flex;
    transition: 1s;
    border-radius: 5%;
}

#netflix{
    width: var(--md);
    height: 60%;
    position: relative;
    background-color: darkgrey;
    background-image: url("netflix-removebg-preview.png");
    background-position: center;
    background-size: 90%;
    background-repeat: no-repeat;
    display: flex;
    justify-content: center;
    align-items: center;
    border:none;
    transition-duration: 1s;
}

#netflix:hover {
    background-image: url("netflix-removebg-preview.png");
    background-position: center;
    background-size: 150%;
    background-repeat: no-repeat;
    color: white;
    cursor: pointer;
    background-color: rgb(241, 239, 239);
    font-size: larger;
    font-weight: 700;
    width: 200px;
    display: flex;
    transition-duration: 1s;
    border-radius: 5%;
}

#github{
    height: 60%;
    width: var(--md);
    position: relative;
    background-color: darkgrey;
    background-image: url("github-removebg-preview.png");
    background-position: center;
    background-size: 120%;
    background-repeat: no-repeat;
    display: flex;
    justify-content: center;
    align-items: center;
    border:none;
    transition-duration: 1s;
}

#github:hover {
    background-image: url("github-removebg-preview.png");
    background-position: center;
    background-size: 150%;
    background-repeat: no-repeat;
    color: white;
    cursor: pointer;
    background-color: rgb(37, 34, 34);
    font-size: larger;
    font-weight: 700;
    width: 200px;
    display: flex;
    transition: 1s;
    border-radius: 5%;
}

#twitter{
    height: 60%;
    width: var(--md);
    position: relative;
    background-color: darkgrey;
    background-image: url("tiwtter-removebg-preview.png");
    background-position: center;
    background-size: 40%;
    background-repeat: no-repeat;
    display: flex;
    justify-content: center;
    align-items: center;
    border:none;
    transition-duration: 1s;
}

#twitter:hover {
    background-image: url("tiwtter-removebg-preview.png");
    background-position: center;
    background-size: 70%;
    background-repeat: no-repeat;
    color: white;
    cursor: pointer;
    background-color: rgb(0, 107, 126);
    font-size: larger;
    font-weight: 700;
    width: 200px;
    display: flex;
    transition: 1s;
    border-radius: 5%;
}

#instagram {
    width: var(--md);
    height: 60%;
    position: relative;
    background-color: darkgrey;
    background-image: url("insta-removebg-preview.png");
    background-position: center;
    background-size: 70%;
    background-repeat: no-repeat;
    display: flex;
    justify-content: center;
    align-items: center;
    border:none;
    transition-duration: 1s;
}

#instagram:hover {
    background-image: url("insta-removebg-preview.png");
    background-position: center;
    background-size: 100%;
    background-repeat: no-repeat;
    color: white;
    cursor: pointer;
    background-color: rgb(148, 0, 74);
    font-size: larger;
    font-weight: 700;
    width: 200px;
    display: flex;
    transition-duration: 1s;
    border-radius: 5%;
}
```
