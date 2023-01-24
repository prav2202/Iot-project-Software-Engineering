from django.db import models

# Create your models here.
class Soilapp(models.Model):
    Hour = models.CharField(max_length=220)
    Temp = models.IntegerField()

    def __str__(self):
        return "{}-{}".format(self.Hour,self.Temp)
