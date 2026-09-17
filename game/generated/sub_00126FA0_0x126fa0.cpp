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

// Function: sub_00126FA0
// Address: 0x126fa0 - 0x127008
void sub_00126FA0_0x126fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126FA0_0x126fa0");
#endif

    switch (ctx->pc) {
        case 0x126fc4u: goto label_126fc4;
        case 0x126fd0u: goto label_126fd0;
        case 0x126fe4u: goto label_126fe4;
        case 0x126fecu: goto label_126fec;
        case 0x127004u: goto label_127004;
        default: break;
    }

    ctx->pc = 0x126fa0u;

    // 0x126fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126fa4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126fa8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x126fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x126fac: 0x24514c28  addiu       $s1, $v0, 0x4C28
    ctx->pc = 0x126facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19496));
    // 0x126fb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x126fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x126fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x126fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x126fb8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x126fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x126fbc: 0xc04884a  jal         func_122128
    ctx->pc = 0x126FBCu;
    SET_GPR_U32(ctx, 31, 0x126FC4u);
    ctx->pc = 0x126FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FBCu;
    // 0x126fc0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122128u, 0x126FBCu, 0x126FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126FC4u;
label_126fc4:
    // 0x126fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fc8: 0xc04c09a  jal         func_130268
    ctx->pc = 0x126FC8u;
    SET_GPR_U32(ctx, 31, 0x126FD0u);
    ctx->pc = 0x126FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FC8u;
    // 0x126fcc: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130268u, 0x126FC8u, 0x126FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126FD0u;
label_126fd0:
    // 0x126fd0: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x126fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x126fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fdc: 0xc049ad6  jal         func_126B58
    ctx->pc = 0x126FDCu;
    SET_GPR_U32(ctx, 31, 0x126FE4u);
    ctx->pc = 0x126FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FDCu;
    // 0x126fe0: 0x24c602c8  addiu       $a2, $a2, 0x2C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126B58u, 0x126FDCu, 0x126FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126FE4u;
label_126fe4:
    // 0x126fe4: 0xc048b3c  jal         func_122CF0
    ctx->pc = 0x126FE4u;
    SET_GPR_U32(ctx, 31, 0x126FECu);
    ctx->pc = 0x122CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CF0u, 0x126FE4u, 0x126FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126FECu;
label_126fec:
    // 0x126fec: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x126fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x126ff0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126ff4: 0x24424d68  addiu       $v0, $v0, 0x4D68
    ctx->pc = 0x126ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19816));
    // 0x126ff8: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x126ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x126ffc: 0xc048b90  jal         func_122E40
    ctx->pc = 0x126FFCu;
    SET_GPR_U32(ctx, 31, 0x127004u);
    ctx->pc = 0x127000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FFCu;
    // 0x127000: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x126FFCu, 0x127004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127004u;
label_127004:
    // 0x127004: 0x0  nop
    ctx->pc = 0x127004u;
    // NOP
    ctx->pc = 0x127008u;
}
