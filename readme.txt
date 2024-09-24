---> TASK A

- Verificar se todos os componentes do sistema do laboratório se encontram devidamente conectados e em funcionamento, de acordo com o sistema esquemático fornecido no Guião do Projeto, nomeadamente a Fonte de Alimentação de 24 Volts, a bomba e o Arduino.
- Carregar o ficheiro 'LabVIEW.vi' no LABVIEW, utilizar a interface referente ao controlo manual ("Manual"). Alterar os seguintes parâmetros de aquisição, referentes ao reservatório a ser utilizado: ganho (AI0_Gain) = -0.0012 e offset (AI0_Ofset) = 0,6108, os restantes parâmetros permanecem inalterados;
- Na barra de pesquisa de documentos no LabVIEW, especificar a localização do ficheiro .txt no qual serão guardados os dados obtidos, nível da água medido pelo sensor (em metros) e o tempo (em segundos)
- Definir o nível de potência aplicado à bomba, em "Pump Flow", para o valor de 10.8 V;
- Desconectar e conectar arduino;
- Correr ficheiro 'sac23_arduino_groupE.ino' no Arduino IDE;
- Correr no LabVIEW, dará um erro, dar "continue", parar de correr e correr novamente;
- O sistema entrará em funcionamento e na janela no LabVIEW será visualizada a curva experimental de estabilização, com base em diferentes níveis de potência aplicados à bomba. Repetir os últimos 4 passos para os níveis de potência: 12V e 16.8V.


---> TASK B

- Com o mesmo ficheiro do LabVIEW, assim como os mesmos parâmetros de aquisição definidos na task anterior, alterar os seguintes parâmetros de simulação: static gain = 0,0116, lag(s) = 41,38, initial PV = 0.00, os restantes parâmetros permanecem inalterados;
- Na janela de visualização do gráfico, assinalar a curva "Simul";
- Na barra de pesquisa de documentos no LabVIEW, especificar a localização do ficheiro .txt no qual serão guardados os dados obtidos, nível da água medido pelo sensor (em metros) e o tempo (em segundos)
- Definir o nível de potência aplicado à bomba, em "Pump Flow", para o valor de 10.8 V;
- Desconectar e conectar arduino;
- Correr ficheiro 'sac23_arduino_groupE.ino' no Arduino IDE;
- Correr no LabVIEW, dará um erro, dar "continue", parar de correr e correr novamente;
- O sistema entrará em funcionamento e na janela no LabVIEW será visualizada a curva experimental de estabilização, com base em diferentes níveis de potência aplicados à bomba. Repetir os últimos 4 passos para os níveis de potência: 12V e 16.8V.


---> TASK C

PID - aplicação dos métodos

- Desconectar e conectar arduino;
- No LabVIEW, abrir o ficheiro 'LabVIEW.vi', e é necessário definir os valores de static gain = 0,0116, lag(s) = 41,38, ganho (AI0_Gain) = -0,0012 e offset (AI0_Ofset) = 0,6108, tal como os valores de Kc, Ti e Td mencionados no relatório;
- Correr ficheiro 'sac23_arduino_groupE.ino' no Arduino IDE;
- Correr no LabVIEW, dará um erro, dar "continue", parar de correr e correr novamente;
- São visualizados os gráficos.


PID - alteração do código de arduino para automatizar o controlo do sistema

- Desconectar e conectar arduino;
- No LabVIEW, abrir o ficheiro 'Arduino_Alterações_Labview.vi', e é necessário definir os valores de ganho (AI0_Gain)=-0,00116 e offset (AI0_Ofset)=0,601, e um valor de dt(s) = 0.3;
- Correr ficheiro 'sac23_arduino_alterações_taskC.ino' no Arduino IDE;
- Correr no LabVIEW, dará um erro, dar "continue", parar de correr e correr novamente;
- É visualizado o gráfico.