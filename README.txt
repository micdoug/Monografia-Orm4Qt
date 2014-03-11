#############################################
##    UNIVERSIDADE DE ITAUNA     	   ##
##  Autor: Zilton Cordeiro Junior	   ##
##  Versao: 1.1             	           ##
##  Data: Fevereiro/2014               	   ##
##					   ##
## Nao foi utilizada acentuacao no texto.  ##
#############################################

O arquivo principal do projeto eh o tcc.tex, o qual possui entrada para os arquivos principais de cada capítulo.

Voce deve fazer alteracoes no arquivo 00_folha_aprovacao.tex, modificando o que está indicado nos coméntários feitos no próprio arquivo.

Dicas:
	Figuras: Coloque todas as suas figuras no diretorio imagens. Melhora a organizacao.
		Exemplo de codigo para adicionar figura ao texto:

		\begin{figure}[th]
  			\centering
  			\includegraphics[width=0.8\textwidth]{imagens/arquitetura_sistema.pdf}
  			\caption{Arquitetura de sistema de coleta de pedidos.}
  			\label{fig:arquitetura_sistema}
		\end{figure}

	Gere PDFs das figuras, para adiciona-las ao seu codigo.
	Utilize o software convert do linux (sudo apt-get install convert)
	Exemplo:	convert minhaFigura.png minhaFigura.pdf

	Tabelas:
		Se voce utilizar o Linux, instale o software Lyx.
		Construa as tabelas como se estivesse utilizando uma planilha eletronica.
		Gere o codigo Latex da tabela e adicione-o ao seu codigo.

	Makefile:
		Utilize sempre o Makefile, ja esta pronto para compilar as referencias bibliograficas e
		gerar o PDF.

	IDE para codificacao:
		Indico utilizar o Linux e instalar o Kile (sudo apt-get install kile), software que ja vem preparado para a codificacao Latex.

