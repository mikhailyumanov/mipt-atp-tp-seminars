FROM python:3.10
RUN mkdir /code
ADD requirements.txt /code
VOLUME /code
WORKDIR /code
RUN pip install -r requirements.txt
CMD ["python", "app.py"]
