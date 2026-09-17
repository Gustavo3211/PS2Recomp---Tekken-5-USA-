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

// Function: sub_0028A550
// Address: 0x28a550 - 0x28a5d8
void sub_0028A550_0x28a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A550_0x28a550");
#endif

    switch (ctx->pc) {
        case 0x28a564u: goto label_28a564;
        case 0x28a578u: goto label_28a578;
        case 0x28a58cu: goto label_28a58c;
        case 0x28a5c0u: goto label_28a5c0;
        default: break;
    }

    ctx->pc = 0x28a550u;

    // 0x28a550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a558: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a55c: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x28A55Cu;
    SET_GPR_U32(ctx, 31, 0x28A564u);
    ctx->pc = 0x28A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A55Cu;
    // 0x28a560: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x28A55Cu, 0x28A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A564u;
label_28a564:
    // 0x28a564: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x28a564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x28a568: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x28a568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x28a56c: 0x2463e008  addiu       $v1, $v1, -0x1FF8
    ctx->pc = 0x28a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959112));
    // 0x28a570: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x28A570u;
    SET_GPR_U32(ctx, 31, 0x28A578u);
    ctx->pc = 0x28A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A570u;
    // 0x28a574: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x28A570u, 0x28A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A578u;
label_28a578:
    // 0x28a578: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28a578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a57c: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x28a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x28a580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a584: 0xc089636  jal         func_2258D8
    ctx->pc = 0x28A584u;
    SET_GPR_U32(ctx, 31, 0x28A58Cu);
    ctx->pc = 0x28A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A584u;
    // 0x28a588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x28A584u, 0x28A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A58Cu;
label_28a58c:
    // 0x28a58c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28a590: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x28a590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x28a594: 0x244299d0  addiu       $v0, $v0, -0x6630
    ctx->pc = 0x28a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941136));
    // 0x28a598: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x28a598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x28a59c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x28a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x28a5a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28A5A0u;
    {
        const bool branch_taken_0x28a5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5A0u;
        // 0x28a5a4: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5a0) {
            ctx->pc = 0x28A5E0u;
            return;
        }
    }
    ctx->pc = 0x28A5A8u;
    // 0x28a5a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x28a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x28a5ac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x28a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x28a5b0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x28a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x28a5b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a5b8: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x28A5B8u;
    SET_GPR_U32(ctx, 31, 0x28A5C0u);
    ctx->pc = 0x28A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5B8u;
    // 0x28a5bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x28A5B8u, 0x28A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5C0u;
label_28a5c0:
    // 0x28a5c0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x28a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x28a5c4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x28a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x28a5c8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x28a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x28a5cc: 0x2484fd90  addiu       $a0, $a0, -0x270
    ctx->pc = 0x28a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966672));
    // 0x28a5d0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x28A5D0u;
    SET_GPR_U32(ctx, 31, 0x28A5D8u);
    ctx->pc = 0x28A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5D0u;
    // 0x28a5d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x28A5D0u, 0x28A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5D8u;
}
