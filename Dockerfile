FROM python:3.10
ADD requirements.txt /
RUN pip install -r requirements.txt
CMD ["python", "app.py"]
