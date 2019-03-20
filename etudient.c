inculde<stdio>
int main() {
const int N=10;
float i,j=0,G[N];

for (i=0;i<N;i++) {
printf("le G[%f] est:",i);
scanf("%f",&G[i]);
if (G[i]>=10) {
j++;

}

}
printf("le nombre des etudients qui ils obtient sur 10 est :%f",j);

}
