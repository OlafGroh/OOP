--[[
 * autor:   Olaf Groh
 * date:    19/02/2016
 * version: 1.0
 ]]

Gehoelz = {}
Gehoelz.__index = Gehoelz
  --[[ Attribute der abstrakten Basisklasse ]]
  --[[ Attributes of the abstract base class ]]
  --Gehoelz.art = 0
  --Gehoelz.pflanzjahr = 0
  --Gehoelz.preis = 0

  function Gehoelz:new(art, pflanzjahr, preis)
    local self = setmetatable({}, Gehoelz)
    self.art = art
    self.pflanzjahr = pflanzjahr
    self.preis = preis
    return self
    --return setmetatable( {art=art, pflanzjahr=pflanzjahr, preis=preis}, Gehoelz)
  end

  --[[ Get- und Set Methoden für alle Attribute der Klasse ]]
  --[[ Get and set methods for all attributes of the class ]]
  function Gehoelz:getArt()
    return self.art
  end

  function Gehoelz:setArt(art)
    self.art = art
  end

  function Gehoelz:getPflanzjahr()
    return self.pflanzjahr
  end

  function Gehoelz:setPflanzjahr(pflanzjahr)
    self.pflanzjahr = pflanzjahr
  end

  function Gehoelz:getPreis()
    return self.preis
  end

  function Gehoelz:setPreis(preis)
    self.preis = preis
  end

  --[[ Methode wird in allen Subklassen (ausser Liane) überschrieben ]]
  --[[ Method are overwritten in all (not in Liane) sub classes ]]
  function Gehoelz:getInfo()
    return "Art: " .. self.art .. " Pflanzjahr: " .. self.pflanzjahr .. " Preis: " .. self.preis;
  end
