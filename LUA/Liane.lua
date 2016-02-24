--[[
 * autor:   Olaf Groh
 * date:    24/02/2016
 * version: 1.0
 ]]
Liane = {}

 function Liane.new(class, cart, cpflanzjahr, cpreis)
   --[[ Keine zusätzlichen Attrubute ]]
   --[[ No additional attributes ]]
Liane = Gehoelz.new(class, cart, cpflanzjahr, cpreis)
local self = {}

  --[[ Konstruktorfunktion:Alle Parameter in den Attributen der Basisklasse speichern, Konstruktor der Basiklasse aufrufen ]]
  --[[ Constructorfunction:store all parameters in the attributes of the base class, call the constructor of the base class ]]
  --setmetatable(Liane, {__index=Gehoelz})
  --Gehoelz.new(self, cart, cpflanzjahr, cpreis)

  --[[ Keine zusätzlichen Get- und Set Methoden ]]
  --[[ No additional get and set methodes ]]

  --[[ Kein Überschreiben der Methoden getInfo() ]]
  --[[ No overriding the methods getInfo() ]]
  return self
end
