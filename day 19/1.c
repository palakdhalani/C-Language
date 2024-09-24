int main(){
    int size,number;
    printf("Enter the array's size : ");
    scanf("%d",&size);

    int box[size];

    for (int i = 0; i < size; i++)
    {
       


              printf("Enter the value[%d] = ",i);
             scanf("%d",&box[i]);     
    
    
}
 printf("Negative elements from an Array:");
 for (int i = 0; i < size; i++)
    {
    if (box[i]<0)
    {
      printf("%d ",box[i]);
    }
          
}
}