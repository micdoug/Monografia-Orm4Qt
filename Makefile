######################################
##    UNIVERSIDADE DE ITAUNA        ##
##  Autor: Zilton Cordeiro Junior   ##
##  Versao: 1.1                     ##
##  Data: Fevereiro/2014            ##
######################################

all: clean tcc.pdf

tcc.pdf: tcc.bbl
	pdflatex tcc.tex
	pdflatex tcc.tex

tcc.bbl: tcc.aux
	bibtex tcc

tcc.aux: tcc.tex referencias.bib
	pdflatex tcc.tex

run: all 
	acroread tcc.pdf &

clean:
	rm -f *.log *.aux *.bbl *.blg *.dvi *.ps *.pdf *.lot *.toc *.lof *.out *.bak *.loa *.new *.backup *~
