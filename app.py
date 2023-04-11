import time

from flask import Flask, abort
from redis import Redis


app = Flask(__name__)
redis_client = Redis(host="redis")


@app.route('/')
def hello():
    return 'Hello World!'

@app.route('/get/<string:key>')
def get(key: str):
    if key in redis_client:
        return redis_client[key]
    else:
        return f"Key {key} is not found", 404

@app.route('/set/<string:key>/<string:value>')
def set(key: str, value: str):
    redis_client[key] = value
    return f"{key}: {value}"


if __name__ == "__main__":
    app.run(host="0.0.0.0", debug=True)

