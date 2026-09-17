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

// Function: sub_002E39E8
// Address: 0x2e39e8 - 0x2e3ae0
void sub_002E39E8_0x2e39e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E39E8_0x2e39e8");
#endif

    switch (ctx->pc) {
        case 0x2e3a3cu: goto label_2e3a3c;
        case 0x2e3a84u: goto label_2e3a84;
        case 0x2e3ac0u: goto label_2e3ac0;
        default: break;
    }

    ctx->pc = 0x2e39e8u;

    // 0x2e39e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e39e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e39ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e39f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e39f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e39f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e39f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e39f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e39fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e39fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e3a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e3a04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e3a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e3a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e3a0c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e3a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e3a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e3a14: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2e3a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2e3a18: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2e3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2e3a1c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2e3a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2e3a20: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2e3a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2e3a24: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2e3a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2e3a28: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e3a2c: 0x2442ec88  addiu       $v0, $v0, -0x1378
    ctx->pc = 0x2e3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962312));
    // 0x2e3a30: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x2e3a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x2e3a34: 0xc0c1406  jal         func_305018
    ctx->pc = 0x2E3A34u;
    SET_GPR_U32(ctx, 31, 0x2E3A3Cu);
    ctx->pc = 0x2E3A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A34u;
    // 0x2e3a38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305018u, 0x2E3A34u, 0x2E3A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A3Cu;
label_2e3a3c:
    // 0x2e3a3c: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x2e3a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x2e3a40: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2e3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e3a44: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x2e3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x2e3a48: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x2e3a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
    // 0x2e3a4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e3a50: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e3a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3a58: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x2e3a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x2e3a5c: 0xae130070  sw          $s3, 0x70($s0)
    ctx->pc = 0x2e3a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 19));
    // 0x2e3a60: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3A60u;
    {
        const bool branch_taken_0x2e3a60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A60u;
        // 0x2e3a64: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a60) {
            ctx->pc = 0x2E3A70u;
            goto label_2e3a70;
        }
    }
    ctx->pc = 0x2E3A68u;
    // 0x2e3a68: 0x3c01c3ff  lui         $at, 0xC3FF
    ctx->pc = 0x2e3a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50175 << 16));
    // 0x2e3a6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3a70:
    // 0x2e3a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a7c: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2E3A7Cu;
    SET_GPR_U32(ctx, 31, 0x2E3A84u);
    ctx->pc = 0x2E3A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A7Cu;
    // 0x2e3a80: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2E3A7Cu, 0x2E3A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A84u;
label_2e3a84:
    // 0x2e3a84: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2e3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e3a88: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2e3a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e3a8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e3a90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e3a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e3a94: 0x2442fbc0  addiu       $v0, $v0, -0x440
    ctx->pc = 0x2e3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966208));
    // 0x2e3a98: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2e3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2e3a9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3A9Cu;
    {
        const bool branch_taken_0x2e3a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A9Cu;
        // 0x2e3aa0: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a9c) {
            ctx->pc = 0x2E3AC0u;
            goto label_2e3ac0;
        }
    }
    ctx->pc = 0x2E3AA4u;
    // 0x2e3aa4: 0x0  nop
    ctx->pc = 0x2e3aa4u;
    // NOP
    // 0x2e3aa8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e3aac: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e3ab0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e3ab4: 0x24840438  addiu       $a0, $a0, 0x438
    ctx->pc = 0x2e3ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1080));
    // 0x2e3ab8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E3AB8u;
    SET_GPR_U32(ctx, 31, 0x2E3AC0u);
    ctx->pc = 0x2E3ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3AB8u;
    // 0x2e3abc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E3AB8u, 0x2E3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3AC0u;
label_2e3ac0:
    // 0x2e3ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e3ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3ac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e3ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3ac8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e3ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3acc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e3accu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e3ad0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e3ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3AD4u;
        // 0x2e3ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3ADCu;
    // 0x2e3adc: 0x0  nop
    ctx->pc = 0x2e3adcu;
    // NOP
    ctx->pc = 0x2e3ae0u;
}
