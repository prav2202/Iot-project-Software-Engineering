from django.shortcuts import render

from django.http import HttpResponse

def index(request):
	return HttpResponse("Ok testing!")

# Create your views here.
