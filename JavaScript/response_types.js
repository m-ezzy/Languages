var http = require('http');

var server = http.createServer(function(req, res) {
	//res.writeHead(200, {'Content-Type': 'text/plain'});

	res.statusCode = 200;

	/*res.setHeader('Content-Type', 'text/plain');
	res.end('hello world! \n');*/

	/*res.setHeader('Content-Type', 'text/json');
	res.end('{message: hello world! }');*/

	/*res.setHeader('Content-Type', 'text/html');
	res.end('hello world! \n');*/
});

server.listen(8080, () => {
	console.log('server is listening at http://127.0.0.1:8080/');
});


