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

// Function: sub_0048F2A8
// Address: 0x48f2a8 - 0x48f708
void sub_0048F2A8_0x48f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F2A8_0x48f2a8");
#endif

    switch (ctx->pc) {
        case 0x48f2e0u: goto label_48f2e0;
        case 0x48f348u: goto label_48f348;
        case 0x48f59cu: goto label_48f59c;
        case 0x48f5b0u: goto label_48f5b0;
        case 0x48f5d0u: goto label_48f5d0;
        case 0x48f5f0u: goto label_48f5f0;
        case 0x48f608u: goto label_48f608;
        case 0x48f638u: goto label_48f638;
        case 0x48f650u: goto label_48f650;
        case 0x48f670u: goto label_48f670;
        case 0x48f684u: goto label_48f684;
        case 0x48f6a0u: goto label_48f6a0;
        default: break;
    }

    ctx->pc = 0x48f2a8u;

    // 0x48f2a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48f2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x48f2ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x48f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x48f2b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x48f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x48f2b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x48f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x48f2b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x48f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x48f2bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x48f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x48f2c0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x48f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x48f2c4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x48f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x48f2c8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x48f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x48f2cc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x48f2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x48f2d0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x48f2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x48f2d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x48f2d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48f2dc: 0x0  nop
    ctx->pc = 0x48f2dcu;
    // NOP
label_48f2e0:
    // 0x48f2e0: 0x12a2000d  beq         $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48F2E0u;
    {
        const bool branch_taken_0x48f2e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F2E0u;
        // 0x48f2e4: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f2e0) {
            ctx->pc = 0x48F318u;
            goto label_48f318;
        }
    }
    ctx->pc = 0x48F2E8u;
    // 0x48f2e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48F2E8u;
    {
        const bool branch_taken_0x48f2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F2E8u;
        // 0x48f2ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f2e8) {
            ctx->pc = 0x48F300u;
            goto label_48f300;
        }
    }
    ctx->pc = 0x48F2F0u;
    // 0x48f2f0: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x48F2F0u;
    {
        const bool branch_taken_0x48f2f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F2F0u;
        // 0x48f2f4: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f2f0) {
            ctx->pc = 0x48F310u;
            goto label_48f310;
        }
    }
    ctx->pc = 0x48F2F8u;
    // 0x48f2f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x48F2F8u;
    {
        const bool branch_taken_0x48f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F2F8u;
        // 0x48f2fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f2f8) {
            ctx->pc = 0x48F338u;
            goto label_48f338;
        }
    }
    ctx->pc = 0x48F300u;
label_48f300:
    // 0x48f300: 0x12a20009  beq         $s5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48F300u;
    {
        const bool branch_taken_0x48f300 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F300u;
        // 0x48f304: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f300) {
            ctx->pc = 0x48F328u;
            goto label_48f328;
        }
    }
    ctx->pc = 0x48F308u;
    // 0x48f308: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48F308u;
    {
        const bool branch_taken_0x48f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F308u;
        // 0x48f30c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f308) {
            ctx->pc = 0x48F338u;
            goto label_48f338;
        }
    }
    ctx->pc = 0x48F310u;
label_48f310:
    // 0x48f310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48F310u;
    {
        const bool branch_taken_0x48f310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F310u;
        // 0x48f314: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f310) {
            ctx->pc = 0x48F32Cu;
            goto label_48f32c;
        }
    }
    ctx->pc = 0x48F318u;
label_48f318:
    // 0x48f318: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x48f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x48f31c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48F31Cu;
    {
        const bool branch_taken_0x48f31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F31Cu;
        // 0x48f320: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f31c) {
            ctx->pc = 0x48F330u;
            goto label_48f330;
        }
    }
    ctx->pc = 0x48F324u;
    // 0x48f324: 0x0  nop
    ctx->pc = 0x48f324u;
    // NOP
label_48f328:
    // 0x48f328: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x48f328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_48f32c:
    // 0x48f32c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x48f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_48f330:
    // 0x48f330: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48f330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48f334: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x48f334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48f338:
    // 0x48f338: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x48f338u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48f33c: 0x245e1450  addiu       $fp, $v0, 0x1450
    ctx->pc = 0x48f33cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 5200));
    // 0x48f340: 0x15b8c0  sll         $s7, $s5, 3
    ctx->pc = 0x48f340u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x48f344: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48f344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_48f348:
    // 0x48f348: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x48f348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x48f34c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x48f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48f350: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x48f350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x48f354: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x48f354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x48f358: 0x2463f650  addiu       $v1, $v1, -0x9B0
    ctx->pc = 0x48f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964816));
    // 0x48f35c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x48f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48f360: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x48f360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48f364: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x48f364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x48f368: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x48F368u;
    {
        const bool branch_taken_0x48f368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F368u;
        // 0x48f36c: 0x24930002  addiu       $s3, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f368) {
            ctx->pc = 0x48F6B8u;
            goto label_48f6b8;
        }
    }
    ctx->pc = 0x48F370u;
    // 0x48f370: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48f370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48f374: 0x151200  sll         $v0, $s5, 8
    ctx->pc = 0x48f374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 8));
    // 0x48f378: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x48f378u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48f37c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x48f37cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x48f380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48f384: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x48f384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48f388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48f38c: 0x24639fb0  addiu       $v1, $v1, -0x6050
    ctx->pc = 0x48f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942640));
    // 0x48f390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48f394: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x48f394u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f398: 0x601004d  bgez        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x48F398u;
    {
        const bool branch_taken_0x48f398 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x48F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F398u;
        // 0x48f39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f398) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F3A0u;
    // 0x48f3a0: 0x12160049  beq         $s0, $s6, . + 4 + (0x49 << 2)
    ctx->pc = 0x48F3A0u;
    {
        const bool branch_taken_0x48f3a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x48F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3A0u;
        // 0x48f3a4: 0x2402ffd2  addiu       $v0, $zero, -0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3a0) {
            ctx->pc = 0x48F4C8u;
            goto label_48f4c8;
        }
    }
    ctx->pc = 0x48F3A8u;
    // 0x48f3a8: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x48F3A8u;
    {
        const bool branch_taken_0x48f3a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3A8u;
        // 0x48f3ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3a8) {
            ctx->pc = 0x48F458u;
            goto label_48f458;
        }
    }
    ctx->pc = 0x48F3B0u;
    // 0x48f3b0: 0x2a02ffd3  slti        $v0, $s0, -0x2D
    ctx->pc = 0x48f3b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967251) ? 1 : 0);
    // 0x48f3b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x48F3B4u;
    {
        const bool branch_taken_0x48f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3B4u;
        // 0x48f3b8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3b4) {
            ctx->pc = 0x48F400u;
            goto label_48f400;
        }
    }
    ctx->pc = 0x48F3BCu;
    // 0x48f3bc: 0x2402ffa2  addiu       $v0, $zero, -0x5E
    ctx->pc = 0x48f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x48f3c0: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x48F3C0u;
    {
        const bool branch_taken_0x48f3c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3C0u;
        // 0x48f3c4: 0x2a02ffa3  slti        $v0, $s0, -0x5D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967203) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3c0) {
            ctx->pc = 0x48F480u;
            goto label_48f480;
        }
    }
    ctx->pc = 0x48F3C8u;
    // 0x48f3c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48F3C8u;
    {
        const bool branch_taken_0x48f3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3C8u;
        // 0x48f3cc: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3c8) {
            ctx->pc = 0x48F3E8u;
            goto label_48f3e8;
        }
    }
    ctx->pc = 0x48F3D0u;
    // 0x48f3d0: 0x2402ff01  addiu       $v0, $zero, -0xFF
    ctx->pc = 0x48f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x48f3d4: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x48F3D4u;
    {
        const bool branch_taken_0x48f3d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3D4u;
        // 0x48f3d8: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3d4) {
            ctx->pc = 0x48F448u;
            goto label_48f448;
        }
    }
    ctx->pc = 0x48F3DCu;
    // 0x48f3dc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x48F3DCu;
    {
        const bool branch_taken_0x48f3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3DCu;
        // 0x48f3e0: 0x86630000  lh          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3dc) {
            ctx->pc = 0x48F4D4u;
            goto label_48f4d4;
        }
    }
    ctx->pc = 0x48F3E4u;
    // 0x48f3e4: 0x0  nop
    ctx->pc = 0x48f3e4u;
    // NOP
label_48f3e8:
    // 0x48f3e8: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x48F3E8u;
    {
        const bool branch_taken_0x48f3e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3E8u;
        // 0x48f3ec: 0x2402ffa8  addiu       $v0, $zero, -0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3e8) {
            ctx->pc = 0x48F470u;
            goto label_48f470;
        }
    }
    ctx->pc = 0x48F3F0u;
    // 0x48f3f0: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x48F3F0u;
    {
        const bool branch_taken_0x48f3f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3F0u;
        // 0x48f3f4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3f0) {
            ctx->pc = 0x48F468u;
            goto label_48f468;
        }
    }
    ctx->pc = 0x48F3F8u;
    // 0x48f3f8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x48F3F8u;
    {
        const bool branch_taken_0x48f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F3F8u;
        // 0x48f3fc: 0x86630000  lh          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f3f8) {
            ctx->pc = 0x48F4D4u;
            goto label_48f4d4;
        }
    }
    ctx->pc = 0x48F400u;
label_48f400:
    // 0x48f400: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x48F400u;
    {
        const bool branch_taken_0x48f400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F400u;
        // 0x48f404: 0x2a02fff6  slti        $v0, $s0, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f400) {
            ctx->pc = 0x48F4A0u;
            goto label_48f4a0;
        }
    }
    ctx->pc = 0x48F408u;
    // 0x48f408: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48F408u;
    {
        const bool branch_taken_0x48f408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F408u;
        // 0x48f40c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f408) {
            ctx->pc = 0x48F430u;
            goto label_48f430;
        }
    }
    ctx->pc = 0x48F410u;
    // 0x48f410: 0x2402ffe8  addiu       $v0, $zero, -0x18
    ctx->pc = 0x48f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
    // 0x48f414: 0x12020028  beq         $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x48F414u;
    {
        const bool branch_taken_0x48f414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F414u;
        // 0x48f418: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f414) {
            ctx->pc = 0x48F4B8u;
            goto label_48f4b8;
        }
    }
    ctx->pc = 0x48F41Cu;
    // 0x48f41c: 0x12030024  beq         $s0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x48F41Cu;
    {
        const bool branch_taken_0x48f41c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x48F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F41Cu;
        // 0x48f420: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f41c) {
            ctx->pc = 0x48F4B0u;
            goto label_48f4b0;
        }
    }
    ctx->pc = 0x48F424u;
    // 0x48f424: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x48F424u;
    {
        const bool branch_taken_0x48f424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F424u;
        // 0x48f428: 0x86630000  lh          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f424) {
            ctx->pc = 0x48F4D4u;
            goto label_48f4d4;
        }
    }
    ctx->pc = 0x48F42Cu;
    // 0x48f42c: 0x0  nop
    ctx->pc = 0x48f42cu;
    // NOP
label_48f430:
    // 0x48f430: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x48F430u;
    {
        const bool branch_taken_0x48f430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F430u;
        // 0x48f434: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f430) {
            ctx->pc = 0x48F490u;
            goto label_48f490;
        }
    }
    ctx->pc = 0x48F438u;
    // 0x48f438: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48F438u;
    {
        const bool branch_taken_0x48f438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F438u;
        // 0x48f43c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f438) {
            ctx->pc = 0x48F450u;
            goto label_48f450;
        }
    }
    ctx->pc = 0x48F440u;
    // 0x48f440: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x48F440u;
    {
        const bool branch_taken_0x48f440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F440u;
        // 0x48f444: 0x86630000  lh          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f440) {
            ctx->pc = 0x48F4D4u;
            goto label_48f4d4;
        }
    }
    ctx->pc = 0x48F448u;
label_48f448:
    // 0x48f448: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x48F448u;
    {
        const bool branch_taken_0x48f448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F448u;
        // 0x48f44c: 0x2452abb0  addiu       $s2, $v0, -0x5450 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f448) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F450u;
label_48f450:
    // 0x48f450: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x48F450u;
    {
        const bool branch_taken_0x48f450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F450u;
        // 0x48f454: 0x2452abb8  addiu       $s2, $v0, -0x5448 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f450) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F458u;
label_48f458:
    // 0x48f458: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48f458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48f45c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x48F45Cu;
    {
        const bool branch_taken_0x48f45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F45Cu;
        // 0x48f460: 0x2452abc0  addiu       $s2, $v0, -0x5440 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f45c) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F464u;
    // 0x48f464: 0x0  nop
    ctx->pc = 0x48f464u;
    // NOP
label_48f468:
    // 0x48f468: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x48F468u;
    {
        const bool branch_taken_0x48f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F468u;
        // 0x48f46c: 0x2452abc8  addiu       $s2, $v0, -0x5438 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f468) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F470u;
label_48f470:
    // 0x48f470: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48f474: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x48F474u;
    {
        const bool branch_taken_0x48f474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F474u;
        // 0x48f478: 0x2452abd0  addiu       $s2, $v0, -0x5430 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f474) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F47Cu;
    // 0x48f47c: 0x0  nop
    ctx->pc = 0x48f47cu;
    // NOP
label_48f480:
    // 0x48f480: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48f480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48f484: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x48F484u;
    {
        const bool branch_taken_0x48f484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F484u;
        // 0x48f488: 0x2452abd8  addiu       $s2, $v0, -0x5428 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f484) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F48Cu;
    // 0x48f48c: 0x0  nop
    ctx->pc = 0x48f48cu;
    // NOP
label_48f490:
    // 0x48f490: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48f490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48f494: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x48F494u;
    {
        const bool branch_taken_0x48f494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F494u;
        // 0x48f498: 0x2452abe0  addiu       $s2, $v0, -0x5420 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f494) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F49Cu;
    // 0x48f49c: 0x0  nop
    ctx->pc = 0x48f49cu;
    // NOP
label_48f4a0:
    // 0x48f4a0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48f4a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x48F4A4u;
    {
        const bool branch_taken_0x48f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F4A4u;
        // 0x48f4a8: 0x2452abe8  addiu       $s2, $v0, -0x5418 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4a4) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F4ACu;
    // 0x48f4ac: 0x0  nop
    ctx->pc = 0x48f4acu;
    // NOP
label_48f4b0:
    // 0x48f4b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48F4B0u;
    {
        const bool branch_taken_0x48f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F4B0u;
        // 0x48f4b4: 0x2452abf0  addiu       $s2, $v0, -0x5410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4b0) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F4B8u;
label_48f4b8:
    // 0x48f4b8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48f4bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48F4BCu;
    {
        const bool branch_taken_0x48f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F4BCu;
        // 0x48f4c0: 0x2452abf8  addiu       $s2, $v0, -0x5408 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4bc) {
            ctx->pc = 0x48F4D0u;
            goto label_48f4d0;
        }
    }
    ctx->pc = 0x48F4C4u;
    // 0x48f4c4: 0x0  nop
    ctx->pc = 0x48f4c4u;
    // NOP
label_48f4c8:
    // 0x48f4c8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x48F4C8u;
    {
        const bool branch_taken_0x48f4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F4C8u;
        // 0x48f4cc: 0xa4960000  sh          $s6, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4c8) {
            ctx->pc = 0x48F6B8u;
            goto label_48f6b8;
        }
    }
    ctx->pc = 0x48F4D0u;
label_48f4d0:
    // 0x48f4d0: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x48f4d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_48f4d4:
    // 0x48f4d4: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x48f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x48f4d8: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x48F4D8u;
    {
        const bool branch_taken_0x48f4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F4D8u;
        // 0x48f4dc: 0x28620082  slti        $v0, $v1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4d8) {
            ctx->pc = 0x48F690u;
            goto label_48f690;
        }
    }
    ctx->pc = 0x48F4E0u;
    // 0x48f4e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48F4E0u;
    {
        const bool branch_taken_0x48f4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F4E0u;
        // 0x48f4e4: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4e0) {
            ctx->pc = 0x48F500u;
            goto label_48f500;
        }
    }
    ctx->pc = 0x48F4E8u;
    // 0x48f4e8: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x48F4E8u;
    {
        const bool branch_taken_0x48f4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F4E8u;
        // 0x48f4ec: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4e8) {
            ctx->pc = 0x48F5E0u;
            goto label_48f5e0;
        }
    }
    ctx->pc = 0x48F4F0u;
    // 0x48f4f0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48F4F0u;
    {
        const bool branch_taken_0x48f4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48f4f0) {
            ctx->pc = 0x48F518u;
            goto label_48f518;
        }
    }
    ctx->pc = 0x48F4F8u;
    // 0x48f4f8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x48F4F8u;
    {
        const bool branch_taken_0x48f4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F4F8u;
        // 0x48f4fc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f4f8) {
            ctx->pc = 0x48F6BCu;
            goto label_48f6bc;
        }
    }
    ctx->pc = 0x48F500u;
label_48f500:
    // 0x48f500: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x48F500u;
    {
        const bool branch_taken_0x48f500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F500u;
        // 0x48f504: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f500) {
            ctx->pc = 0x48F5F8u;
            goto label_48f5f8;
        }
    }
    ctx->pc = 0x48F508u;
    // 0x48f508: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x48F508u;
    {
        const bool branch_taken_0x48f508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48f508) {
            ctx->pc = 0x48F640u;
            goto label_48f640;
        }
    }
    ctx->pc = 0x48F510u;
    // 0x48f510: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x48F510u;
    {
        const bool branch_taken_0x48f510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F510u;
        // 0x48f514: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f510) {
            ctx->pc = 0x48F6BCu;
            goto label_48f6bc;
        }
    }
    ctx->pc = 0x48F518u;
label_48f518:
    // 0x48f518: 0x14a0002b  bnez        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x48F518u;
    {
        const bool branch_taken_0x48f518 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F518u;
        // 0x48f51c: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f518) {
            ctx->pc = 0x48F5C8u;
            goto label_48f5c8;
        }
    }
    ctx->pc = 0x48F520u;
    // 0x48f520: 0x1588c0  sll         $s1, $s5, 3
    ctx->pc = 0x48f520u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x48f524: 0x24451450  addiu       $a1, $v0, 0x1450
    ctx->pc = 0x48f524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5200));
    // 0x48f528: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x48f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x48f52c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48f530: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x48f530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48f534: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48f534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f538: 0x10960018  beq         $a0, $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x48F538u;
    {
        const bool branch_taken_0x48f538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x48F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F538u;
        // 0x48f53c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f538) {
            ctx->pc = 0x48F59Cu;
            goto label_48f59c;
        }
    }
    ctx->pc = 0x48F540u;
    // 0x48f540: 0x16a30014  bne         $s5, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x48F540u;
    {
        const bool branch_taken_0x48f540 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x48F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F540u;
        // 0x48f544: 0x26820010  addiu       $v0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f540) {
            ctx->pc = 0x48F594u;
            goto label_48f594;
        }
    }
    ctx->pc = 0x48F548u;
    // 0x48f548: 0x24c69fb0  addiu       $a2, $a2, -0x6050
    ctx->pc = 0x48f548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942640));
    // 0x48f54c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48f550: 0x8cc30890  lw          $v1, 0x890($a2)
    ctx->pc = 0x48f550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2192)));
    // 0x48f554: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x48f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48f558: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x48f558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f55c: 0x50650010  beql        $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x48F55Cu;
    {
        const bool branch_taken_0x48f55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x48f55c) {
            ctx->pc = 0x48F560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F55Cu;
            // 0x48f560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F5A0u;
            goto label_48f5a0;
        }
    }
    ctx->pc = 0x48F564u;
    // 0x48f564: 0x8cc2088c  lw          $v0, 0x88C($a2)
    ctx->pc = 0x48f564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2188)));
    // 0x48f568: 0x5045000d  beql        $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x48F568u;
    {
        const bool branch_taken_0x48f568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x48f568) {
            ctx->pc = 0x48F56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F568u;
            // 0x48f56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F5A0u;
            goto label_48f5a0;
        }
    }
    ctx->pc = 0x48F570u;
    // 0x48f570: 0x8cc20810  lw          $v0, 0x810($a2)
    ctx->pc = 0x48f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2064)));
    // 0x48f574: 0x5045000a  beql        $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x48F574u;
    {
        const bool branch_taken_0x48f574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x48f574) {
            ctx->pc = 0x48F578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F574u;
            // 0x48f578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F5A0u;
            goto label_48f5a0;
        }
    }
    ctx->pc = 0x48F57Cu;
    // 0x48f57c: 0x8cc2080c  lw          $v0, 0x80C($a2)
    ctx->pc = 0x48f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2060)));
    // 0x48f580: 0x50450007  beql        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x48F580u;
    {
        const bool branch_taken_0x48f580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x48f580) {
            ctx->pc = 0x48F584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F580u;
            // 0x48f584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F5A0u;
            goto label_48f5a0;
        }
    }
    ctx->pc = 0x48F588u;
    // 0x48f588: 0x8cc20804  lw          $v0, 0x804($a2)
    ctx->pc = 0x48f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2052)));
    // 0x48f58c: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48F58Cu;
    {
        const bool branch_taken_0x48f58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x48f58c) {
            ctx->pc = 0x48F590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F58Cu;
            // 0x48f590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F5A0u;
            goto label_48f5a0;
        }
    }
    ctx->pc = 0x48F594u;
label_48f594:
    // 0x48f594: 0xc140ebc  jal         func_503AF0
    ctx->pc = 0x48F594u;
    SET_GPR_U32(ctx, 31, 0x48F59Cu);
    ctx->pc = 0x503AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503AF0u, 0x48F594u, 0x48F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F59Cu;
label_48f59c:
    // 0x48f59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48f59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48f5a0:
    // 0x48f5a0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x48f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x48f5a4: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x48f5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x48f5a8: 0xc140eae  jal         func_503AB8
    ctx->pc = 0x48F5A8u;
    SET_GPR_U32(ctx, 31, 0x48F5B0u);
    ctx->pc = 0x48F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F5A8u;
    // 0x48f5ac: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503AB8u, 0x48F5A8u, 0x48F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F5B0u;
label_48f5b0:
    // 0x48f5b0: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x48f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x48f5b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48f5b8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x48f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x48f5bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48F5BCu;
    {
        const bool branch_taken_0x48f5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F5BCu;
        // 0x48f5c0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f5bc) {
            ctx->pc = 0x48F5D0u;
            goto label_48f5d0;
        }
    }
    ctx->pc = 0x48F5C4u;
    // 0x48f5c4: 0x0  nop
    ctx->pc = 0x48f5c4u;
    // NOP
label_48f5c8:
    // 0x48f5c8: 0xc140ed6  jal         func_503B58
    ctx->pc = 0x48F5C8u;
    SET_GPR_U32(ctx, 31, 0x48F5D0u);
    ctx->pc = 0x48F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F5C8u;
    // 0x48f5cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B58u, 0x48F5C8u, 0x48F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F5D0u;
label_48f5d0:
    // 0x48f5d0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x48f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x48f5d4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x48F5D4u;
    {
        const bool branch_taken_0x48f5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F5D4u;
        // 0x48f5d8: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f5d4) {
            ctx->pc = 0x48F6B8u;
            goto label_48f6b8;
        }
    }
    ctx->pc = 0x48F5DCu;
    // 0x48f5dc: 0x0  nop
    ctx->pc = 0x48f5dcu;
    // NOP
label_48f5e0:
    // 0x48f5e0: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x48F5E0u;
    {
        const bool branch_taken_0x48f5e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f5e0) {
            ctx->pc = 0x48F648u;
            goto label_48f648;
        }
    }
    ctx->pc = 0x48F5E8u;
    // 0x48f5e8: 0xc140ed8  jal         func_503B60
    ctx->pc = 0x48F5E8u;
    SET_GPR_U32(ctx, 31, 0x48F5F0u);
    ctx->pc = 0x48F5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F5E8u;
    // 0x48f5ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B60u, 0x48F5E8u, 0x48F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F5F0u;
label_48f5f0:
    // 0x48f5f0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x48F5F0u;
    {
        const bool branch_taken_0x48f5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F5F0u;
        // 0x48f5f4: 0x2402ff00  addiu       $v0, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f5f0) {
            ctx->pc = 0x48F688u;
            goto label_48f688;
        }
    }
    ctx->pc = 0x48F5F8u;
label_48f5f8:
    // 0x48f5f8: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x48F5F8u;
    {
        const bool branch_taken_0x48f5f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f5f8) {
            ctx->pc = 0x48F698u;
            goto label_48f698;
        }
    }
    ctx->pc = 0x48F600u;
    // 0x48f600: 0xc140ede  jal         func_503B78
    ctx->pc = 0x48F600u;
    SET_GPR_U32(ctx, 31, 0x48F608u);
    ctx->pc = 0x48F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F600u;
    // 0x48f604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B78u, 0x48F600u, 0x48F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F608u;
label_48f608:
    // 0x48f608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48f608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f60c: 0x4800028  bltz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x48F60Cu;
    {
        const bool branch_taken_0x48f60c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x48F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F60Cu;
        // 0x48f610: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f60c) {
            ctx->pc = 0x48F6B0u;
            goto label_48f6b0;
        }
    }
    ctx->pc = 0x48F614u;
    // 0x48f614: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x48F614u;
    {
        const bool branch_taken_0x48f614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x48F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F614u;
        // 0x48f618: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f614) {
            ctx->pc = 0x48F630u;
            goto label_48f630;
        }
    }
    ctx->pc = 0x48F61Cu;
    // 0x48f61c: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x48f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x48f620: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x48f620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x48f624: 0x2021826  xor         $v1, $s0, $v0
    ctx->pc = 0x48f624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x48f628: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x48f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x48f62c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x48f62cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_48f630:
    // 0x48f630: 0xc140edc  jal         func_503B70
    ctx->pc = 0x48F630u;
    SET_GPR_U32(ctx, 31, 0x48F638u);
    ctx->pc = 0x503B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B70u, 0x48F630u, 0x48F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F638u;
label_48f638:
    // 0x48f638: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x48F638u;
    {
        const bool branch_taken_0x48f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F638u;
        // 0x48f63c: 0x2403ff00  addiu       $v1, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f638) {
            ctx->pc = 0x48F6B4u;
            goto label_48f6b4;
        }
    }
    ctx->pc = 0x48F640u;
label_48f640:
    // 0x48f640: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x48F640u;
    {
        const bool branch_taken_0x48f640 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f640) {
            ctx->pc = 0x48F668u;
            goto label_48f668;
        }
    }
    ctx->pc = 0x48F648u;
label_48f648:
    // 0x48f648: 0xc140ebc  jal         func_503AF0
    ctx->pc = 0x48F648u;
    SET_GPR_U32(ctx, 31, 0x48F650u);
    ctx->pc = 0x48F64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F648u;
    // 0x48f64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503AF0u, 0x48F648u, 0x48F650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F650u;
label_48f650:
    // 0x48f650: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x48f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x48f654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48f654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48f658: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x48f658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x48f65c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x48F65Cu;
    {
        const bool branch_taken_0x48f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F65Cu;
        // 0x48f660: 0xac560000  sw          $s6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f65c) {
            ctx->pc = 0x48F684u;
            goto label_48f684;
        }
    }
    ctx->pc = 0x48F664u;
    // 0x48f664: 0x0  nop
    ctx->pc = 0x48f664u;
    // NOP
label_48f668:
    // 0x48f668: 0xc140ede  jal         func_503B78
    ctx->pc = 0x48F668u;
    SET_GPR_U32(ctx, 31, 0x48F670u);
    ctx->pc = 0x48F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F668u;
    // 0x48f66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B78u, 0x48F668u, 0x48F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F670u;
label_48f670:
    // 0x48f670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48f670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f674: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48F674u;
    {
        const bool branch_taken_0x48f674 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x48f674) {
            ctx->pc = 0x48F678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F674u;
            // 0x48f678: 0x2402ff00  addiu       $v0, $zero, -0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F688u;
            goto label_48f688;
        }
    }
    ctx->pc = 0x48F67Cu;
    // 0x48f67c: 0xc140edc  jal         func_503B70
    ctx->pc = 0x48F67Cu;
    SET_GPR_U32(ctx, 31, 0x48F684u);
    ctx->pc = 0x48F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F67Cu;
    // 0x48f680: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B70u, 0x48F67Cu, 0x48F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F684u;
label_48f684:
    // 0x48f684: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x48f684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_48f688:
    // 0x48f688: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48F688u;
    {
        const bool branch_taken_0x48f688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F688u;
        // 0x48f68c: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f688) {
            ctx->pc = 0x48F6B8u;
            goto label_48f6b8;
        }
    }
    ctx->pc = 0x48F690u;
label_48f690:
    // 0x48f690: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48F690u;
    {
        const bool branch_taken_0x48f690 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F690u;
        // 0x48f694: 0x2403ff00  addiu       $v1, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f690) {
            ctx->pc = 0x48F6B4u;
            goto label_48f6b4;
        }
    }
    ctx->pc = 0x48F698u;
label_48f698:
    // 0x48f698: 0xc140ebc  jal         func_503AF0
    ctx->pc = 0x48F698u;
    SET_GPR_U32(ctx, 31, 0x48F6A0u);
    ctx->pc = 0x48F69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F698u;
    // 0x48f69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503AF0u, 0x48F698u, 0x48F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F6A0u;
label_48f6a0:
    // 0x48f6a0: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x48f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x48f6a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48f6a8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x48f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x48f6ac: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x48f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_48f6b0:
    // 0x48f6b0: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x48f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_48f6b4:
    // 0x48f6b4: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x48f6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_48f6b8:
    // 0x48f6b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x48f6b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_48f6bc:
    // 0x48f6bc: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x48f6bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x48f6c0: 0x1440ff21  bnez        $v0, . + 4 + (-0xDF << 2)
    ctx->pc = 0x48F6C0u;
    {
        const bool branch_taken_0x48f6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F6C0u;
        // 0x48f6c4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f6c0) {
            ctx->pc = 0x48F348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f348;
        }
    }
    ctx->pc = 0x48F6C8u;
    // 0x48f6c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x48f6c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x48f6cc: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x48f6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x48f6d0: 0x5440ff03  bnel        $v0, $zero, . + 4 + (-0xFD << 2)
    ctx->pc = 0x48F6D0u;
    {
        const bool branch_taken_0x48f6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f6d0) {
            ctx->pc = 0x48F6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F6D0u;
            // 0x48f6d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f2e0;
        }
    }
    ctx->pc = 0x48F6D8u;
    // 0x48f6d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x48f6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f6dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x48f6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48f6e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x48f6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48f6e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x48f6e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48f6e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x48f6e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48f6ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x48f6ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48f6f0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x48f6f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48f6f4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x48f6f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48f6f8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x48f6f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48f6fc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x48f6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x48f700: 0x8140ee0  j           func_503B80
    ctx->pc = 0x48F700u;
    ctx->pc = 0x48F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F700u;
    // 0x48f704: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B80u, 0x48F700u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48F708u;
}
