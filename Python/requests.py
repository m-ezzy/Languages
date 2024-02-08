import requests

response = requests.get('https://w3schools.com')
print(response.status_code)
