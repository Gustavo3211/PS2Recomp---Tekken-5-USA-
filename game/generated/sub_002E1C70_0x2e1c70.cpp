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

// Function: sub_002E1C70
// Address: 0x2e1c70 - 0x2e1cf8
void sub_002E1C70_0x2e1c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1C70_0x2e1c70");
#endif

    switch (ctx->pc) {
        case 0x2e1c94u: goto label_2e1c94;
        case 0x2e1cacu: goto label_2e1cac;
        case 0x2e1ce8u: goto label_2e1ce8;
        default: break;
    }

    ctx->pc = 0x2e1c70u;

    // 0x2e1c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1c74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1c7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e1c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e1c80: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e1c84: 0x2442eb08  addiu       $v0, $v0, -0x14F8
    ctx->pc = 0x2e1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961928));
    // 0x2e1c88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e1c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1c8c: 0xc087c7a  jal         func_21F1E8
    ctx->pc = 0x2E1C8Cu;
    SET_GPR_U32(ctx, 31, 0x2E1C94u);
    ctx->pc = 0x2E1C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C8Cu;
    // 0x2e1c90: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F1E8u, 0x2E1C8Cu, 0x2E1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C94u;
label_2e1c94:
    // 0x2e1c94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e1c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1c9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e1c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1ca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e1ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ca4: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2E1CA4u;
    SET_GPR_U32(ctx, 31, 0x2E1CACu);
    ctx->pc = 0x2E1CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1CA4u;
    // 0x2e1ca8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2E1CA4u, 0x2E1CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1CACu;
label_2e1cac:
    // 0x2e1cac: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2e1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e1cb0: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2e1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1cb4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e1cb8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e1cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e1cbc: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x2e1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
    // 0x2e1cc0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2e1cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2e1cc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1CC4u;
    {
        const bool branch_taken_0x2e1cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CC4u;
        // 0x2e1cc8: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1cc4) {
            ctx->pc = 0x2E1CE8u;
            goto label_2e1ce8;
        }
    }
    ctx->pc = 0x2E1CCCu;
    // 0x2e1ccc: 0x0  nop
    ctx->pc = 0x2e1cccu;
    // NOP
    // 0x2e1cd0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e1cd4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e1cd8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e1cdc: 0x248403dc  addiu       $a0, $a0, 0x3DC
    ctx->pc = 0x2e1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 988));
    // 0x2e1ce0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E1CE0u;
    SET_GPR_U32(ctx, 31, 0x2E1CE8u);
    ctx->pc = 0x2E1CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1CE0u;
    // 0x2e1ce4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E1CE0u, 0x2E1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1CE8u;
label_2e1ce8:
    // 0x2e1ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1cec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e1cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CF0u;
        // 0x2e1cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1CF8u;
}
