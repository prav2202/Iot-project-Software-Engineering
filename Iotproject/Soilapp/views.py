from django.shortcuts import render
from django.views.generic import TemplateView
from .models import Soilapp
# Create your views here.

class Soilchart(TemplateView):
	template_name = 'Soilapp/soil.html'

	def get_context_data(self, **kwargs):
		return super().get_context_data(**kwargs)
		context["qs"]= Soilapp.objects.all()
		return context