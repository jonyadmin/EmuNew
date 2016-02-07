/****************************************************************************!
*                _           _   _   _                                       *
*               | |__  _ __ / \ | |_| |__   ___ _ __   __ _                  *
*               | '_ \| '__/ _ \| __| '_ \ / _ \ '_ \ / _` |                 *
*               | |_) | | / ___ \ |_| | | |  __/ | | | (_| |                 *
*               |_.__/|_|/_/   \_\__|_| |_|\___|_| |_|\__,_|                 *
*                                                                            *
*                            www.brathena.org                                *
******************************************************************************
* src/config/renewal.h                                                       *
* Configura��es b�sicas de ativa��o e f�rmulas da renova��o                  *
******************************************************************************
* Copyright (c) brAthena Dev Team                                            *
* Copyright (c) Hercules Dev Team                                            *
* Copyright (c) Athena Dev Teams                                             *
*                                                                            *
* Licenciado sob a licen�a GNU GPL                                           *
* Para mais informa��es leia o arquivo LICENSE na ra�z do emulador           *
*****************************************************************************/

#ifndef CONFIG_RENEWAL_H
#define CONFIG_RENEWAL_H

/**
 * @INFO: Este arquivo tem o proposito de definir configura��es apenas da renova��o.
 * Para desabilitar uma configura��o, comente a linha que cont�m o #define com //
 **/

/**
 * Retire o coment�rio da defini��o para desativar todas as defini��es abaixo.
 * Fazendo isso o emulador vai estar configurado para caracter�sticas pr�-renova��o.
 * Nota: em compila��es de UNIX, isso pode ser facilmente feito retirar o coment�rio, usando:
 * ./configure --disable-renewal
 */
//#define DISABLE_RENEWAL

#ifndef DISABLE_RENEWAL // N�o altere esta linha

/// Modo renova��o do emulador
/// (comente a linha para desativar)
///
/// Suporte espec�fico da renova��o, como f�rmulas da renova��o.
//#define RENEWAL

/// Tempo de conjura��o de habilidades, da renova��o
/// Dentro dos padr�es da renova��o, a conjura��o:
///  - Tem sua f�rmula reduzida por DEX * 2 + INT
///  - O tempo de conjura��o se divide em f�rmula e fixo, cujo o fixo ser� adicionado por habilidades e itens.
//#define RENEWAL_CAST

/// Taxa de drop da renova��o
//#define RENEWAL_DROP

/// Taxa de experi�ncia da renova��o
//#define RENEWAL_EXP

/// Taxa de modifica��o do dano conforme o n�vel
//#define RENEWAL_LVDMG

/// Habilidade "encantar com veneno mortal" da renova��o
/// Fora dos padr�es da renova��o a habilidade:
///  - N�o ter� o dano reduzido por 400%
///  - N�o ter� efeito de amplifica��o com a habilidade grimtooth
///  - Ataque com armas e status STR (for�a) ser�o aumentados.
//#define RENEWAL_EDP

/// Velocidade de ataque da renova��o
/// Dentro dos par�metros da renova��o a velocidade de ataque:
/// - Ter� penalidade e redu��o de velocidade de ataque conforme escudos utilizados.
/// - O status de AGI (agilidade) ter�o grande influ�ncia no c�lculo da f�rmula.
/// - Algumas habilidades e itens mudam a f�rmula de bonificar velocidade de ataque, para valores fixos.
//#define RENEWAL_ASPD

#endif // DISABLE_RENEWAL
#undef DISABLE_RENEWAL

#endif // CONFIG_RENEWAL_H
