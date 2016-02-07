'''
Created on 7 févr. 2016

@author: philippe
'''

import tkinter
from serial import *




class Morse:
    def __init__(self):
        self.fenetre = tkinter.Tk()
        
        self.fenetre.title('Code Morse')
        
        champ_label = tkinter.Label(self.fenetre, text="Saisir le texte à convertir en morse")
        champ_label.pack()
        
        self.var_texte = tkinter.StringVar()
        self.ligne_texte = tkinter.Entry(self.fenetre, textvariable=self.var_texte, width=60)
        self.ligne_texte.pack()
        
        bouton_envoyer = tkinter.Button(None)
        bouton_envoyer.config(text="Envoyer", command=self.envoyer)
        bouton_envoyer.pack()
        
        self.fenetre.mainloop()
        
    
    def envoyer(self):
        texteSaisi = self.ligne_texte.get()
        
        try:
            
            with Serial(port="/dev/ttyACM0", baudrate=9600, timeout=1, writeTimeout=1) as port_serie:
                port_serie.write(texteSaisi.encode('ascii'))
        
        except IOError:
            print('Aucune carte Arduino reconnue...')
        
        
        self.ligne_texte.delete(0, 5000)
        




if __name__ == '__main__':
    Morse()
        