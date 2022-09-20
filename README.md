<h1>Extensão IoT - Doorbeel</h1>

<p align="justify">De acordo com estatísticas fornecidas pelo Instituto Brasileiro de Geografia e Estatística – IBGE, no Brasil há aproximadamente 10 milhões de pessoas com surdez. Esse número corresponde a 5% da população no Brasil.</p>

<p align="justify">No mundo, estima-se que 360 milhões apresentam algum grau de surdez. Essas informações são muito relevantes e refletem a necessidade quanto ao desenvolvimento de ações inclusivas, capazes de atender milhões de pessoas.</p>
  
<p align="right"><b>Fonte:</b> <i>https://academiadelibras.com/blog/comunidade-surda/</i></p>
  
<p align="justify">Pensando nisso, desenvolvi pensando na comunidade surda um sistema de alerta residencial, em <b>Arduino</b>, que utiliza sinalização luminosa. No mercado existem diversas opções de produtos com essa finalidade, porém, projetos como esse permitem que pessoas iniciantes no mundo da tecnologia coloquem a mão na massa. Através do baixo grau de dificuldade e prototipagem de baixo custo, é possível personalizar o projeto e adequar as suas necessidades.</p>

<p align="center"><img src="https://github.com/brenodsb/extensao_iot_doorbell/blob/main/media/extensao_iot_doorbell_gif.gif">
<br><i>Uma breve exibição do projeto em funcionamento</i></p>

<h3><b>Componentes utilizados no projeto Tinkercad</b></h3>
<ul>
  <li>
    1x Arduino Uno Rev 3
  </li>
  <li>
    1x Fios para as conexões
  </li>
  <li>
    2x Resistor 1KΩ
  </li>
  <li>
    1x Botão Chave
  </li>
  <li>
    1x Transistor NPN(BJT)
  </li>
  <li>
    1x Relé SPDT
  </li>
  <li>
    1x Lâmpada
  </li>  
  <li>
    1x Fonte de Energia 12v/3A
  </li>
</ul>

<h3>Circuito</h3>

<p>O circuito pode ser criado conforme a imagem a baixo, mas fique avontade para alterar de acordo com a necessidade. O projeto também está disponiblizado no <a target="_blank" rel="noopener noreferrer" href="https://www.tinkercad.com/things/0BHZZ764COF-extensaoiotdoorbell">Tikercad</a>.</p>

<p align="center"><img src="https://github.com/brenodsb/extensao_iot_doorbell/blob/main/media/extensao_iot_doorbell_image.png">
<br><i><a target="_blank" rel="noopener noreferrer" href="https://www.tinkercad.com/things/0BHZZ764COF-extensaoiotdoorbell">https://www.tinkercad.com/things/0BHZZ764COF-extensaoiotdoorbell</a></i></p>

<h3>Codificando o Arduíno</h3>

<p>No repositório estou disponibilizando o arquivo .ino utilizado nesse projeto. Porém, para melhor visualização, este é o código utilizado para o funcionamento do alerta.</p>

```cpp
int botao = 0; //declaracao de variavel para estado do botao

void setup(){
  pinMode(2, INPUT); //pino 2 de entrada (botao)
  pinMode(13, OUTPUT); //pino 13 de saida (transistor/lampada)
}

void loop(){
  botao = digitalRead(2); //variavel recebe estado do pino 2
  if (botao == LOW) { //quando pressionado
    for (int i = 0; i < 20; i++){ //acende e apaga 20x
      digitalWrite(13, HIGH); //liga
      delay(500); //espera 0,5 segundos
      digitalWrite(13, LOW); //desliga
      delay(500); //espera 0,5 segundos
    }
  }
}
```
 
