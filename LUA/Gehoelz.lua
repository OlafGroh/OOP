--[[
 * autor:   Olaf Groh
 * date:    19/02/2016
 * version: 1.0
 ]]

Gehoelz = {}

  function Gehoelz.new(class, cart, cpflanzjahr, cpreis)


    if class==Gehoelz then
      error("Fehler abstract class!")
    end

    local self = {}

    --[[ Attribute der abstrakten Basisklasse ]]
    --[[ Attributes of the abstract base class ]]
    local art = cart
    local pflanzjahr = cpflanzjahr
    local preis = cpreis


  --[[ Get- und Set Methoden für alle Attribute der Klasse ]]
  --[[ Get and set methods for all attributes of the class ]]
  function self.getArt()
    return art
  end

  function self.setArt(sart)
    art = sart
  end

  function self.getPflanzjahr()
    return pflanzjahr
  end

  function self.setPflanzjahr(spflanzjahr)
    pflanzjahr = spflanzjahr
  end

  function self.getPreis()
    return preis
  end

  function self.setPreis(spreis)
    preis = spreis
  end

  --[[ Methode wird in allen Subklassen (ausser Liane) überschrieben ]]
  --[[ Method are overwritten in all (not in Liane) sub classes ]]
  function self.getInfo()
    return "Art: " .. art .. " Pflanzjahr: " .. pflanzjahr .. " Preis: " .. preis;
  end

  return self
end
