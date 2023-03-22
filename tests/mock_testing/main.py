import time
from threading import Thread

from flask import Flask

app = Flask(__name__)


class Server(Thread):
    def __init__(self, port=5000):
        super().__init__()
        self.port = port
        self.app = Flask(__name__)
        self.url = "http://localhost:%s" % self.port

        self.app.add_url_rule("/sum/<int:a>/<int:b>", view_func=self.get_sum)

    def get_sum(self, a: int, b: int):
        # very long computations
        time.sleep(3)

        return f"<h1>{a} + {b} = {a + b}</h1>"

    def run(self):
        self.app.run(port=self.port)


if __name__ == '__main__':
    Server(5000).run()
