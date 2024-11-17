
void SendPlayerMessage(PlayerBase player, string message)	{
	Param1<string> Msgparam;
	Msgparam = new Param1<string>(message);
	GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, Msgparam, true, player.GetIdentity());
}

void PrintPlayerName(PlayerBase player) {
    if (player && player.GetIdentity()) {
        string playerName = player.GetIdentity().GetName();

    SendPlayerMessage(player, "helpMsg");


       
    } else {
        Print("Player or player identity is null.");
    }
}
