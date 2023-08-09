function Phi = Flux_Through_Enc_Surface(q)
  % This function takes a vector of enclosed charge values in nano-coulombs and
  % returns the flux through a surface enclosing the charges.

  q = q(:)*10^-9; % unit conversion from nano coulombs to coulombs
  e_0 = 8.8541878176*10^-12; % permittivity of free space in coulombs per volt-meter
  q_enc = 0; % initiate
  for i = 1:length(q)
      q_enc = q_enc + q(i);
  end
  Phi = q_enc / e_0; % Flux through surface in Vm
  end
