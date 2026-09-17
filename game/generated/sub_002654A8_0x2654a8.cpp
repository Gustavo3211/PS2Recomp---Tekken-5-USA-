#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002654A8
// Address: 0x2654a8 - 0x265938
void sub_002654A8_0x2654a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002654A8_0x2654a8");
#endif

    switch (ctx->pc) {
        case 0x265718u: goto label_265718;
        case 0x265744u: goto label_265744;
        case 0x265788u: goto label_265788;
        default: break;
    }

    ctx->pc = 0x2654a8u;

    // 0x2654a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2654a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2654ac: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2654acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2654b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2654b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2654b4: 0x8c660320  lw          $a2, 0x320($v1)
    ctx->pc = 0x2654b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x2654b8: 0x30c20205  andi        $v0, $a2, 0x205
    ctx->pc = 0x2654b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)517);
    // 0x2654bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2654bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2654c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2654c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2654c4: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x2654c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x2654c8: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2654c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2654cc: 0x8ca30084  lw          $v1, 0x84($a1)
    ctx->pc = 0x2654ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x2654d0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2654D0u;
    {
        const bool branch_taken_0x2654d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2654D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654D0u;
        // 0x2654d4: 0x8ca20064  lw          $v0, 0x64($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654d0) {
            ctx->pc = 0x2654F8u;
            goto label_2654f8;
        }
    }
    ctx->pc = 0x2654D8u;
    // 0x2654d8: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2654D8u;
    {
        const bool branch_taken_0x2654d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2654DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654D8u;
        // 0x2654dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2654d8) {
            ctx->pc = 0x265508u;
            goto label_265508;
        }
    }
    ctx->pc = 0x2654E0u;
    // 0x2654e0: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x2654e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x2654e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2654E4u;
    {
        const bool branch_taken_0x2654e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2654e4) {
            ctx->pc = 0x2654E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2654E4u;
            // 0x2654e8: 0x8ca20064  lw          $v0, 0x64($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2654F8u;
            goto label_2654f8;
        }
    }
    ctx->pc = 0x2654ECu;
    // 0x2654ec: 0xaca20064  sw          $v0, 0x64($a1)
    ctx->pc = 0x2654ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 2));
    // 0x2654f0: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2654f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2654f4: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x2654f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_2654f8:
    // 0x2654f8: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2654F8u;
    {
        const bool branch_taken_0x2654f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2654f8) {
            ctx->pc = 0x2654FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2654F8u;
            // 0x2654fc: 0x8ca20044  lw          $v0, 0x44($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265514u;
            goto label_265514;
        }
    }
    ctx->pc = 0x265500u;
    // 0x265500: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x265500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x265504: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x265504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_265508:
    // 0x265508: 0xaca20064  sw          $v0, 0x64($a1)
    ctx->pc = 0x265508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 2));
    // 0x26550c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26550cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265510: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x265510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_265514:
    // 0x265514: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265514u;
    {
        const bool branch_taken_0x265514 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x265518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265514u;
        // 0x265518: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265514) {
            ctx->pc = 0x265524u;
            goto label_265524;
        }
    }
    ctx->pc = 0x26551Cu;
    // 0x26551c: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x26551cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x265520: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x265520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_265524:
    // 0x265524: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x265524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x265528: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265528u;
    {
        const bool branch_taken_0x265528 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265528u;
        // 0x26552c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265528) {
            ctx->pc = 0x265538u;
            goto label_265538;
        }
    }
    ctx->pc = 0x265530u;
    // 0x265530: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x265530u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x265534: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x265534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_265538:
    // 0x265538: 0x8ca2007c  lw          $v0, 0x7C($a1)
    ctx->pc = 0x265538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x26553c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26553Cu;
    {
        const bool branch_taken_0x26553c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x265540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26553Cu;
        // 0x265540: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26553c) {
            ctx->pc = 0x26554Cu;
            goto label_26554c;
        }
    }
    ctx->pc = 0x265544u;
    // 0x265544: 0xaca2007c  sw          $v0, 0x7C($a1)
    ctx->pc = 0x265544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 2));
    // 0x265548: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x265548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26554c:
    // 0x26554c: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x26554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x265550: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265550u;
    {
        const bool branch_taken_0x265550 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x265554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265550u;
        // 0x265554: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265550) {
            ctx->pc = 0x265560u;
            goto label_265560;
        }
    }
    ctx->pc = 0x265558u;
    // 0x265558: 0xaca20060  sw          $v0, 0x60($a1)
    ctx->pc = 0x265558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 2));
    // 0x26555c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26555cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_265560:
    // 0x265560: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x265560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x265564: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265564u;
    {
        const bool branch_taken_0x265564 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x265568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265564u;
        // 0x265568: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265564) {
            ctx->pc = 0x265574u;
            goto label_265574;
        }
    }
    ctx->pc = 0x26556Cu;
    // 0x26556c: 0xaca2005c  sw          $v0, 0x5C($a1)
    ctx->pc = 0x26556cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 2));
    // 0x265570: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x265570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_265574:
    // 0x265574: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x265574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x265578: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265578u;
    {
        const bool branch_taken_0x265578 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265578u;
        // 0x26557c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265578) {
            ctx->pc = 0x265588u;
            goto label_265588;
        }
    }
    ctx->pc = 0x265580u;
    // 0x265580: 0xaca20058  sw          $v0, 0x58($a1)
    ctx->pc = 0x265580u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 2));
    // 0x265584: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x265584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_265588:
    // 0x265588: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x265588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x26558c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26558Cu;
    {
        const bool branch_taken_0x26558c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x265590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26558Cu;
        // 0x265590: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26558c) {
            ctx->pc = 0x26559Cu;
            goto label_26559c;
        }
    }
    ctx->pc = 0x265594u;
    // 0x265594: 0xaca200c4  sw          $v0, 0xC4($a1)
    ctx->pc = 0x265594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 2));
    // 0x265598: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x265598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26559c:
    // 0x26559c: 0x8ca200c8  lw          $v0, 0xC8($a1)
    ctx->pc = 0x26559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x2655a0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2655A0u;
    {
        const bool branch_taken_0x2655a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2655A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655A0u;
        // 0x2655a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655a0) {
            ctx->pc = 0x2655B0u;
            goto label_2655b0;
        }
    }
    ctx->pc = 0x2655A8u;
    // 0x2655a8: 0xaca200c8  sw          $v0, 0xC8($a1)
    ctx->pc = 0x2655a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 200), GPR_U32(ctx, 2));
    // 0x2655ac: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2655acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2655b0:
    // 0x2655b0: 0x8ca20310  lw          $v0, 0x310($a1)
    ctx->pc = 0x2655b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 784)));
    // 0x2655b4: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2655B4u;
    {
        const bool branch_taken_0x2655b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2655B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655B4u;
        // 0x2655b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655b4) {
            ctx->pc = 0x2655C4u;
            goto label_2655c4;
        }
    }
    ctx->pc = 0x2655BCu;
    // 0x2655bc: 0xaca20310  sw          $v0, 0x310($a1)
    ctx->pc = 0x2655bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 784), GPR_U32(ctx, 2));
    // 0x2655c0: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2655c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2655c4:
    // 0x2655c4: 0x8ca2029c  lw          $v0, 0x29C($a1)
    ctx->pc = 0x2655c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 668)));
    // 0x2655c8: 0xaca202a8  sw          $v0, 0x2A8($a1)
    ctx->pc = 0x2655c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 680), GPR_U32(ctx, 2));
    // 0x2655cc: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2655ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2655d0: 0x8ca2009c  lw          $v0, 0x9C($a1)
    ctx->pc = 0x2655d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x2655d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2655D4u;
    {
        const bool branch_taken_0x2655d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2655D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655D4u;
        // 0x2655d8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655d4) {
            ctx->pc = 0x265600u;
            goto label_265600;
        }
    }
    ctx->pc = 0x2655DCu;
    // 0x2655dc: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x2655dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2655e0: 0x8ca400a0  lw          $a0, 0xA0($a1)
    ctx->pc = 0x2655e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x2655e4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x2655e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2655e8: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2655E8u;
    {
        const bool branch_taken_0x2655e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2655e8) {
            ctx->pc = 0x2655ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2655E8u;
            // 0x2655ec: 0x8ca20050  lw          $v0, 0x50($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265604u;
            goto label_265604;
        }
    }
    ctx->pc = 0x2655F0u;
    // 0x2655f0: 0xaca000a0  sw          $zero, 0xA0($a1)
    ctx->pc = 0x2655f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 0));
    // 0x2655f4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2655f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2655f8: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x2655f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x2655fc: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2655fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_265600:
    // 0x265600: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x265600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_265604:
    // 0x265604: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x265604u;
    {
        const bool branch_taken_0x265604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265604u;
        // 0x265608: 0x24021052  addiu       $v0, $zero, 0x1052 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265604) {
            ctx->pc = 0x265650u;
            goto label_265650;
        }
    }
    ctx->pc = 0x26560Cu;
    // 0x26560c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26560Cu;
    {
        const bool branch_taken_0x26560c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x265610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26560Cu;
        // 0x265610: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26560c) {
            ctx->pc = 0x265620u;
            goto label_265620;
        }
    }
    ctx->pc = 0x265614u;
    // 0x265614: 0x24023029  addiu       $v0, $zero, 0x3029
    ctx->pc = 0x265614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12329));
    // 0x265618: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265618u;
    {
        const bool branch_taken_0x265618 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x265618) {
            ctx->pc = 0x26561Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265618u;
            // 0x26561c: 0xaca30050  sw          $v1, 0x50($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265628u;
            goto label_265628;
        }
    }
    ctx->pc = 0x265620u;
label_265620:
    // 0x265620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x265620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265624: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x265624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_265628:
    // 0x265628: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26562c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x26562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x265630: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x265630u;
    {
        const bool branch_taken_0x265630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265630u;
        // 0x265634: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265630) {
            ctx->pc = 0x265678u;
            goto label_265678;
        }
    }
    ctx->pc = 0x265638u;
    // 0x265638: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x265638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x26563c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x26563Cu;
    {
        const bool branch_taken_0x26563c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26563c) {
            ctx->pc = 0x265640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26563Cu;
            // 0x265640: 0xac6000ec  sw          $zero, 0xEC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265674u;
            goto label_265674;
        }
    }
    ctx->pc = 0x265644u;
    // 0x265644: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x265644u;
    {
        const bool branch_taken_0x265644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265644u;
        // 0x265648: 0x908201ec  lbu         $v0, 0x1EC($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265644) {
            ctx->pc = 0x26567Cu;
            goto label_26567c;
        }
    }
    ctx->pc = 0x26564Cu;
    // 0x26564c: 0x0  nop
    ctx->pc = 0x26564cu;
    // NOP
label_265650:
    // 0x265650: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265650u;
    {
        const bool branch_taken_0x265650 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x265654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265650u;
        // 0x265654: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265650) {
            ctx->pc = 0x265664u;
            goto label_265664;
        }
    }
    ctx->pc = 0x265658u;
    // 0x265658: 0x24023029  addiu       $v0, $zero, 0x3029
    ctx->pc = 0x265658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12329));
    // 0x26565c: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26565Cu;
    {
        const bool branch_taken_0x26565c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x26565c) {
            ctx->pc = 0x265660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26565Cu;
            // 0x265660: 0xaca30050  sw          $v1, 0x50($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26566Cu;
            goto label_26566c;
        }
    }
    ctx->pc = 0x265664u;
label_265664:
    // 0x265664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x265664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265668: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x265668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_26566c:
    // 0x26566c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265670: 0xac4000ec  sw          $zero, 0xEC($v0)
    ctx->pc = 0x265670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 0));
label_265674:
    // 0x265674: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x265674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_265678:
    // 0x265678: 0x908201ec  lbu         $v0, 0x1EC($a0)
    ctx->pc = 0x265678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 492)));
label_26567c:
    // 0x26567c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26567Cu;
    {
        const bool branch_taken_0x26567c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26567Cu;
        // 0x265680: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26567c) {
            ctx->pc = 0x2656CCu;
            goto label_2656cc;
        }
    }
    ctx->pc = 0x265684u;
    // 0x265684: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x265684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x265688: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x265688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26568c: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x26568cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x265690: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265694: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x265694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x265698: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26569c: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x26569cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x2656a0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2656a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2656a4: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x2656a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x2656a8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2656a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2656ac: 0xac600218  sw          $zero, 0x218($v1)
    ctx->pc = 0x2656acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 0));
    // 0x2656b0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2656b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2656b4: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x2656b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x2656b8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2656b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2656bc: 0xac600144  sw          $zero, 0x144($v1)
    ctx->pc = 0x2656bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 0));
    // 0x2656c0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2656c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2656c4: 0xac4000f8  sw          $zero, 0xF8($v0)
    ctx->pc = 0x2656c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
    // 0x2656c8: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x2656c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_2656cc:
    // 0x2656cc: 0x908201f1  lbu         $v0, 0x1F1($a0)
    ctx->pc = 0x2656ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 497)));
    // 0x2656d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2656D0u;
    {
        const bool branch_taken_0x2656d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656D0u;
        // 0x2656d4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656d0) {
            ctx->pc = 0x2656F0u;
            goto label_2656f0;
        }
    }
    ctx->pc = 0x2656D8u;
    // 0x2656d8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2656d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2656dc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2656dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2656e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2656E0u;
    {
        const bool branch_taken_0x2656e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656E0u;
        // 0x2656e4: 0x8f82aa80  lw          $v0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656e0) {
            ctx->pc = 0x2656F4u;
            goto label_2656f4;
        }
    }
    ctx->pc = 0x2656E8u;
    // 0x2656e8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2656e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2656ec: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x2656ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
label_2656f0:
    // 0x2656f0: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x2656f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_2656f4:
    // 0x2656f4: 0x904301f1  lbu         $v1, 0x1F1($v0)
    ctx->pc = 0x2656f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 497)));
    // 0x2656f8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2656F8u;
    {
        const bool branch_taken_0x2656f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656F8u;
        // 0x2656fc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656f8) {
            ctx->pc = 0x26573Cu;
            goto label_26573c;
        }
    }
    ctx->pc = 0x265700u;
    // 0x265700: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x265700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x265704: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x265704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x265708: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x265708u;
    {
        const bool branch_taken_0x265708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265708) {
            ctx->pc = 0x26573Cu;
            goto label_26573c;
        }
    }
    ctx->pc = 0x265710u;
    // 0x265710: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x265710u;
    SET_GPR_U32(ctx, 31, 0x265718u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x265710u, 0x265718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265718u;
label_265718:
    // 0x265718: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x265718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26571c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x265720: 0x8483035a  lh          $v1, 0x35A($a0)
    ctx->pc = 0x265720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 858)));
    // 0x265724: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x265724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265728u;
    {
        const bool branch_taken_0x265728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265728) {
            ctx->pc = 0x26573Cu;
            goto label_26573c;
        }
    }
    ctx->pc = 0x265730u;
    // 0x265730: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x265730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x265734: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x265734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x265738: 0xac82008c  sw          $v0, 0x8C($a0)
    ctx->pc = 0x265738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
label_26573c:
    // 0x26573c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26573Cu;
    SET_GPR_U32(ctx, 31, 0x265744u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26573Cu, 0x265744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265744u;
label_265744:
    // 0x265744: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x265744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265748: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x265748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26574c: 0x84a30380  lh          $v1, 0x380($a1)
    ctx->pc = 0x26574cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x265750: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x265750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265754: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x265754u;
    {
        const bool branch_taken_0x265754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265754u;
        // 0x265758: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265754) {
            ctx->pc = 0x2657DCu;
            goto label_2657dc;
        }
    }
    ctx->pc = 0x26575Cu;
    // 0x26575c: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x26575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x265760: 0x8c82069c  lw          $v0, 0x69C($a0)
    ctx->pc = 0x265760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
    // 0x265764: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x265764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265768: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x265768u;
    {
        const bool branch_taken_0x265768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265768) {
            ctx->pc = 0x26576Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265768u;
            // 0x26576c: 0x8c82069c  lw          $v0, 0x69C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2657E0u;
            goto label_2657e0;
        }
    }
    ctx->pc = 0x265770u;
    // 0x265770: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x265770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x265774: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x265774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265778: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x265778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x26577c: 0xaca2008c  sw          $v0, 0x8C($a1)
    ctx->pc = 0x26577cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 2));
    // 0x265780: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x265780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x265784: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x265784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_265788:
    // 0x265788: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26578c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x26578cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x265790: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x265790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x265794: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x265794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x265798: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x265798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26579c: 0x8ca2026c  lw          $v0, 0x26C($a1)
    ctx->pc = 0x26579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 620)));
    // 0x2657a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2657a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2657a4: 0x1cc0fff8  bgtz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2657A4u;
    {
        const bool branch_taken_0x2657a4 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2657A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657A4u;
        // 0x2657a8: 0xac820270  sw          $v0, 0x270($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657a4) {
            ctx->pc = 0x265788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265788;
        }
    }
    ctx->pc = 0x2657ACu;
    // 0x2657ac: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2657acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2657b0: 0xac47027c  sw          $a3, 0x27C($v0)
    ctx->pc = 0x2657b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 636), GPR_U32(ctx, 7));
    // 0x2657b4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2657b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2657b8: 0x8c620280  lw          $v0, 0x280($v1)
    ctx->pc = 0x2657b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x2657bc: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2657BCu;
    {
        const bool branch_taken_0x2657bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2657C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657BCu;
        // 0x2657c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657bc) {
            ctx->pc = 0x2657D0u;
            goto label_2657d0;
        }
    }
    ctx->pc = 0x2657C4u;
    // 0x2657c4: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2657c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x2657c8: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x2657c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x2657cc: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2657ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2657d0:
    // 0x2657d0: 0xac640288  sw          $a0, 0x288($v1)
    ctx->pc = 0x2657d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 648), GPR_U32(ctx, 4));
    // 0x2657d4: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2657d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2657d8: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x2657d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_2657dc:
    // 0x2657dc: 0x8c82069c  lw          $v0, 0x69C($a0)
    ctx->pc = 0x2657dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
label_2657e0:
    // 0x2657e0: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x2657e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    // 0x2657e4: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x2657e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2657e8: 0x906201ec  lbu         $v0, 0x1EC($v1)
    ctx->pc = 0x2657e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 492)));
    // 0x2657ec: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2657ECu;
    {
        const bool branch_taken_0x2657ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657ECu;
        // 0x2657f0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657ec) {
            ctx->pc = 0x26592Cu;
            goto label_26592c;
        }
    }
    ctx->pc = 0x2657F4u;
    // 0x2657f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2657f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2657f8: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x2657f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935488)));
    // 0x2657fc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2657FCu;
    {
        const bool branch_taken_0x2657fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x265800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657FCu;
        // 0x265800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657fc) {
            ctx->pc = 0x265810u;
            goto label_265810;
        }
    }
    ctx->pc = 0x265804u;
    // 0x265804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265808: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265808u;
    {
        const bool branch_taken_0x265808 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x265808) {
            ctx->pc = 0x265814u;
            goto label_265814;
        }
    }
    ctx->pc = 0x265810u;
label_265810:
    // 0x265810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x265810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265814:
    // 0x265814: 0x14a00046  bnez        $a1, . + 4 + (0x46 << 2)
    ctx->pc = 0x265814u;
    {
        const bool branch_taken_0x265814 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x265818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265814u;
        // 0x265818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265814) {
            ctx->pc = 0x265930u;
            goto label_265930;
        }
    }
    ctx->pc = 0x26581Cu;
    // 0x26581c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26581cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265820: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x265820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x265824: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x265824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265828: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x265828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x26582c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265830: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x265830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x265834: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265838: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x265838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x26583c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265840: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x265840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x265844: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265848: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x265848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26584c: 0x94820356  lhu         $v0, 0x356($a0)
    ctx->pc = 0x26584cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 854)));
    // 0x265850: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x265850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x265854: 0xa4820356  sh          $v0, 0x356($a0)
    ctx->pc = 0x265854u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 854), (uint16_t)GPR_U32(ctx, 2));
    // 0x265858: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26585c: 0x9462035a  lhu         $v0, 0x35A($v1)
    ctx->pc = 0x26585cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 858)));
    // 0x265860: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x265860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x265864: 0xa462035a  sh          $v0, 0x35A($v1)
    ctx->pc = 0x265864u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 858), (uint16_t)GPR_U32(ctx, 2));
    // 0x265868: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x265868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26586c: 0x84830358  lh          $v1, 0x358($a0)
    ctx->pc = 0x26586cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 856)));
    // 0x265870: 0x84820356  lh          $v0, 0x356($a0)
    ctx->pc = 0x265870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 854)));
    // 0x265874: 0x94850358  lhu         $a1, 0x358($a0)
    ctx->pc = 0x265874u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 856)));
    // 0x265878: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x265878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26587c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26587Cu;
    {
        const bool branch_taken_0x26587c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26587Cu;
        // 0x265880: 0x94830356  lhu         $v1, 0x356($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 854)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26587c) {
            ctx->pc = 0x265888u;
            goto label_265888;
        }
    }
    ctx->pc = 0x265884u;
    // 0x265884: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x265884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_265888:
    // 0x265888: 0xa4850356  sh          $a1, 0x356($a0)
    ctx->pc = 0x265888u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 854), (uint16_t)GPR_U32(ctx, 5));
    // 0x26588c: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26588cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265890: 0x8483035c  lh          $v1, 0x35C($a0)
    ctx->pc = 0x265890u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 860)));
    // 0x265894: 0x8482035a  lh          $v0, 0x35A($a0)
    ctx->pc = 0x265894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 858)));
    // 0x265898: 0x9485035c  lhu         $a1, 0x35C($a0)
    ctx->pc = 0x265898u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 860)));
    // 0x26589c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26589cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2658a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2658A0u;
    {
        const bool branch_taken_0x2658a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658A0u;
        // 0x2658a4: 0x9483035a  lhu         $v1, 0x35A($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 858)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658a0) {
            ctx->pc = 0x2658ACu;
            goto label_2658ac;
        }
    }
    ctx->pc = 0x2658A8u;
    // 0x2658a8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2658a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2658ac:
    // 0x2658ac: 0xa485035a  sh          $a1, 0x35A($a0)
    ctx->pc = 0x2658acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 858), (uint16_t)GPR_U32(ctx, 5));
    // 0x2658b0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2658b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2658b4: 0x8c6202b0  lw          $v0, 0x2B0($v1)
    ctx->pc = 0x2658b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 688)));
    // 0x2658b8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2658B8u;
    {
        const bool branch_taken_0x2658b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658B8u;
        // 0x2658bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658b8) {
            ctx->pc = 0x265930u;
            goto label_265930;
        }
    }
    ctx->pc = 0x2658C0u;
    // 0x2658c0: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2658C0u;
    {
        const bool branch_taken_0x2658c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2658c0) {
            ctx->pc = 0x265930u;
            goto label_265930;
        }
    }
    ctx->pc = 0x2658C8u;
    // 0x2658c8: 0x94620364  lhu         $v0, 0x364($v1)
    ctx->pc = 0x2658c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x2658cc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2658ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2658d0: 0xa4620364  sh          $v0, 0x364($v1)
    ctx->pc = 0x2658d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 868), (uint16_t)GPR_U32(ctx, 2));
    // 0x2658d4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2658d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2658d8: 0x94620360  lhu         $v0, 0x360($v1)
    ctx->pc = 0x2658d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 864)));
    // 0x2658dc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2658dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2658e0: 0xa4620360  sh          $v0, 0x360($v1)
    ctx->pc = 0x2658e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 864), (uint16_t)GPR_U32(ctx, 2));
    // 0x2658e4: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x2658e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2658e8: 0x84830366  lh          $v1, 0x366($a0)
    ctx->pc = 0x2658e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 870)));
    // 0x2658ec: 0x84820364  lh          $v0, 0x364($a0)
    ctx->pc = 0x2658ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x2658f0: 0x94850366  lhu         $a1, 0x366($a0)
    ctx->pc = 0x2658f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 870)));
    // 0x2658f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2658f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2658f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2658F8u;
    {
        const bool branch_taken_0x2658f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658F8u;
        // 0x2658fc: 0x94830364  lhu         $v1, 0x364($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658f8) {
            ctx->pc = 0x265904u;
            goto label_265904;
        }
    }
    ctx->pc = 0x265900u;
    // 0x265900: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x265900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_265904:
    // 0x265904: 0xa4850364  sh          $a1, 0x364($a0)
    ctx->pc = 0x265904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 868), (uint16_t)GPR_U32(ctx, 5));
    // 0x265908: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x265908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26590c: 0x84830362  lh          $v1, 0x362($a0)
    ctx->pc = 0x26590cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 866)));
    // 0x265910: 0x84820360  lh          $v0, 0x360($a0)
    ctx->pc = 0x265910u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 864)));
    // 0x265914: 0x94850362  lhu         $a1, 0x362($a0)
    ctx->pc = 0x265914u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 866)));
    // 0x265918: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x265918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26591c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26591Cu;
    {
        const bool branch_taken_0x26591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26591Cu;
        // 0x265920: 0x94830360  lhu         $v1, 0x360($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26591c) {
            ctx->pc = 0x265928u;
            goto label_265928;
        }
    }
    ctx->pc = 0x265924u;
    // 0x265924: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x265924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_265928:
    // 0x265928: 0xa4850360  sh          $a1, 0x360($a0)
    ctx->pc = 0x265928u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 864), (uint16_t)GPR_U32(ctx, 5));
label_26592c:
    // 0x26592c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26592cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_265930:
    // 0x265930: 0x3e00008  jr          $ra
    ctx->pc = 0x265930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265930u;
        // 0x265934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265938u;
}
