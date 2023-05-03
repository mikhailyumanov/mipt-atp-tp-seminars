FROM python:3.10
ADD . /code
WORKDIR /code
RUN pip install -r requirements.txt
RUN apt update && apt install vim curl less nginx
CMD ["python", "app.py"]
