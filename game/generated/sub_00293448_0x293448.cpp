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

// Function: sub_00293448
// Address: 0x293448 - 0x2934c8
void sub_00293448_0x293448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293448_0x293448");
#endif

    switch (ctx->pc) {
        case 0x29345cu: goto label_29345c;
        case 0x293470u: goto label_293470;
        case 0x293484u: goto label_293484;
        case 0x2934b0u: goto label_2934b0;
        default: break;
    }

    ctx->pc = 0x293448u;

    // 0x293448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x293448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29344c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293450: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x293450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x293454: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x293454u;
    SET_GPR_U32(ctx, 31, 0x29345Cu);
    ctx->pc = 0x293458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293454u;
    // 0x293458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x293454u, 0x29345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29345Cu;
label_29345c:
    // 0x29345c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29345cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x293460: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x293460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x293464: 0x2463e1b8  addiu       $v1, $v1, -0x1E48
    ctx->pc = 0x293464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959544));
    // 0x293468: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x293468u;
    SET_GPR_U32(ctx, 31, 0x293470u);
    ctx->pc = 0x29346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293468u;
    // 0x29346c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x293468u, 0x293470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293470u;
label_293470:
    // 0x293470: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x293470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293474: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x293474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x293478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29347c: 0xc089636  jal         func_2258D8
    ctx->pc = 0x29347Cu;
    SET_GPR_U32(ctx, 31, 0x293484u);
    ctx->pc = 0x293480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29347Cu;
    // 0x293480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x29347Cu, 0x293484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293484u;
label_293484:
    // 0x293484: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x293484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x293488: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x293488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x29348c: 0x2463b4e8  addiu       $v1, $v1, -0x4B18
    ctx->pc = 0x29348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948072));
    // 0x293490: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x293490u;
    {
        const bool branch_taken_0x293490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293490u;
        // 0x293494: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293490) {
            ctx->pc = 0x2934D0u;
            return;
        }
    }
    ctx->pc = 0x293498u;
    // 0x293498: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x293498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x29349c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x29349cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2934a0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x2934a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x2934a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2934a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2934a8: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x2934A8u;
    SET_GPR_U32(ctx, 31, 0x2934B0u);
    ctx->pc = 0x2934ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934A8u;
    // 0x2934ac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x2934A8u, 0x2934B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934B0u;
label_2934b0:
    // 0x2934b0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2934b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2934b4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2934b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2934b8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2934b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2934bc: 0x2484fe50  addiu       $a0, $a0, -0x1B0
    ctx->pc = 0x2934bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966864));
    // 0x2934c0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2934C0u;
    SET_GPR_U32(ctx, 31, 0x2934C8u);
    ctx->pc = 0x2934C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934C0u;
    // 0x2934c4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2934C0u, 0x2934C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934C8u;
}
