n a m e s p a c e   f w h t   {  
  
 t e m p l a t e < t y p e n a m e   T >  
 v o i d   h a d a m a r d ( v e c t o r < T >   & a )   {  
     i n t   n   =   a . s i z e ( ) ;  
     f o r   ( i n t   k   =   1 ;   k   <   n ;   k   < < =   1 )   {  
         f o r   ( i n t   i   =   0 ;   i   <   n ;   i   + =   2   *   k )   {  
             f o r   ( i n t   j   =   0 ;   j   <   k ;   j + + )   {  
                 T   x   =   a [ i   +   j ] ;  
                 T   y   =   a [ i   +   j   +   k ] ;  
                 a [ i   +   j ]   =   x   +   y ;  
                 a [ i   +   j   +   k ]   =   x   -   y ;  
             }  
         }  
     }  
 }  
  
 t e m p l a t e < t y p e n a m e   T >  
 v e c t o r < T >   m u l t i p l y ( v e c t o r < T >   a ,   v e c t o r < T >   b )   {  
     i n t   e q   =   ( a   = =   b ) ;  
     i n t   n   =   1 ;  
     w h i l e   ( n   <   ( i n t )   m a x ( a . s i z e ( ) ,   b . s i z e ( ) ) )   {  
         n   < < =   1 ;  
     }  
     a . r e s i z e ( n ) ;  
     b . r e s i z e ( n ) ;  
     h a d a m a r d ( a ) ;  
     i f   ( e q )   b   =   a ;   e l s e   h a d a m a r d ( b ) ;  
     f o r   ( i n t   i   =   0 ;   i   <   n ;   i + + )   {  
         a [ i ]   * =   b [ i ] ;  
     }  
     h a d a m a r d ( a ) ;  
     T   q   =   1   /   s t a t i c _ c a s t < T > ( n ) ;  
     f o r   ( i n t   i   =   0 ;   i   <   n ;   i + + )   {  
         a [ i ]   * =   q ;  
     }  
     r e t u r n   a ;  
 }  
  
 }     / /   n a m e s p a c e   f w h t 