import 'package:flutter/material.dart';

class GorjetaController extends ChangeNotifier {
  //Vetor de gorjetas
  List<double> listaGorjetas = [0, 5, 10, 15, 20, 25, 30];

  double _valorConta = 0.0;
  double _percentualGorjeta = 0.0;
  double _valorGorjeta = 0.0;
  double _totalPagar = 0.0;

  double get valorConta => _valorConta;
  double get percentualGorjeta => _percentualGorjeta;
  String get valorGorjeta =>
      _valorGorjeta.toStringAsFixed(2).replaceFirst('.', ',');
  String get totalPagar =>
      _totalPagar.toStringAsFixed(2).replaceFirst('.', ',');

  void setValorConta(double novoValor) {
    _valorConta = novoValor;
    notifyListeners();
  }

  void setValorGorjeta(double novoPercentual) {
    _percentualGorjeta = novoPercentual;
    notifyListeners();
  }

  void calcularGorjeta() {
    if (_valorConta > 0) {
      _valorGorjeta = _valorConta * (_percentualGorjeta / 100);
      _totalPagar = _valorConta + _valorGorjeta;
      notifyListeners();
    }
  }
}