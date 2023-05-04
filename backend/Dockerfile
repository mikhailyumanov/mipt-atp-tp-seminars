FROM python:3.10-alpine
RUN mkdir /code
ADD . /code
WORKDIR /code
RUN apk add curl
RUN pip install -r requirements.txt
CMD ["python", "app.py"]
