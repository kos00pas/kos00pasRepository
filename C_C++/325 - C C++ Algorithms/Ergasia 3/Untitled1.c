char* Diadromi(GRAPH g , char* xwra_pou_eimai , char* diadromi_mexri_stigmis  ){
	char *str ; 
	
	/*	if( (strcmp(str,"error") == 0 ){ // 
				return "error" ; 
			} 
		if(xwra_pou_eimai == "finish" ){
	     	return "finish"; // lathos giati tha xathi i diadromi   
	        }
	    */
		    
	for( ;(strcmp(xwra_pou_eimai,"1") == 0)&&(strlen(diadromi_mexri_stigmis ) == 10 ); ){// mexru | ixwra_pou_eimai einai to 1 | kai 10 atoma tin diadromi 

		if((weight_xwra_pou_eimai == 0 )|| (g.visit[][] == 1) ){
			
		pithani_diadromi++; // epomeni pithani diadromi     
	     }
	     
		else if(weight_xwra_pou_eimai =! 0  ){ // 
		
			str = Diadromi(g , xwra_pou_eimai  );
		
			concetenation(str,xwra_pou_eimai);	
			pithani_diadromi++;//epomeni pithani diadromi
			
			return str;	
		}
		
		else if(pithani_diadromi >=10){//not once oles tis diadromes 
			printf("error: den mpori na episkeuthi oles tis xores mono mia fora ");
			str = "error";
			return str  ; 
		}
		|
	}
	if(strcmp(xwra_pou_eimai,"1") == 0){
		return "finish";  
	}
	return str ; 
	
}
