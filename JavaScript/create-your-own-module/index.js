var http = require('http');
var maths1 = require('./maths1');

var server = http.createServer(function(req, res) {
	res.statusCode = 200;
	res.setHeader('Content-Type', 'text/plain');
	res.end(`sum of 2 and 3 is ` + maths1.calc(2, 3, '+'));
});

server.listen(8080, () => {
	console.log('server is listening at http://127.0.0.1:8080/');
});


