================================
 HW7: Defining the ALU Component
================================
..  csv-table::
    :header: Mnemonic, Operands, Operation, FLAGS, Clocks
    :delim: |

    	ADD|Rd,Rr|Rd <- Rd + Rr|Z,C,N,V,H|1
        ADC|Rd,Rr|Rd <- Rd + Rr + C|Z,C,N,V,H|1
        ADIW|RDl,K|Rdh:RdI <- Rdh:Rd + K|Z,C,N,V,S|2
        SUB|Rd,Rr|Rd <- Rd - Rr|Z,C,N,V,H|1
        SUBI|Rd,K|Rd <- Rd - K|Z,C,N,V,H|1
        SBC|Rd,Rr|Rd <- Rd - Rr - C|Z,C,N,V,H|1
        SBCI|Rd,K|Rd <- Rd - K - C|Z,C,N,V,H|1
        SBIW|RdI,K|Rdh:RdI <- Rdh:RdI - K|Z,C,N,V,S|2
        AND|Rd,Rr|Rd <- Rd  • Rr|Z,N,V|1
        ANDI|Rd,K|Rd <- Rd  • K|Z,N,V|1
        OR|Rd,Rr|Rd <- Rd  v Rr|Z,N,V|1
        ORI|Rd,K|Rd <- Rd  v K|Z,N,V|1
        EOR|Rd,Rr|Rd <- Rd  ? Rr|Z,N,V|1
        COM|Rd|Rd <- 0xFF - Rd|Z,C,N,V,H|1
        NEG|Rd|Rd <- 0x00 - Rd|Z,N,V|1
        SBR|Rd,K|Rd <- Rd  v K|Z,N,V|1
        CBR|Rd,K|Rd <- Rd  •  (0x00 -K)|Z,N,V|1
        INC|Rd|Rd <- Rd + 1|Z,N,V|1
        DEC|Rd|Rd <- Rd - 1|Z,N,V|1
        TST|Rd|Rd <- Rd • Rd|Z,N,V|1
        CLR|Rd|Rd <- Rd ? Rd|Z,N,V|1
        SER|Rd|Rd <- 0xFF|None|1

FLAGS
#####

Z-Zero Flag
    
* The Zero Flag Z indicates a zero result in an arithmetic or logic operation. 

C-Carry Flag

* The Carry Flag C indicates a carry in an arithmetic or logic operation.

N-Negative Flag

* The Negative Flag N indicates a negative result in an arithmetic or logic operation.

V-Two¿s Complement Overflow Flag

* The Two¿s Complement Overflow Flag V supports two¿s complement arithmetics.

S-Sign Bit, S = N¿¿ V

* The S-bit is always an exclusive or between the Negative Flag N and the Two¿s Complement Overflow Flag V. 

H-Half Carry Flag

* The Half Carry Flag H indicates a Half Carry in some arithmetic operations.
