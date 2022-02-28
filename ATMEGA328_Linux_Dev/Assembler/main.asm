.INCLUDE "m328pdef.inc"    ;Aquí se declara el archivo de variables del MCU
.DEF temp=R16        ;Aquí se declaran definiciones para registros
.DEF count=R17
.EQU num=30            ; Definición de una constante
.ORG $000 JMP Reset    ;Estas son las líneas de salto a interrupciones.    
;.ORG $002 JMP INT0        
;.ORG $004 JMP INT1        
Reset:                 ;Interrupción de reinicio, aquí van las configuraciones de ;puertos e interrupciones.
ldi temp,High(RAMEND)    ; Configuración de Pila del MCU
OUT SPH,temp
LDI temp,LOW(RAMEND)
OUT SPL,temp
main:                ; Ciclo infinito principal
; En esta parte va el código principal
RJMP main;             ;Término de ciclo infinito
INT0:            ;Interrupción

RETI            ;Término de Interrupción
ADD

add A, $44 ;
add AB, 0x44 ;
add AB, 123 ;
sbc 
ror 
mul  SUB SUBI rjmp 
 
subi r16,low(@0)
/* */
c 'a'
NOP  asd
nop as
mv 
