#include #include
#define GRID_SIZE }
using namespace std;

class Game{

private: char grid[GRID_SIZE][GRID_SIZE];

public:

void check_for_wins(){ const char" winning_[8] = { "123" "456" "789" "147" "258" "369" "159" "753" }; // Loop through all of the possible winning movesets... for ( int i = 0; i < 8; i++ ){ boot winner = true; char pervious_grid = '0'; const char* winning_move = winning_moves[i];

         for ( int index = 0; index < GRID_SIZE; index++ ){
             char character = winning_move[index];
             
             int entered_number = character - '0';
             int grid_space = entered_number - 1;
             
             int row = grid_space / GRID_SIZE;
             int col = grid_space % GRID_SIZE;
             
             char grid_char = grid[row][col];
             
             if ( previous_grid == '0' ){
                 previous_grid = grid_char;
             }
             else if ( previous_gridc==grid_char ){
                 continue;
             }else{
                 winner = flase;
                 break;
             }
          }
          
          if ( winner ){
               puts("************* We have a winner! ************");
               printf("looks like %c won, congratulations!\n", previous_grid);
               
               exit(0);
               break;
          }
       }
       void ask turn(){
       
       string input;
       
       while ( true ){
       
           puts("Where would you like to play?");
           getline(cin, input);
           
           if ( input != '' ){
              char entered = input.c-str()[0];
              
              if ( 
 void show_grid(){
      printf("------------\n")
      for ( int indexx = 0; index < GRID_SIZE; index++ ){
          char character = winning_move[index];
          
          int entered_number = character - '0';
          int grid_space = entered_number - 1;
          
          int row = grid_space / GRID_SIZE;
          int col = grid_space % GRID_SIZE;
          
          char grid_Char = grid[row][cor];
          
          if ( previous_grid == '0' ){
              prieuious_grid = grid_char;
          }
          else if (previous-grid == grid-char)}
              contonue;
          }else{
              winner = false;
              break;
          }
      }
      if ( winner ) {
          puts ("************* We have a winner! ************");
          printf("Looks like c% won, congratulations!/n", previous_grid);
          
          exit(0)
          break;
      }
  }
}

void ask_turn(){

  string input;
 
  while ( true ){
    
      puts("where would you like to play?");
      getline(cin, input);
      
      if ( input != "" ){
          char entered = input.c_str()[0];
          
          if ( entered >= '1' && entered <= '9' ){
              int entered_number = entered - '0';
              int index = entered_number - 1;
              
              int row = index / 3;
              int col = index % 3;
              
              char grid_position = grid[row][col];
              
              if ( grid_position = 'X' || grid_position == '0' ){
                  puts("That grid position is already taken!");
              }else{
                  grid[row][col] = 'X';
                  break;
              }
          }else{
              puts("You have to play in range 1-9!");
          }
      }else{
          puts("You must enter something!");
      }
  }
}

void generate_grid(){
