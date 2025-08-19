
import random

class Game: # This class will base the game it self 
    def __init__(self):
        self.game_running = None

        pass

    def GameRunning(self, game_running):
        

        pass

    def PuaseMenu(): # Method will display game itself  
     play = None
     print("Rachet and Clank:")
     print("    Weapons ")
     print("    Gadgets ")
     print("  Enemy_Types ")
     print("    Extras ")
     print("    Options ")
     print("     Quit")
     # Menu Loops until user decides option 
     while play != 'Quit' and play != "Weapons" and play!= "Gadets" and play!= "Enemy_Types" and \
     play != "Extras" and play != "Options": 
        play = input("Choose Option: Clank Suggests ")
        # If player does'nt pick a correct option available 
        if play != 'Quit' and play != "Weapons" and play!= "Gadets" and play!= "Enemy_Types" and \
         play != "Extras" and play != "Options": 
           print("Game Option not available")


# The OOP project will simulate the game Rachet and Clank 
class Rachet:
    def __init__(self, hacking_Device):
        self.weapon_selected = None
        self.gadget_selected = None
        self.hacking_Device = hacking_Device 
        self.gadets = ["MagneBoots", "Hydrodisplacer", "HeliPack", "Trespasser", "Grindboots"]
        self.Weapons = ["Rocket_Launcher", "Sheepantor", "Groovitron", "Fusion_Gernade", "Zurkon"]

        self.ammo = { # Dictionary for weapon and it's specfic ammo capacity 
            'Rocket_Launcher': 8, 
            'Sheepantor': 100,
            'Groovitron': 5,
            'Fusion_Gernade': 8, 
            'Zurkon': 4
        }


    def jump(self): # Method for Character to jump 
        jumpRange = 5.6 # Jump type will depend on range 
        jumpType = None # Three types of jumps can be excuted
    
        pass

    def JetPack(self): # Rachets use of his Jackpack 

        pass


    def Shoot(self, weapon): # Method for Character to shoot Weapon
        # We need to consider the weapon type the player is using and it's ammo capacity and when to reload 
        # Let's use a dictionary for the shooting aspect 
        self.weapon_selected = weapon 
        print(f"Current Weapon,  {self.weapon_selected}")
        # Each time player shoots the ammo will decrement 
        if self.weapon_selected == "Rocket_Launcher": 
           self.ammo["Rocket_Launcher"] -= 1
           print(self.ammo["Rocket_Launcher"])
           if self.ammo["Rocket_Launcher"] == 2:
              print("Low Ammo: Ammo Capcity: ", self.ammo['Rocket_Launcher'])

              if self.ammo["Rocket_Launcher"] == 0:
                 print("No ammo: Reload: Ammo capacity ", self.ammo["Rocket_Launcher"])
           
        
           
         

    def SelectWeapon(self): # Method for Character to select Weapon   

     # Rachets default Weapon
     print(f"Current Weapon: {self.weapon_selected}")

    # Rachets Aresenal of Weapons   
     for i in range(len(self.Weapons)): # Displays Rachets available Weapons
             print(i, " | ", end="")
    
             player_select = None


# Player selects weapon of their choice "Rocket_Launcher", "Sheepantor", "Groovitron", "Fusion_Gernade",
#  "Zurkon"
             while player_select != "Rocket_Launcher" and player_select != "Groovitron" and \
             player_select != "Fusion_Genrade" and player_select != "Bouncer":
              
              player_select = input(str("Select Weapon: "))

              if player_select !="Rocket_Launcher" and player_select != "Groovitron" and \
             player_select != "Fusion_Genrade" and player_select != "Bouncer":
                  print("Weapon not available") # If Current Weapon is not available
             else:
              player_select = self.Weapon 
              print(f"You have selected: {self.Weapon}")
              
                
                
        # Algorithm for Rachet to hack a Panel
    def HackPanel(): # We should create some type a way to solve a password 
        # We can use random numbers to generate patterns 

        pass

    def SelectGadet(self, gadet_equip): # Select one of rachets gadets 
        for gadget in self.gadets: # Displays Rachets Gadgets 
           print(gadget, " || ", end="")
           
           playerselect = None 
         # Gadgets available in list MagneBoots", "Hydrodisplacer", "HeliPack", "Trespasser", "Grindboots"
        while playerselect != "MagneBoots" and playerselect != "Hydrosdisplacer" and playerselect != "HeliPack" and \
         playerselect!= "Trespasser" and playerselect != "Grindboots":
           
           playerselect = input(str("Select a paticular gadet of use"))

           if playerselect != "MagneBoots" and playerselect != "Hydrosdisplacer" and playerselect != "HeliPack" and \
         playerselect!= "Trespasser" and playerselect != "Grindboots":
              print("Gadget is not available:")
           else:
              self.gadget_selected = gadet_equip
              print(f"Gadget Selected:   {self.gadget_selected}")
           


        



class Clank: # Clank will inherit some methods from rachet 
    def __init__(self):

        pass




class EnemyWeapons: # Enemies will inherit from Enemies 
    def __init__(self):

     pass


class Enemies: # EnemyTypes 

    def __init__(self):
        
        pass




rachet = Rachet("Hacker")

rachet.SelectGadet("MagneBoots")
