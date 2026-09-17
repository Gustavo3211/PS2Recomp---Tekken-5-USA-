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

// Function: sub_002429D0
// Address: 0x2429d0 - 0x242a88
void sub_002429D0_0x2429d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002429D0_0x2429d0");
#endif

    switch (ctx->pc) {
        case 0x2429f8u: goto label_2429f8;
        case 0x242a70u: goto label_242a70;
        default: break;
    }

    ctx->pc = 0x2429d0u;

    // 0x2429d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2429d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2429d4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2429d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2429d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2429d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2429dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2429dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2429e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2429e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2429e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2429e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2429e8: 0x244437e0  addiu       $a0, $v0, 0x37E0
    ctx->pc = 0x2429e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    // 0x2429ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2429ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2429f0: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2429F0u;
    SET_GPR_U32(ctx, 31, 0x2429F8u);
    ctx->pc = 0x2429F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2429F0u;
    // 0x2429f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2429F0u, 0x2429F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429F8u;
label_2429f8:
    // 0x2429f8: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2429f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2429fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2429fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x242a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x242a04: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x242a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x242a08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x242a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x242a0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x242A0Cu;
    {
        const bool branch_taken_0x242a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A0Cu;
        // 0x242a10: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a0c) {
            ctx->pc = 0x242A28u;
            goto label_242a28;
        }
    }
    ctx->pc = 0x242A14u;
    // 0x242a14: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x242a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x242a18: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x242a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a1c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x242a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x242a20: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x242A20u;
    {
        const bool branch_taken_0x242a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A20u;
        // 0x242a24: 0x24e7008c  addiu       $a3, $a3, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a20) {
            ctx->pc = 0x242A38u;
            goto label_242a38;
        }
    }
    ctx->pc = 0x242A28u;
label_242a28:
    // 0x242a28: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x242a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x242a2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x242a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a30: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x242a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x242a34: 0x24e7008c  addiu       $a3, $a3, 0x8C
    ctx->pc = 0x242a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 140));
label_242a38:
    // 0x242a38: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x242a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x242a3c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x242A3Cu;
    {
        const bool branch_taken_0x242a3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x242a3c) {
            ctx->pc = 0x242A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242A3Cu;
            // 0x242a40: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242A58u;
            goto label_242a58;
        }
    }
    ctx->pc = 0x242A44u;
    // 0x242a44: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x242a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x242a48: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x242a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x242a4c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242A4Cu;
    {
        const bool branch_taken_0x242a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x242a4c) {
            ctx->pc = 0x242A60u;
            goto label_242a60;
        }
    }
    ctx->pc = 0x242A54u;
    // 0x242a54: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x242a54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_242a58:
    // 0x242a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a5c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x242a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_242a60:
    // 0x242a60: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x242A60u;
    {
        const bool branch_taken_0x242a60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A60u;
        // 0x242a64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a60) {
            ctx->pc = 0x242A74u;
            goto label_242a74;
        }
    }
    ctx->pc = 0x242A68u;
    // 0x242a68: 0xc090a1c  jal         func_242870
    ctx->pc = 0x242A68u;
    SET_GPR_U32(ctx, 31, 0x242A70u);
    ctx->pc = 0x242870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242870u, 0x242A68u, 0x242A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A70u;
label_242a70:
    // 0x242a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242a74:
    // 0x242a74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242a78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x242a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x242A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A7Cu;
        // 0x242a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242A84u;
    // 0x242a84: 0x0  nop
    ctx->pc = 0x242a84u;
    // NOP
    ctx->pc = 0x242a88u;
}
