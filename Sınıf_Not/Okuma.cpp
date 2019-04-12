#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *dg;        /* dosya i�aret�isi */
   char  Ad[10];
   int   Not, No, eb, ek, n, top;
   float ort;

   if( (dg=fopen("ogrenci.txt","r")) == NULL )
     puts("Dosya a��lmad� !\n"), exit(1);

   /* ba�lang�� de�erleri ata */
   ek  =  1000;  /* �ok b�y�k */
   eb  = -1000;  /* �ok k���k */
   top = 0;      /* notlar�n toplam� */
   n   = 0;      /* notu 0'dan farl� ��rencilerin toplam� */

   while( !feof(dg) )                    /* dosyan�n sonuna kadar */
   {
      fscanf(dg,"%d %s %d",&No,Ad,&Not); /* verileri oku! */

      if(Not>eb) eb = Not;               /* en b�y�k ve en k���k bulunuyor... */
      if(Not<ek) ek = Not;

      if(Not) n++;                       /* Not 0'dan farkl� m�? */

      top += Not;                        /* Notlarin toplam� */
   }

   fclose(dg);                           /* dosyay� kapat */

   ort = (float) top/n;                  /* ortalama (0 lar hari�!) */

   printf("En yuksek not = %2d\n",eb);   /* sonu�lar ekrana ... */
   printf("En  dusuk not = %2d\n",ek);
   printf("Ortalama      = %4.1f\n",ort);

 return 0;
}
