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

// Function: sub_002E15A0
// Address: 0x2e15a0 - 0x2e1628
void sub_002E15A0_0x2e15a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E15A0_0x2e15a0");
#endif

    switch (ctx->pc) {
        case 0x2e15d0u: goto label_2e15d0;
        case 0x2e161cu: goto label_2e161c;
        default: break;
    }

    ctx->pc = 0x2e15a0u;

    // 0x2e15a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e15a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e15a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e15a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e15a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e15a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e15ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e15acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e15b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e15b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e15b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e15b8: 0x2442eb68  addiu       $v0, $v0, -0x1498
    ctx->pc = 0x2e15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962024));
    // 0x2e15bc: 0x26030058  addiu       $v1, $s0, 0x58
    ctx->pc = 0x2e15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2e15c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e15c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e15c8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2e15c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e15cc: 0x0  nop
    ctx->pc = 0x2e15ccu;
    // NOP
label_2e15d0:
    // 0x2e15d0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e15d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2e15d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2e15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2e15d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e15dc: 0x0  nop
    ctx->pc = 0x2e15dcu;
    // NOP
    // 0x2e15e0: 0x0  nop
    ctx->pc = 0x2e15e0u;
    // NOP
    // 0x2e15e4: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E15E4u;
    {
        const bool branch_taken_0x2e15e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E15E4u;
        // 0x2e15e8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e15e4) {
            ctx->pc = 0x2E15D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e15d0;
        }
    }
    ctx->pc = 0x2E15ECu;
    // 0x2e15ec: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2e15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e15f0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2e15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2e15f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e15f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e15f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e15f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e15fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e15fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e1600: 0x24a5fa70  addiu       $a1, $a1, -0x590
    ctx->pc = 0x2e1600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965872));
    // 0x2e1604: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2e1604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2e1608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e1608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e160c: 0xae070050  sw          $a3, 0x50($s0)
    ctx->pc = 0x2e160cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 7));
    // 0x2e1610: 0xae060054  sw          $a2, 0x54($s0)
    ctx->pc = 0x2e1610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 6));
    // 0x2e1614: 0xc08b1e8  jal         func_22C7A0
    ctx->pc = 0x2E1614u;
    SET_GPR_U32(ctx, 31, 0x2E161Cu);
    ctx->pc = 0x2E1618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1614u;
    // 0x2e1618: 0xae050038  sw          $a1, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7A0u, 0x2E1614u, 0x2E161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E161Cu;
label_2e161c:
    // 0x2e161c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E161Cu;
    {
        const bool branch_taken_0x2e161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E161Cu;
        // 0x2e1620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e161c) {
            ctx->pc = 0x2E1640u;
            return;
        }
    }
    ctx->pc = 0x2E1624u;
    // 0x2e1624: 0x0  nop
    ctx->pc = 0x2e1624u;
    // NOP
    ctx->pc = 0x2e1628u;
}
