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

// Function: sub_00491628
// Address: 0x491628 - 0x491828
void sub_00491628_0x491628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491628_0x491628");
#endif

    switch (ctx->pc) {
        case 0x491680u: goto label_491680;
        case 0x491730u: goto label_491730;
        case 0x491798u: goto label_491798;
        case 0x491800u: goto label_491800;
        default: break;
    }

    ctx->pc = 0x491628u;

    // 0x491628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x491628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49162c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x49162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x491630: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x491630u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    // 0x491634: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x491634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x491638: 0x3c15007e  lui         $s5, 0x7E
    ctx->pc = 0x491638u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)126 << 16));
    // 0x49163c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x491640: 0x2690d680  addiu       $s0, $s4, -0x2980
    ctx->pc = 0x491640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x491644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x491644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x491648: 0x26b114e4  addiu       $s1, $s5, 0x14E4
    ctx->pc = 0x491648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 5348));
    // 0x49164c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x49164cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7E14E4u));
    // 0x491650: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x491650u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D716u));
    // 0x491654: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x491654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x491658: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x491658u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x49165c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49165cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x491660: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x491660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x491664: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x491664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x491668: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x491668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49166c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49166cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491670: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x491670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x491674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x491674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x491678: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x491678u;
    SET_GPR_U32(ctx, 31, 0x491680u);
    ctx->pc = 0x49167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491678u;
    // 0x49167c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x491678u, 0x491680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491680u;
label_491680:
    // 0x491680: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x491680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x491684: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x491684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x491688: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x491688u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x49168c: 0x248614e8  addiu       $a2, $a0, 0x14E8
    ctx->pc = 0x49168cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5352));
    // 0x491690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x491690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x491694: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x491694u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7E14E8u));
    // 0x491698: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x491698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49169c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x49169cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4916a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4916a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4916a4: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x4916a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x4916a8: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4916a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4916ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4916acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4916b0: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x4916b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4916b4: 0x14a70005  bne         $a1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4916B4u;
    {
        const bool branch_taken_0x4916b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x4916B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4916B4u;
        // 0x4916b8: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4916b4) {
            ctx->pc = 0x4916CCu;
            goto label_4916cc;
        }
    }
    ctx->pc = 0x4916BCu;
    // 0x4916bc: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4916bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4916c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4916c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4916c4: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4916C4u;
    {
        const bool branch_taken_0x4916c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4916C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4916C4u;
        // 0x4916c8: 0x2682d680  addiu       $v0, $s4, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4916c4) {
            ctx->pc = 0x491734u;
            goto label_491734;
        }
    }
    ctx->pc = 0x4916CCu;
label_4916cc:
    // 0x4916cc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4916ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4916d0: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4916d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4916d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4916d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4916d8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4916d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4916dc: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4916dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4916e0: 0x14a70005  bne         $a1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4916E0u;
    {
        const bool branch_taken_0x4916e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x4916E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4916E0u;
        // 0x4916e4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4916e0) {
            ctx->pc = 0x4916F8u;
            goto label_4916f8;
        }
    }
    ctx->pc = 0x4916E8u;
    // 0x4916e8: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4916e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4916ec: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4916ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4916f0: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4916F0u;
    {
        const bool branch_taken_0x4916f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4916F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4916F0u;
        // 0x4916f4: 0x2682d680  addiu       $v0, $s4, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4916f0) {
            ctx->pc = 0x491734u;
            goto label_491734;
        }
    }
    ctx->pc = 0x4916F8u;
label_4916f8:
    // 0x4916f8: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4916f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4916fc: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4916fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x491700: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x491700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x491704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x491704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x491708: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x491708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49170c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49170cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x491710: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x491710u;
    {
        const bool branch_taken_0x491710 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x491714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491710u;
        // 0x491714: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491710) {
            ctx->pc = 0x491728u;
            goto label_491728;
        }
    }
    ctx->pc = 0x491718u;
    // 0x491718: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x491718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49171c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x491720: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x491720u;
    {
        const bool branch_taken_0x491720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x491724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491720u;
        // 0x491724: 0x2682d680  addiu       $v0, $s4, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491720) {
            ctx->pc = 0x491734u;
            goto label_491734;
        }
    }
    ctx->pc = 0x491728u;
label_491728:
    // 0x491728: 0xc123392  jal         func_48CE48
    ctx->pc = 0x491728u;
    SET_GPR_U32(ctx, 31, 0x491730u);
    ctx->pc = 0x49172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491728u;
    // 0x49172c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x491728u, 0x491730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491730u;
label_491730:
    // 0x491730: 0x2682d680  addiu       $v0, $s4, -0x2980
    ctx->pc = 0x491730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
label_491734:
    // 0x491734: 0x84430022  lh          $v1, 0x22($v0)
    ctx->pc = 0x491734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x491738: 0x84440024  lh          $a0, 0x24($v0)
    ctx->pc = 0x491738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x49173c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x49173cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x491740: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x491740u;
    {
        const bool branch_taken_0x491740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x491744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491740u;
        // 0x491744: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491740) {
            ctx->pc = 0x491804u;
            goto label_491804;
        }
    }
    ctx->pc = 0x491748u;
    // 0x491748: 0x26a514e4  addiu       $a1, $s5, 0x14E4
    ctx->pc = 0x491748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5348));
    // 0x49174c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49174cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x491750: 0x8444d642  lh          $a0, -0x29BE($v0)
    ctx->pc = 0x491750u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72D642u));
    // 0x491754: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x491754u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x491758: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x491758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49175c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49175cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x491760: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x491760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x491764: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x491764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x491768: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x491768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49176c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49176cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x491770: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x491770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x491774: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x491774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x491778: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x491778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49177c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49177cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x491780: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x491780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x491784: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x491784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x491788: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x491788u;
    {
        const bool branch_taken_0x491788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491788u;
        // 0x49178c: 0x2667011e  addiu       $a3, $s3, 0x11E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491788) {
            ctx->pc = 0x49179Cu;
            goto label_49179c;
        }
    }
    ctx->pc = 0x491790u;
    // 0x491790: 0xc12456e  jal         func_4915B8
    ctx->pc = 0x491790u;
    SET_GPR_U32(ctx, 31, 0x491798u);
    ctx->pc = 0x4915B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4915B8u, 0x491790u, 0x491798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491798u;
label_491798:
    // 0x491798: 0x2667011e  addiu       $a3, $s3, 0x11E
    ctx->pc = 0x491798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 286));
label_49179c:
    // 0x49179c: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x49179cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4917a0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x4917a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4917a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4917a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4917a8: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4917a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4917ac: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x4917ACu;
    {
        const bool branch_taken_0x4917ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4917B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4917ACu;
        // 0x4917b0: 0xa4e50000  sh          $a1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4917ac) {
            ctx->pc = 0x4917E8u;
            goto label_4917e8;
        }
    }
    ctx->pc = 0x4917B4u;
    // 0x4917b4: 0x2662011a  addiu       $v0, $s3, 0x11A
    ctx->pc = 0x4917b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 282));
    // 0x4917b8: 0x2664011c  addiu       $a0, $s3, 0x11C
    ctx->pc = 0x4917b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    // 0x4917bc: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4917bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4917c0: 0x26660118  addiu       $a2, $s3, 0x118
    ctx->pc = 0x4917c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x4917c4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4917c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4917c8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4917c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4917cc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x4917ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4917d0: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x4917d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4917d4: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4917d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4917d8: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x4917d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x4917dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4917DCu;
    {
        const bool branch_taken_0x4917dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4917E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4917DCu;
        // 0x4917e0: 0xa4c50000  sh          $a1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4917dc) {
            ctx->pc = 0x4917ECu;
            goto label_4917ec;
        }
    }
    ctx->pc = 0x4917E4u;
    // 0x4917e4: 0x0  nop
    ctx->pc = 0x4917e4u;
    // NOP
label_4917e8:
    // 0x4917e8: 0x26660118  addiu       $a2, $s3, 0x118
    ctx->pc = 0x4917e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
label_4917ec:
    // 0x4917ec: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4917ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4917f0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4917F0u;
    {
        const bool branch_taken_0x4917f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4917F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4917F0u;
        // 0x4917f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4917f0) {
            ctx->pc = 0x491804u;
            goto label_491804;
        }
    }
    ctx->pc = 0x4917F8u;
    // 0x4917f8: 0xc12381a  jal         func_48E068
    ctx->pc = 0x4917F8u;
    SET_GPR_U32(ctx, 31, 0x491800u);
    ctx->pc = 0x48E068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E068u, 0x4917F8u, 0x491800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491800u;
label_491800:
    // 0x491800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x491800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_491804:
    // 0x491804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x491804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x491808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x491808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49180c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49180cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x491810: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x491810u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x491814: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x491814u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x491818: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x491818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49181c: 0x3e00008  jr          $ra
    ctx->pc = 0x49181Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49181Cu;
        // 0x491820: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49181Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491824u;
    // 0x491824: 0x0  nop
    ctx->pc = 0x491824u;
    // NOP
    ctx->pc = 0x491828u;
}
