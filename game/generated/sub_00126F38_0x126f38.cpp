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

// Function: sub_00126F38
// Address: 0x126f38 - 0x126fa0
void sub_00126F38_0x126f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126F38_0x126f38");
#endif

    switch (ctx->pc) {
        case 0x126f5cu: goto label_126f5c;
        case 0x126f68u: goto label_126f68;
        case 0x126f7cu: goto label_126f7c;
        case 0x126f84u: goto label_126f84;
        case 0x126f9cu: goto label_126f9c;
        default: break;
    }

    ctx->pc = 0x126f38u;

    // 0x126f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126f3c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126f40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x126f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x126f44: 0x24514c48  addiu       $s1, $v0, 0x4C48
    ctx->pc = 0x126f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19528));
    // 0x126f48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x126f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x126f4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x126f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x126f50: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x126f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x126f54: 0xc04884a  jal         func_122128
    ctx->pc = 0x126F54u;
    SET_GPR_U32(ctx, 31, 0x126F5Cu);
    ctx->pc = 0x126F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F54u;
    // 0x126f58: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122128u, 0x126F54u, 0x126F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F5Cu;
label_126f5c:
    // 0x126f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f60: 0xc04c074  jal         func_1301D0
    ctx->pc = 0x126F60u;
    SET_GPR_U32(ctx, 31, 0x126F68u);
    ctx->pc = 0x126F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F60u;
    // 0x126f64: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1301D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1301D0u, 0x126F60u, 0x126F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F68u;
label_126f68:
    // 0x126f68: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x126f68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x126f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f74: 0xc049ad6  jal         func_126B58
    ctx->pc = 0x126F74u;
    SET_GPR_U32(ctx, 31, 0x126F7Cu);
    ctx->pc = 0x126F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F74u;
    // 0x126f78: 0x24c60230  addiu       $a2, $a2, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126B58u, 0x126F74u, 0x126F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F7Cu;
label_126f7c:
    // 0x126f7c: 0xc048b3c  jal         func_122CF0
    ctx->pc = 0x126F7Cu;
    SET_GPR_U32(ctx, 31, 0x126F84u);
    ctx->pc = 0x122CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CF0u, 0x126F7Cu, 0x126F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F84u;
label_126f84:
    // 0x126f84: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x126f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x126f88: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126f8c: 0x24424d68  addiu       $v0, $v0, 0x4D68
    ctx->pc = 0x126f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19816));
    // 0x126f90: 0x24840830  addiu       $a0, $a0, 0x830
    ctx->pc = 0x126f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
    // 0x126f94: 0xc048b90  jal         func_122E40
    ctx->pc = 0x126F94u;
    SET_GPR_U32(ctx, 31, 0x126F9Cu);
    ctx->pc = 0x126F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F94u;
    // 0x126f98: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x126F94u, 0x126F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F9Cu;
label_126f9c:
    // 0x126f9c: 0x0  nop
    ctx->pc = 0x126f9cu;
    // NOP
    ctx->pc = 0x126fa0u;
}
