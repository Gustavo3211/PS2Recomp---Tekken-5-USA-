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

// Function: sub_002D9700
// Address: 0x2d9700 - 0x2d9ad0
void sub_002D9700_0x2d9700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9700_0x2d9700");
#endif

    switch (ctx->pc) {
        case 0x2d97a8u: goto label_2d97a8;
        case 0x2d98a4u: goto label_2d98a4;
        case 0x2d98b8u: goto label_2d98b8;
        case 0x2d98ccu: goto label_2d98cc;
        case 0x2d98e0u: goto label_2d98e0;
        default: break;
    }

    ctx->pc = 0x2d9700u;

    // 0x2d9700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d9700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d9704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9708: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d9708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d970c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d970cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9710: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d9710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d9714: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d9714u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9718: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d9718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d971c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d971cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d9720: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d9720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d9724: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d9724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d9728: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d9728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d972c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2d9730: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2d9730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2d9734: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d9734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d9738: 0x126000d8  beqz        $s3, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2D9738u;
    {
        const bool branch_taken_0x2d9738 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9738u;
        // 0x2d973c: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9738) {
            ctx->pc = 0x2D9A9Cu;
            goto label_2d9a9c;
        }
    }
    ctx->pc = 0x2D9740u;
    // 0x2d9740: 0x680000d  bltz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x2D9740u;
    {
        const bool branch_taken_0x2d9740 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2D9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9740u;
        // 0x2d9744: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9740) {
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D9748u;
    // 0x2d9748: 0x2685ffff  addiu       $a1, $s4, -0x1
    ctx->pc = 0x2d9748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2d974c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x2d974cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d9750: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x2d9750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x2d9754: 0x24637d00  addiu       $v1, $v1, 0x7D00
    ctx->pc = 0x2d9754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32000));
    // 0x2d9758: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d9758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d975c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9760: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9760u;
    {
        const bool branch_taken_0x2d9760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9760) {
            ctx->pc = 0x2D9764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9760u;
            // 0x2d9764: 0x94860000  lhu         $a2, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D977Cu;
            goto label_2d977c;
        }
    }
    ctx->pc = 0x2D9768u;
    // 0x2d9768: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2d9768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2d976c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x2d976cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x2d9770: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x2d9770u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x2d9774: 0xac207d40  sw          $zero, 0x7D40($at)
    ctx->pc = 0x2d9774u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32064), GPR_U32(ctx, 0));
label_2d9778:
    // 0x2d9778: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x2d9778u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2d977c:
    // 0x2d977c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d977cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9780: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d9780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d9784: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2d9784u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9788: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d9788u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d978c: 0x10c000b9  beqz        $a2, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2D978Cu;
    {
        const bool branch_taken_0x2d978c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D978Cu;
        // 0x2d9790: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d978c) {
            ctx->pc = 0x2D9A74u;
            goto label_2d9a74;
        }
    }
    ctx->pc = 0x2D9794u;
    // 0x2d9794: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2d9794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2d9798: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d9798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d979c: 0x24bee7e8  addiu       $fp, $a1, -0x1818
    ctx->pc = 0x2d979cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961128));
    // 0x2d97a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2d97a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97a4: 0x249278b0  addiu       $s2, $a0, 0x78B0
    ctx->pc = 0x2d97a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 30896));
label_2d97a8:
    // 0x2d97a8: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x2d97a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2d97ac: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2d97acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2d97b0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D97B0u;
    {
        const bool branch_taken_0x2d97b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97B0u;
        // 0x2d97b4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97b0) {
            ctx->pc = 0x2D97D0u;
            goto label_2d97d0;
        }
    }
    ctx->pc = 0x2D97B8u;
    // 0x2d97b8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D97B8u;
    {
        const bool branch_taken_0x2d97b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97B8u;
        // 0x2d97bc: 0x2402005b  addiu       $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97b8) {
            ctx->pc = 0x2D97D0u;
            goto label_2d97d0;
        }
    }
    ctx->pc = 0x2D97C0u;
    // 0x2d97c0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D97C0u;
    {
        const bool branch_taken_0x2d97c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97C0u;
        // 0x2d97c4: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97c0) {
            ctx->pc = 0x2D97D0u;
            goto label_2d97d0;
        }
    }
    ctx->pc = 0x2D97C8u;
    // 0x2d97c8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D97C8u;
    {
        const bool branch_taken_0x2d97c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97C8u;
        // 0x2d97cc: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97c8) {
            ctx->pc = 0x2D97D8u;
            goto label_2d97d8;
        }
    }
    ctx->pc = 0x2D97D0u;
label_2d97d0:
    // 0x2d97d0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2d97d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2d97d4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2d97d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_2d97d8:
    // 0x2d97d8: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x2d97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2d97dc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D97DCu;
    {
        const bool branch_taken_0x2d97dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97DCu;
        // 0x2d97e0: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97dc) {
            ctx->pc = 0x2D97FCu;
            goto label_2d97fc;
        }
    }
    ctx->pc = 0x2D97E4u;
    // 0x2d97e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D97E4u;
    {
        const bool branch_taken_0x2d97e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97E4u;
        // 0x2d97e8: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97e4) {
            ctx->pc = 0x2D97FCu;
            goto label_2d97fc;
        }
    }
    ctx->pc = 0x2D97ECu;
    // 0x2d97ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D97ECu;
    {
        const bool branch_taken_0x2d97ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97ECu;
        // 0x2d97f0: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97ec) {
            ctx->pc = 0x2D97FCu;
            goto label_2d97fc;
        }
    }
    ctx->pc = 0x2D97F4u;
    // 0x2d97f4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D97F4u;
    {
        const bool branch_taken_0x2d97f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d97f4) {
            ctx->pc = 0x2D9800u;
            goto label_2d9800;
        }
    }
    ctx->pc = 0x2D97FCu;
label_2d97fc:
    // 0x2d97fc: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x2d97fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_2d9800:
    // 0x2d9800: 0x16c00051  bnez        $s6, . + 4 + (0x51 << 2)
    ctx->pc = 0x2D9800u;
    {
        const bool branch_taken_0x2d9800 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9800u;
        // 0x2d9804: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9800) {
            ctx->pc = 0x2D9948u;
            goto label_2d9948;
        }
    }
    ctx->pc = 0x2D9808u;
    // 0x2d9808: 0x3403dfff  ori         $v1, $zero, 0xDFFF
    ctx->pc = 0x2d9808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57343);
    // 0x2d980c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2d980cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d9810: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2D9810u;
    {
        const bool branch_taken_0x2d9810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9810u;
        // 0x2d9814: 0x3403e023  ori         $v1, $zero, 0xE023 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57379);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9810) {
            ctx->pc = 0x2D9948u;
            goto label_2d9948;
        }
    }
    ctx->pc = 0x2D9818u;
    // 0x2d9818: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2d9818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d981c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2D981Cu;
    {
        const bool branch_taken_0x2d981c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d981c) {
            ctx->pc = 0x2D9948u;
            goto label_2d9948;
        }
    }
    ctx->pc = 0x2D9824u;
    // 0x2d9824: 0x6800044  bltz        $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x2D9824u;
    {
        const bool branch_taken_0x2d9824 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2D9828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9824u;
        // 0x2d9828: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9824) {
            ctx->pc = 0x2D9938u;
            goto label_2d9938;
        }
    }
    ctx->pc = 0x2D982Cu;
    // 0x2d982c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x2d982cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x2d9830: 0x24637d00  addiu       $v1, $v1, 0x7D00
    ctx->pc = 0x2d9830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32000));
    // 0x2d9834: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x2d9834u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d9838: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2d9838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d983c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9840: 0x2e2182a  slt         $v1, $s7, $v0
    ctx->pc = 0x2d9840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d9844: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9844u;
    {
        const bool branch_taken_0x2d9844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9844) {
            ctx->pc = 0x2D9858u;
            goto label_2d9858;
        }
    }
    ctx->pc = 0x2D984Cu;
    // 0x2d984c: 0x3c0780d0  lui         $a3, 0x80D0
    ctx->pc = 0x2d984cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32976 << 16));
    // 0x2d9850: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d9850u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d9854: 0x34e7d0d0  ori         $a3, $a3, 0xD0D0
    ctx->pc = 0x2d9854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53456);
label_2d9858:
    // 0x2d9858: 0x16e2002d  bne         $s7, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D9858u;
    {
        const bool branch_taken_0x2d9858 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9858u;
        // 0x2d985c: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9858) {
            ctx->pc = 0x2D9910u;
            goto label_2d9910;
        }
    }
    ctx->pc = 0x2D9860u;
    // 0x2d9860: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x2d9860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x2d9864: 0x24637d40  addiu       $v1, $v1, 0x7D40
    ctx->pc = 0x2d9864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32064));
    // 0x2d9868: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2d9868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d986c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9870: 0x5460001c  bnel        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D9870u;
    {
        const bool branch_taken_0x2d9870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9870) {
            ctx->pc = 0x2D9874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9870u;
            // 0x2d9874: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D98E4u;
            goto label_2d98e4;
        }
    }
    ctx->pc = 0x2D9878u;
    // 0x2d9878: 0x3403e014  ori         $v1, $zero, 0xE014
    ctx->pc = 0x2d9878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57364);
    // 0x2d987c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2d987cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d9880: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D9880u;
    {
        const bool branch_taken_0x2d9880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9880) {
            ctx->pc = 0x2D9884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9880u;
            // 0x2d9884: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D98E4u;
            goto label_2d98e4;
        }
    }
    ctx->pc = 0x2D9888u;
    // 0x2d9888: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x2d9888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d988c: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x2d988cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9890: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2d9890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2d9894: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9894u;
    {
        const bool branch_taken_0x2d9894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9894) {
            ctx->pc = 0x2D9898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9894u;
            // 0x2d9898: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D98A8u;
            goto label_2d98a8;
        }
    }
    ctx->pc = 0x2D989Cu;
    // 0x2d989c: 0xc091ad2  jal         func_246B48
    ctx->pc = 0x2D989Cu;
    SET_GPR_U32(ctx, 31, 0x2D98A4u);
    ctx->pc = 0x2D98A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D989Cu;
    // 0x2d98a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246B48u, 0x2D989Cu, 0x2D98A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98A4u;
label_2d98a4:
    // 0x2d98a4: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x2d98a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_2d98a8:
    // 0x2d98a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D98A8u;
    {
        const bool branch_taken_0x2d98a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d98a8) {
            ctx->pc = 0x2D98ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D98A8u;
            // 0x2d98ac: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D98BCu;
            goto label_2d98bc;
        }
    }
    ctx->pc = 0x2D98B0u;
    // 0x2d98b0: 0xc091ad2  jal         func_246B48
    ctx->pc = 0x2D98B0u;
    SET_GPR_U32(ctx, 31, 0x2D98B8u);
    ctx->pc = 0x2D98B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D98B0u;
    // 0x2d98b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246B48u, 0x2D98B0u, 0x2D98B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98B8u;
label_2d98b8:
    // 0x2d98b8: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x2d98b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_2d98bc:
    // 0x2d98bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D98BCu;
    {
        const bool branch_taken_0x2d98bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d98bc) {
            ctx->pc = 0x2D98C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D98BCu;
            // 0x2d98c0: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D98D0u;
            goto label_2d98d0;
        }
    }
    ctx->pc = 0x2D98C4u;
    // 0x2d98c4: 0xc091ad2  jal         func_246B48
    ctx->pc = 0x2D98C4u;
    SET_GPR_U32(ctx, 31, 0x2D98CCu);
    ctx->pc = 0x2D98C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D98C4u;
    // 0x2d98c8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246B48u, 0x2D98C4u, 0x2D98CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98CCu;
label_2d98cc:
    // 0x2d98cc: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x2d98ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_2d98d0:
    // 0x2d98d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D98D0u;
    {
        const bool branch_taken_0x2d98d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d98d0) {
            ctx->pc = 0x2D98D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D98D0u;
            // 0x2d98d4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D98E4u;
            goto label_2d98e4;
        }
    }
    ctx->pc = 0x2D98D8u;
    // 0x2d98d8: 0xc091ad2  jal         func_246B48
    ctx->pc = 0x2D98D8u;
    SET_GPR_U32(ctx, 31, 0x2D98E0u);
    ctx->pc = 0x2D98DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D98D8u;
    // 0x2d98dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246B48u, 0x2D98D8u, 0x2D98E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98E0u;
label_2d98e0:
    // 0x2d98e0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2d98e4:
    // 0x2d98e4: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x2d98e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x2d98e8: 0x24847d40  addiu       $a0, $a0, 0x7D40
    ctx->pc = 0x2d98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32064));
    // 0x2d98ec: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2d98ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2d98f0: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x2d98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2d98f4: 0x3c0480d0  lui         $a0, 0x80D0
    ctx->pc = 0x2d98f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32976 << 16));
    // 0x2d98f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d98fc: 0x3484d0d0  ori         $a0, $a0, 0xD0D0
    ctx->pc = 0x2d98fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53456);
    // 0x2d9900: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d9900u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d9904: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x2d9904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2d9908: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x2d9908u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x2d990c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x2d990cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_2d9910:
    // 0x2d9910: 0x24427d00  addiu       $v0, $v0, 0x7D00
    ctx->pc = 0x2d9910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32000));
    // 0x2d9914: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2d9914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d9918: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d991c: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x2d991cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2d9920: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D9920u;
    {
        const bool branch_taken_0x2d9920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9920) {
            ctx->pc = 0x2D9924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9920u;
            // 0x2d9924: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9978u;
            goto label_2d9978;
        }
    }
    ctx->pc = 0x2D9928u;
    // 0x2d9928: 0x3c078040  lui         $a3, 0x8040
    ctx->pc = 0x2d9928u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32832 << 16));
    // 0x2d992c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D992Cu;
    {
        const bool branch_taken_0x2d992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D992Cu;
        // 0x2d9930: 0x34e74040  ori         $a3, $a3, 0x4040 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16448);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d992c) {
            ctx->pc = 0x2D993Cu;
            goto label_2d993c;
        }
    }
    ctx->pc = 0x2D9934u;
    // 0x2d9934: 0x0  nop
    ctx->pc = 0x2d9934u;
    // NOP
label_2d9938:
    // 0x2d9938: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d9938u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2d993c:
    // 0x2d993c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D993Cu;
    {
        const bool branch_taken_0x2d993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D993Cu;
        // 0x2d9940: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d993c) {
            ctx->pc = 0x2D9978u;
            goto label_2d9978;
        }
    }
    ctx->pc = 0x2D9944u;
    // 0x2d9944: 0x0  nop
    ctx->pc = 0x2d9944u;
    // NOP
label_2d9948:
    // 0x2d9948: 0x1ac00009  blez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9948u;
    {
        const bool branch_taken_0x2d9948 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2D994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9948u;
        // 0x2d994c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9948) {
            ctx->pc = 0x2D9970u;
            goto label_2d9970;
        }
    }
    ctx->pc = 0x2D9950u;
    // 0x2d9950: 0x3404dfff  ori         $a0, $zero, 0xDFFF
    ctx->pc = 0x2d9950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57343);
    // 0x2d9954: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2d9954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d9958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9958u;
    {
        const bool branch_taken_0x2d9958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9958u;
        // 0x2d995c: 0x3404e023  ori         $a0, $zero, 0xE023 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57379);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9958) {
            ctx->pc = 0x2D9970u;
            goto label_2d9970;
        }
    }
    ctx->pc = 0x2D9960u;
    // 0x2d9960: 0x3c078040  lui         $a3, 0x8040
    ctx->pc = 0x2d9960u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32832 << 16));
    // 0x2d9964: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2d9964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d9968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9968u;
    {
        const bool branch_taken_0x2d9968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9968u;
        // 0x2d996c: 0x34e74040  ori         $a3, $a3, 0x4040 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16448);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9968) {
            ctx->pc = 0x2D9978u;
            goto label_2d9978;
        }
    }
    ctx->pc = 0x2D9970u;
label_2d9970:
    // 0x2d9970: 0x3c0780d0  lui         $a3, 0x80D0
    ctx->pc = 0x2d9970u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32976 << 16));
    // 0x2d9974: 0x34e7d0d0  ori         $a3, $a3, 0xD0D0
    ctx->pc = 0x2d9974u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53456);
label_2d9978:
    // 0x2d9978: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d9978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d997c: 0x1047002a  beq         $v0, $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D997Cu;
    {
        const bool branch_taken_0x2d997c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2d997c) {
            ctx->pc = 0x2D9A28u;
            goto label_2d9a28;
        }
    }
    ctx->pc = 0x2D9984u;
    // 0x2d9984: 0x6800037  bltz        $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D9984u;
    {
        const bool branch_taken_0x2d9984 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2D9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9984u;
        // 0x2d9988: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9984) {
            ctx->pc = 0x2D9A64u;
            goto label_2d9a64;
        }
    }
    ctx->pc = 0x2D998Cu;
    // 0x2d998c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d998cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d9990: 0x2465e7e0  addiu       $a1, $v1, -0x1820
    ctx->pc = 0x2d9990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961120));
    // 0x2d9994: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d9994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d9998: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d9998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d999c: 0x8c6390d0  lw          $v1, -0x6F30($v1)
    ctx->pc = 0x2d999cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D78B0u));
    // 0x2d99a0: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x2d99a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d99a4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D99A4u;
    {
        const bool branch_taken_0x2d99a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d99a4) {
            ctx->pc = 0x2D99A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D99A4u;
            // 0x2d99a8: 0x30e4ffff  andi        $a0, $a3, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9A08u;
            goto label_2d9a08;
        }
    }
    ctx->pc = 0x2D99ACu;
    // 0x2d99ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d99acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d99b0: 0x2404fff2  addiu       $a0, $zero, -0xE
    ctx->pc = 0x2d99b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x2d99b4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d99b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d99bc: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2d99bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2d99c0: 0xa46400a0  sh          $a0, 0xA0($v1)
    ctx->pc = 0x2d99c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d99c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2d99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2d99c8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d99cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d99ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d99d0: 0x8c6390d0  lw          $v1, -0x6F30($v1)
    ctx->pc = 0x2d99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938832)));
    // 0x2d99d4: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x2d99d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d99d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D99D8u;
    {
        const bool branch_taken_0x2d99d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99D8u;
        // 0x2d99dc: 0x30e4ffff  andi        $a0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99d8) {
            ctx->pc = 0x2D9A08u;
            goto label_2d9a08;
        }
    }
    ctx->pc = 0x2D99E0u;
    // 0x2d99e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d99e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d99e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d99e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d99ec: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2d99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2d99f0: 0xa44400a0  sh          $a0, 0xA0($v0)
    ctx->pc = 0x2d99f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d99f4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2d99f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2d99f8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d99fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d9a00: 0x8c6390d0  lw          $v1, -0x6F30($v1)
    ctx->pc = 0x2d9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938832)));
    // 0x2d9a04: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x2d9a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
label_2d9a08:
    // 0x2d9a08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9A08u;
    {
        const bool branch_taken_0x2d9a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A08u;
        // 0x2d9a0c: 0x72402  srl         $a0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a08) {
            ctx->pc = 0x2D9A28u;
            goto label_2d9a28;
        }
    }
    ctx->pc = 0x2D9A10u;
    // 0x2d9a10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9a14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d9a18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d9a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d9a1c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2d9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2d9a20: 0xa44400a0  sh          $a0, 0xA0($v0)
    ctx->pc = 0x2d9a20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d9a24: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2d9a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2d9a28:
    // 0x2d9a28: 0x680000e  bltz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2D9A28u;
    {
        const bool branch_taken_0x2d9a28 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2D9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A28u;
        // 0x2d9a2c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a28) {
            ctx->pc = 0x2D9A64u;
            goto label_2d9a64;
        }
    }
    ctx->pc = 0x2D9A30u;
    // 0x2d9a30: 0x2483e7e0  addiu       $v1, $a0, -0x1820
    ctx->pc = 0x2d9a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    // 0x2d9a34: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d9a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d9a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9a3c: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d9a40: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d9a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d9a44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9A44u;
    {
        const bool branch_taken_0x2d9a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A44u;
        // 0x2d9a48: 0x96640000  lhu         $a0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a44) {
            ctx->pc = 0x2D9A64u;
            goto label_2d9a64;
        }
    }
    ctx->pc = 0x2D9A4Cu;
    // 0x2d9a4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9a50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d9a54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d9a58: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2d9a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2d9a5c: 0xa44400a0  sh          $a0, 0xA0($v0)
    ctx->pc = 0x2d9a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d9a60: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2d9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2d9a64:
    // 0x2d9a64: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x2d9a64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2d9a68: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x2d9a68u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9a6c: 0x14c0ff4e  bnez        $a2, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x2D9A6Cu;
    {
        const bool branch_taken_0x2d9a6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A6Cu;
        // 0x2d9a70: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a6c) {
            ctx->pc = 0x2D97A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d97a8;
        }
    }
    ctx->pc = 0x2D9A74u;
label_2d9a74:
    // 0x2d9a74: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9A74u;
    {
        const bool branch_taken_0x2d9a74 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2D9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A74u;
        // 0x2d9a78: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a74) {
            ctx->pc = 0x2D9A98u;
            goto label_2d9a98;
        }
    }
    ctx->pc = 0x2D9A7Cu;
    // 0x2d9a7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d9a80: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x2d9a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x2d9a84: 0x24217d40  addiu       $at, $at, 0x7D40
    ctx->pc = 0x2d9a84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32064));
    // 0x2d9a88: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x2d9a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2d9a8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9a90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9a94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d9a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d9a98:
    // 0x2d9a98: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2d9a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a9c:
    // 0x2d9a9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d9a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9aa0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d9aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d9aa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d9aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9aa8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d9aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d9aac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d9aacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9ab0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d9ab0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d9ab4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d9ab4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9ab8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d9ab8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d9abc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2d9abcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9ac0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d9ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d9ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AC4u;
        // 0x2d9ac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9ACCu;
    // 0x2d9acc: 0x0  nop
    ctx->pc = 0x2d9accu;
    // NOP
    ctx->pc = 0x2d9ad0u;
}
