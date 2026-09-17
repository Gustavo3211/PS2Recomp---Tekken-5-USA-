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

// Function: sub_00514E40
// Address: 0x514e40 - 0x514eb0
void sub_00514E40_0x514e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00514E40_0x514e40");
#endif

    switch (ctx->pc) {
        case 0x514e54u: goto label_514e54;
        case 0x514e60u: goto label_514e60;
        case 0x514e6cu: goto label_514e6c;
        case 0x514e9cu: goto label_514e9c;
        default: break;
    }

    ctx->pc = 0x514e40u;

    // 0x514e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x514e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x514e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x514e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x514e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x514e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x514e4c: 0xc0449ca  jal         func_112728
    ctx->pc = 0x514E4Cu;
    SET_GPR_U32(ctx, 31, 0x514E54u);
    ctx->pc = 0x514E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514E4Cu;
    // 0x514e50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112728u, 0x514E4Cu, 0x514E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514E54u;
label_514e54:
    // 0x514e54: 0x3c1000d0  lui         $s0, 0xD0
    ctx->pc = 0x514e54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)208 << 16));
    // 0x514e58: 0xc043ca4  jal         func_10F290
    ctx->pc = 0x514E58u;
    SET_GPR_U32(ctx, 31, 0x514E60u);
    ctx->pc = 0x514E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514E58u;
    // 0x514e5c: 0x26105600  addiu       $s0, $s0, 0x5600 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F290u, 0x514E58u, 0x514E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514E60u;
label_514e60:
    // 0x514e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x514e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514e64: 0xc044cbc  jal         func_1132F0
    ctx->pc = 0x514E64u;
    SET_GPR_U32(ctx, 31, 0x514E6Cu);
    ctx->pc = 0x514E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514E64u;
    // 0x514e68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1132F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1132F0u, 0x514E64u, 0x514E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514E6Cu;
label_514e6c:
    // 0x514e6c: 0x3c0400d0  lui         $a0, 0xD0
    ctx->pc = 0x514e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)208 << 16));
    // 0x514e70: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x514e70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x514e74: 0x3c0700d0  lui         $a3, 0xD0
    ctx->pc = 0x514e74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)208 << 16));
    // 0x514e78: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x514e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x514e7c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x514e7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514e80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x514e80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514e84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x514e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514e88: 0x24c64eb0  addiu       $a2, $a2, 0x4EB0
    ctx->pc = 0x514e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20144));
    // 0x514e8c: 0x24e755c0  addiu       $a3, $a3, 0x55C0
    ctx->pc = 0x514e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21952));
    // 0x514e90: 0x24845618  addiu       $a0, $a0, 0x5618
    ctx->pc = 0x514e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22040));
    // 0x514e94: 0xc044ce2  jal         func_113388
    ctx->pc = 0x514E94u;
    SET_GPR_U32(ctx, 31, 0x514E9Cu);
    ctx->pc = 0x514E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514E94u;
    // 0x514e98: 0x34a50704  ori         $a1, $a1, 0x704 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1796);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113388u, 0x514E94u, 0x514E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514E9Cu;
label_514e9c:
    // 0x514e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x514e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x514ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x514ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x514ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x514ea8: 0x8044de8  j           func_1137A0
    ctx->pc = 0x514EA8u;
    ctx->pc = 0x514EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514EA8u;
    // 0x514eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137A0u, 0x514EA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x514EB0u;
}
