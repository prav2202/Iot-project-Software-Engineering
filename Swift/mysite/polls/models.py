from django.db import models

class MyModel(models.Model):
    field1 = models.CharField(max_length=255)
    field2 = models.IntegerField()
    field3 = models.DateTimeField()

    class Meta:
        db_table = 'mytable'

