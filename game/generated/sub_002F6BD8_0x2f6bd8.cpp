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

// Function: sub_002F6BD8
// Address: 0x2f6bd8 - 0x2f6cc8
void sub_002F6BD8_0x2f6bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6BD8_0x2f6bd8");
#endif

    switch (ctx->pc) {
        case 0x2f6c18u: goto label_2f6c18;
        case 0x2f6c24u: goto label_2f6c24;
        case 0x2f6c44u: goto label_2f6c44;
        case 0x2f6c50u: goto label_2f6c50;
        case 0x2f6c90u: goto label_2f6c90;
        case 0x2f6ca8u: goto label_2f6ca8;
        default: break;
    }

    ctx->pc = 0x2f6bd8u;

    // 0x2f6bd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f6bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f6bdc: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2f6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x2f6be0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f6be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2f6be4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f6be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6be8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f6be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f6bec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f6becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bf0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2f6bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bf4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f6bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bfc: 0x24654b48  addiu       $a1, $v1, 0x4B48
    ctx->pc = 0x2f6bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 19272));
    // 0x2f6c00: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f6c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f6c04: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f6c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c08: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2f6c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2f6c0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f6c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f6c10: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2F6C10u;
    SET_GPR_U32(ctx, 31, 0x2F6C18u);
    ctx->pc = 0x2F6C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C10u;
    // 0x2f6c14: 0x29880  sll         $s3, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2F6C10u, 0x2F6C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C18u;
label_2f6c18:
    // 0x2f6c18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f6c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c1c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F6C1Cu;
    SET_GPR_U32(ctx, 31, 0x2F6C24u);
    ctx->pc = 0x2F6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C1Cu;
    // 0x2f6c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F6C1Cu, 0x2F6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C24u;
label_2f6c24:
    // 0x2f6c24: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x2f6c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2f6c28: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x2f6c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x2f6c2c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f6c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f6c30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f6c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c38: 0x24a51890  addiu       $a1, $a1, 0x1890
    ctx->pc = 0x2f6c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6288));
    // 0x2f6c3c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2F6C3Cu;
    SET_GPR_U32(ctx, 31, 0x2F6C44u);
    ctx->pc = 0x2F6C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C3Cu;
    // 0x2f6c40: 0x2652015c  addiu       $s2, $s2, 0x15C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2F6C3Cu, 0x2F6C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C44u;
label_2f6c44:
    // 0x2f6c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c48: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F6C48u;
    SET_GPR_U32(ctx, 31, 0x2F6C50u);
    ctx->pc = 0x2F6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C48u;
    // 0x2f6c4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F6C48u, 0x2F6C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C50u;
label_2f6c50:
    // 0x2f6c50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6c54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c58: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f6c5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6C5Cu;
    {
        const bool branch_taken_0x2f6c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C5Cu;
        // 0x2f6c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c5c) {
            ctx->pc = 0x2F6C78u;
            goto label_2f6c78;
        }
    }
    ctx->pc = 0x2F6C64u;
    // 0x2f6c64: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f6c68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f6c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c6c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f6c70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6C70u;
    {
        const bool branch_taken_0x2f6c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C70u;
        // 0x2f6c74: 0x2661021  addu        $v0, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c70) {
            ctx->pc = 0x2F6C88u;
            goto label_2f6c88;
        }
    }
    ctx->pc = 0x2F6C78u;
label_2f6c78:
    // 0x2f6c78: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f6c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f6c7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c80: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f6c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f6c84: 0x2661021  addu        $v0, $s3, $a2
    ctx->pc = 0x2f6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_2f6c88:
    // 0x2f6c88: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2F6C88u;
    SET_GPR_U32(ctx, 31, 0x2F6C90u);
    ctx->pc = 0x2F6C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C88u;
    // 0x2f6c8c: 0xac500094  sw          $s0, 0x94($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2F6C88u, 0x2F6C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C90u;
label_2f6c90:
    // 0x2f6c90: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2f6c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2f6c94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f6c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6ca0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F6CA0u;
    SET_GPR_U32(ctx, 31, 0x2F6CA8u);
    ctx->pc = 0x2F6CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CA0u;
    // 0x2f6ca4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F6CA0u, 0x2F6CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CA8u;
label_2f6ca8:
    // 0x2f6ca8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f6ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6cac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f6cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f6cb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f6cb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6cb4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2f6cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f6cb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f6cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CBCu;
        // 0x2f6cc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6CC4u;
    // 0x2f6cc4: 0x0  nop
    ctx->pc = 0x2f6cc4u;
    // NOP
    ctx->pc = 0x2f6cc8u;
}
