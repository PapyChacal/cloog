/* Generated from ../../../git/cloog/test/forwardsub-3-1-2.cloog by CLooG 0.14.0-91-g5d3da4b gmp bits in 0.01s. */
S3(i = 2,j = 1) ;
S1(i = 3,j = 1) ;
S1(i = 4,j = 1) ;
S4(i = 4,j = 2) ;
for (i=5;i<=M+1;i++) {
  S1(j = 1) ;
  for (j=2;j<=floord(i-1,2);j++) {
    S2 ;
  }
  if (i%2 == 0) {
    S4(j = i/2) ;
  }
}
for (i=M+2;i<=2*M-1;i++) {
  for (j=i-M;j<=floord(i-1,2);j++) {
    S2 ;
  }
  if (i%2 == 0) {
    S4(j = i/2) ;
  }
}
i = 2*M ;
S4(j = M) ;