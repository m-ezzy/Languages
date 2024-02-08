var http = require('http');
var url = require('url');
var fs = require('fs');

var server = http.createServer(function(req, res) {
	var path = url.parse(req.url).pathname;

	if (path == '/') {
		res.writeHead(200, {'Content-Type': 'text/html'});
		
		fs.readFile("index.html", function (error, pgResp) {
			res.writeHead(200, { 'Content-Type': 'text/html' });
			res.write(pgResp);
			res.end();
		});
	} else if (/\.(css)$/.test(path)) {
		res.writeHead(200, {'Content-Type': 'text/css'});
		res.write(fs.readFileSync(__dirname + path, 'utf8'));
		res.end();
	}
});

server.listen(8080, () => {
	console.log('server is listening at http://127.0.0.1:8080/');
});




