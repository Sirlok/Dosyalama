#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *dg;        /* dosya iþaretçisi */
   char  Ad[10];
   int   Not, No, eb, ek, n, top;
   float ort;

   if( (dg=fopen("ogrenci.txt","r")) == NULL )
     puts("Dosya açýlmadý !\n"), exit(1);

   /* baþlangýç deðerleri ata */
   ek  =  1000;  /* çok büyük */
   eb  = -1000;  /* çok küçük */
   top = 0;      /* notlarýn toplamý */
   n   = 0;      /* notu 0'dan farlý öðrencilerin toplamý */

   while( !feof(dg) )                    /* dosyanýn sonuna kadar */
   {
      fscanf(dg,"%d %s %d",&No,Ad,&Not); /* verileri oku! */

      if(Not>eb) eb = Not;               /* en büyük ve en küçük bulunuyor... */
      if(Not<ek) ek = Not;

      if(Not) n++;                       /* Not 0'dan farklý mý? */

      top += Not;                        /* Notlarin toplamý */
   }

   fclose(dg);                           /* dosyayý kapat */

   ort = (float) top/n;                  /* ortalama (0 lar hariç!) */

   printf("En yuksek not = %2d\n",eb);   /* sonuçlar ekrana ... */
   printf("En  dusuk not = %2d\n",ek);
   printf("Ortalama      = %4.1f\n",ort);

 return 0;
}
