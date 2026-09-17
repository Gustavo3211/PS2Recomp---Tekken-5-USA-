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

// Function: sub_003086D8
// Address: 0x3086d8 - 0x308868
void sub_003086D8_0x3086d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003086D8_0x3086d8");
#endif

    switch (ctx->pc) {
        case 0x308704u: goto label_308704;
        case 0x308794u: goto label_308794;
        case 0x3087b4u: goto label_3087b4;
        case 0x3087d4u: goto label_3087d4;
        case 0x308814u: goto label_308814;
        case 0x308834u: goto label_308834;
        default: break;
    }

    ctx->pc = 0x3086d8u;

    // 0x3086d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3086d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3086dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3086dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3086e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3086e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3086e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3086e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3086e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3086ec: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3086ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3086f0: 0x4420058  bltzl       $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3086F0u;
    {
        const bool branch_taken_0x3086f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3086f0) {
            ctx->pc = 0x3086F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3086F0u;
            // 0x3086f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308854u;
            goto label_308854;
        }
    }
    ctx->pc = 0x3086F8u;
    // 0x3086f8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3086f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3086fc: 0xc0b7208  jal         func_2DC820
    ctx->pc = 0x3086FCu;
    SET_GPR_U32(ctx, 31, 0x308704u);
    ctx->pc = 0x308700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086FCu;
    // 0x308700: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC820u, 0x3086FCu, 0x308704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308704u;
label_308704:
    // 0x308704: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x308704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x308708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x308708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30870c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x30870cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x308710: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x308710u;
    {
        const bool branch_taken_0x308710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308710u;
        // 0x308714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308710) {
            ctx->pc = 0x308734u;
            goto label_308734;
        }
    }
    ctx->pc = 0x308718u;
    // 0x308718: 0x28c20007  slti        $v0, $a2, 0x7
    ctx->pc = 0x308718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x30871c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30871Cu;
    {
        const bool branch_taken_0x30871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30871Cu;
        // 0x308720: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30871c) {
            ctx->pc = 0x308734u;
            goto label_308734;
        }
    }
    ctx->pc = 0x308724u;
    // 0x308724: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x308724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x308728: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x308728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30872c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30872cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x308730: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x308730u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_308734:
    // 0x308734: 0x4800046  bltz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x308734u;
    {
        const bool branch_taken_0x308734 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x308738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308734u;
        // 0x308738: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308734) {
            ctx->pc = 0x308850u;
            goto label_308850;
        }
    }
    ctx->pc = 0x30873Cu;
    // 0x30873c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30873Cu;
    {
        const bool branch_taken_0x30873c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30873Cu;
        // 0x308740: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30873c) {
            ctx->pc = 0x308758u;
            goto label_308758;
        }
    }
    ctx->pc = 0x308744u;
    // 0x308744: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x308744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x308748: 0x5082002f  beql        $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x308748u;
    {
        const bool branch_taken_0x308748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x308748) {
            ctx->pc = 0x30874Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308748u;
            // 0x30874c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308808u;
            goto label_308808;
        }
    }
    ctx->pc = 0x308750u;
    // 0x308750: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x308750u;
    {
        const bool branch_taken_0x308750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308750u;
        // 0x308754: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308750) {
            ctx->pc = 0x308854u;
            goto label_308854;
        }
    }
    ctx->pc = 0x308758u;
label_308758:
    // 0x308758: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x308758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x30875c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x30875cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x308760: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x308760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x308764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x308764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x308768: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x308768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x30876c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x30876cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x308770: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x308770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x308774: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x308774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x308778: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30877c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x308780: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x308780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x308784: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x308784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x308788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30878c: 0xc0b28fc  jal         func_2CA3F0
    ctx->pc = 0x30878Cu;
    SET_GPR_U32(ctx, 31, 0x308794u);
    ctx->pc = 0x308790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30878Cu;
    // 0x308790: 0x2451001c  addiu       $s1, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA3F0u, 0x30878Cu, 0x308794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308794u;
label_308794:
    // 0x308794: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x308794u;
    {
        const bool branch_taken_0x308794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308794u;
        // 0x308798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308794) {
            ctx->pc = 0x3087A0u;
            goto label_3087a0;
        }
    }
    ctx->pc = 0x30879Cu;
    // 0x30879c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30879cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3087a0:
    // 0x3087a0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3087a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3087a4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3087a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3087a8: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x3087a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3087ac: 0xc0b292a  jal         func_2CA4A8
    ctx->pc = 0x3087ACu;
    SET_GPR_U32(ctx, 31, 0x3087B4u);
    ctx->pc = 0x3087B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3087ACu;
    // 0x3087b0: 0x8e07001c  lw          $a3, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA4A8u, 0x3087ACu, 0x3087B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087B4u;
label_3087b4:
    // 0x3087b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3087B4u;
    {
        const bool branch_taken_0x3087b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3087B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087B4u;
        // 0x3087b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087b4) {
            ctx->pc = 0x3087C0u;
            goto label_3087c0;
        }
    }
    ctx->pc = 0x3087BCu;
    // 0x3087bc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3087bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3087c0:
    // 0x3087c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3087c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3087c4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3087C4u;
    {
        const bool branch_taken_0x3087c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3087c4) {
            ctx->pc = 0x3087C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3087C4u;
            // 0x3087c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3087F0u;
            goto label_3087f0;
        }
    }
    ctx->pc = 0x3087CCu;
    // 0x3087cc: 0xc0b2788  jal         func_2C9E20
    ctx->pc = 0x3087CCu;
    SET_GPR_U32(ctx, 31, 0x3087D4u);
    ctx->pc = 0x2C9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E20u, 0x3087CCu, 0x3087D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087D4u;
label_3087d4:
    // 0x3087d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3087d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3087d8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3087d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3087dc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3087DCu;
    {
        const bool branch_taken_0x3087dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3087dc) {
            ctx->pc = 0x3087E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3087DCu;
            // 0x3087e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3087E8u;
            goto label_3087e8;
        }
    }
    ctx->pc = 0x3087E4u;
    // 0x3087e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3087e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3087e8:
    // 0x3087e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3087e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3087ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3087ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3087f0:
    // 0x3087f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3087f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3087f4: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3087F4u;
    {
        const bool branch_taken_0x3087f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3087f4) {
            ctx->pc = 0x3087F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3087F4u;
            // 0x3087f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308854u;
            goto label_308854;
        }
    }
    ctx->pc = 0x3087FCu;
    // 0x3087fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3087FCu;
    {
        const bool branch_taken_0x3087fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087FCu;
        // 0x308800: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087fc) {
            ctx->pc = 0x30884Cu;
            goto label_30884c;
        }
    }
    ctx->pc = 0x308804u;
    // 0x308804: 0x0  nop
    ctx->pc = 0x308804u;
    // NOP
label_308808:
    // 0x308808: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x308808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30880c: 0xc0b2a3c  jal         func_2CA8F0
    ctx->pc = 0x30880Cu;
    SET_GPR_U32(ctx, 31, 0x308814u);
    ctx->pc = 0x308810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30880Cu;
    // 0x308810: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8F0u, 0x30880Cu, 0x308814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308814u;
label_308814:
    // 0x308814: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x308814u;
    {
        const bool branch_taken_0x308814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308814u;
        // 0x308818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308814) {
            ctx->pc = 0x308820u;
            goto label_308820;
        }
    }
    ctx->pc = 0x30881Cu;
    // 0x30881c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30881cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_308820:
    // 0x308820: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x308820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x308824: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x308824u;
    {
        const bool branch_taken_0x308824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308824) {
            ctx->pc = 0x308828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308824u;
            // 0x308828: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308854u;
            goto label_308854;
        }
    }
    ctx->pc = 0x30882Cu;
    // 0x30882c: 0xc0b2788  jal         func_2C9E20
    ctx->pc = 0x30882Cu;
    SET_GPR_U32(ctx, 31, 0x308834u);
    ctx->pc = 0x2C9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E20u, 0x30882Cu, 0x308834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308834u;
label_308834:
    // 0x308834: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x308834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x308838: 0x3463a11f  ori         $v1, $v1, 0xA11F
    ctx->pc = 0x308838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41247);
    // 0x30883c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x30883cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308840: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x308840u;
    {
        const bool branch_taken_0x308840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308840) {
            ctx->pc = 0x308844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308840u;
            // 0x308844: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30884Cu;
            goto label_30884c;
        }
    }
    ctx->pc = 0x308848u;
    // 0x308848: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x308848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30884c:
    // 0x30884c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30884cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_308850:
    // 0x308850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308854:
    // 0x308854: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x308854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x308858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30885c: 0x3e00008  jr          $ra
    ctx->pc = 0x30885Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30885Cu;
        // 0x308860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30885Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308864u;
    // 0x308864: 0x0  nop
    ctx->pc = 0x308864u;
    // NOP
    ctx->pc = 0x308868u;
}
