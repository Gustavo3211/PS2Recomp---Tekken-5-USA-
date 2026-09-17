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

// Function: sub_002E5550
// Address: 0x2e5550 - 0x2e55a0
void sub_002E5550_0x2e5550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5550_0x2e5550");
#endif

    switch (ctx->pc) {
        case 0x2e5594u: goto label_2e5594;
        default: break;
    }

    ctx->pc = 0x2e5550u;

    // 0x2e5550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e5554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e555c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e5560: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e5560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e5564: 0x26030154  addiu       $v1, $s0, 0x154
    ctx->pc = 0x2e5564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    // 0x2e5568: 0x2607015c  addiu       $a3, $s0, 0x15C
    ctx->pc = 0x2e5568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x2e556c: 0x26080164  addiu       $t0, $s0, 0x164
    ctx->pc = 0x2e556cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x2e5570: 0x2442ee40  addiu       $v0, $v0, -0x11C0
    ctx->pc = 0x2e5570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x2e5574: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e5574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e5578: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e557c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2e557cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2e5580: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2e5580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2e5584: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2e5584u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2e5588: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2e5588u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2e558c: 0xc0b9572  jal         func_2E55C8
    ctx->pc = 0x2E558Cu;
    SET_GPR_U32(ctx, 31, 0x2E5594u);
    ctx->pc = 0x2E5590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E558Cu;
    // 0x2e5590: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E55C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E55C8u, 0x2E558Cu, 0x2E5594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5594u;
label_2e5594:
    // 0x2e5594: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5594u;
    {
        const bool branch_taken_0x2e5594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5594u;
        // 0x2e5598: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5594) {
            ctx->pc = 0x2E55B8u;
            return;
        }
    }
    ctx->pc = 0x2E559Cu;
    // 0x2e559c: 0x0  nop
    ctx->pc = 0x2e559cu;
    // NOP
    ctx->pc = 0x2e55a0u;
}
