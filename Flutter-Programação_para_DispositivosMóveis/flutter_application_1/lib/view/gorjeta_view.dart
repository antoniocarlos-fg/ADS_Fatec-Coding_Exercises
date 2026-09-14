import 'package:flutter/material.dart';
import 'package:get_it/get_it.dart';

import '../controller/gorjeta_controller.dart';

class GorjetaView extends StatefulWidget {
  const GorjetaView({super.key});

  @override
  State<GorjetaView> createState() => _GorjetaViewState();
}

class _GorjetaViewState extends State<GorjetaView> {
  //injetar o controller na view
  final ctrl = GetIt.I.get<GorjetaController>();

  //iniciar o tratamento de eventos
  @override
  void initState() {
    super.initState();
    ctrl.addListener(() => setState(() {}));
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey.shade200,
      body: SafeArea(
        child: Padding(
          padding: EdgeInsets.fromLTRB(20, 0, 35, 0),
          child: Column(
            children: [
              //
              // ÍCONE
              //
              Icon(
                Icons.payments_rounded,
                size: 64,
                color: Colors.green.shade700,
              ),
              SizedBox(height: 12),
              Text(
                'Calculadora de Gorjeta',
                textAlign: TextAlign.center,
                style: TextStyle(
                  fontSize: 28,
                  fontWeight: FontWeight.bold,
                ),
              ),

              //
              // CAMPO DE TEXTO
              //
              Card(
                elevation: 6,
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(20),
                ),
                child: Padding(
                  padding: EdgeInsetsGeometry.all(20),
                  child: Column(
                    children: [
                      TextField(
                        style: TextStyle(
                          fontSize: 28,
                          fontWeight: FontWeight.w500,
                        ),

                        decoration: InputDecoration(
                          labelText: 'Valor da conta',
                          prefixIcon: Icon(Icons.receipt_long),
                          prefixText: 'R\$ ',
                          filled: true,
                          fillColor: Colors.grey.shade100,
                          border: OutlineInputBorder(
                            borderRadius: BorderRadius.circular(15),
                            borderSide: BorderSide.none,
                          ),
                        ),

                        onChanged: (value) {
                          ctrl.setValorConta(double.tryParse(value) ?? 0.0);
                        },
                      ),

                      //
                      // DROPDOWN
                      //
                      const SizedBox(height: 20),
                      SizedBox(
                        height: 60,
                        child: DropdownButtonFormField<double>(
                          initialValue: ctrl.percentualGorjeta,
                          decoration: InputDecoration(
                            labelText: 'Percentual da gorjeta',
                            filled: true,
                            fillColor: Colors.grey.shade100,
                            border: OutlineInputBorder(
                              borderRadius: BorderRadius.circular(15),
                              borderSide: BorderSide.none,
                            ),
                          ),
                          items: ctrl.listaGorjetas
                              .map(
                                (value) => DropdownMenuItem<double>(
                                  value: value,
                                  child: Text(
                                    '$value%',
                                    style: const TextStyle(fontSize: 22),
                                  ),
                                ),
                              )
                              .toList(),
                          onChanged: (value) {
                            if (value != null) {
                              ctrl.setValorGorjeta(value);
                            }
                          },
                        ),
                      ),

                      //
                      // BOTÃO
                      //
                      SizedBox(height: 15),
                      ElevatedButton(
                        //Aparência do botão
                        style: ElevatedButton.styleFrom(
                          backgroundColor: Colors.green.shade700,
                          foregroundColor: Colors.grey.shade200,
                          shape: RoundedRectangleBorder(
                            borderRadius: BorderRadius.circular(18),
                          ),
                          textStyle: TextStyle(
                            fontSize: 18,
                            fontWeight: FontWeight.bold,
                          ),
                        ),

                        onPressed: () {
                          
                          if (ctrl.valorConta > 0){
                            ctrl.calcularGorjeta();
                          }else{
                            ScaffoldMessenger.of(context).showSnackBar(
                              SnackBar(content: Text('Por favor, inserir apenas valores numéricos.'))
                            );
                          }
                        },
                        child: Text('CALCULAR'),
                      ),
                    ],
                  ),
                ),
              ),

              SizedBox(height: 30),
              Card(
                color: Colors.green.shade50,
                elevation: 4,
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(20),
                ),
                child: Padding(
                  padding: EdgeInsets.all(20),
                  child: Column(
                    children: [
                      Text(
                        'Gorjeta',
                        style: TextStyle(
                          fontSize: 16,
                          color: Colors.green.shade700,
                        ),
                      ),
                      Text(
                        'R\$ ${ctrl.valorGorjeta}',
                        style: TextStyle(
                          fontSize: 26,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                      SizedBox(height: 10),
                      Divider(),
                      SizedBox(height: 10),
                      Text(
                        'Total a pagar',
                        style: TextStyle(
                          fontSize: 16,
                          color: Colors.green.shade700,
                        ),
                      ),
                      Text(
                        'R\$ ${ctrl.totalPagar}',
                        style: TextStyle(
                          fontSize: 26,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                    ],
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
