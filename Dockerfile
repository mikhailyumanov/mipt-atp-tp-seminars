FROM python:3.10
ADD requirements.txt /
RUN pip install -r requirements.txt
VOLUME /code
WORKDIR /code
CMD ["python", "app.py"]
