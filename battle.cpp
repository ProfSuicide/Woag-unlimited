int battleTurn=1;
int battleActive=1;
while(battleActive==1){
if(battleTurn==1){
cout << "The Sorcerer attacks! << endl;
enemyLand=rand() % 20 + 1;
if(enemyLand==20){
  cout << "The Sorcerer lands a critical!" << endl;
  enemyDamage=(rand() % 10 + 4)*2;
}
if((enemyLand>=10) && (enemyLand<=19){
  cout << "The Sorcerer lands a hit!" << endl;
  enemyDamage=rand() % 10 + 4;
}
if((enemyLand=<9) && (enemyLand>=1)){
  cout << "The Sorcerer misses!" << endl;
}
if(enemyLand==1){
  
   
  

