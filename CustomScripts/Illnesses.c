// Fonction pour contaminer un joueur avec la salmonelle
void contaminateLaughter(PlayerBase player)
{
    if (!player) 
        return; // Vérifie que l'objet joueur existe
    // Message pour informer le joueur de l'infection
    const string LaughterMessage = ".";
    SendPlayerMessage(player, LaughterMessage);
    // Réduction de la santé pour simuler l'infection
    float currentHealth = player.GetHealth("GlobalHealth", "Health");
    player.SetHealth("GlobalHealth", "Health", currentHealth - 5.0); // Réduit la santé de 5 points
    // Utilisation du SymptomManager pour gérer les symptômes de manière avancée
    SymptomManager symptomManager = player.GetSymptomManager();
    if (symptomManager)
    {
        // Nettoie la file d'attente des symptômes précédents si nécessaire
        symptomManager.CleanUpPrimaryQueue();

        // Crée et insère le symptôme de vomissement
        int uniqueID = symptomManager.CreateUniqueID();
        SymptomBase vomitSymptom = symptomManager.SpawnSymptom(SymptomIDs.SYMPTOM_LAUGHTER, uniqueID);

        if (vomitSymptom)
        {
            vomitSymptom.Activate(); // Active le symptôme immédiatement
        }
    }
}