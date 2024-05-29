for(j=0; j<ukuran; j++){
        if(alphabet[j].huruf==alphabet[j+1].huruf){
            alphabet[j].jumlah+=alphabet[j+1].jumlah;
            ukuran-=1;
        }
    }