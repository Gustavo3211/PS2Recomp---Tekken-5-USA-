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

// Function: sub_002A59C0
// Address: 0x2a59c0 - 0x2a5ac0
void sub_002A59C0_0x2a59c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A59C0_0x2a59c0");
#endif

    switch (ctx->pc) {
        case 0x2a59f0u: goto label_2a59f0;
        case 0x2a5a18u: goto label_2a5a18;
        case 0x2a5a48u: goto label_2a5a48;
        case 0x2a5a70u: goto label_2a5a70;
        case 0x2a5ab8u: goto label_2a5ab8;
        default: break;
    }

    ctx->pc = 0x2a59c0u;

    // 0x2a59c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a59c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a59c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a59c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a59c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a59c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a59ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a59d0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a59d4: 0x26090050  addiu       $t1, $s0, 0x50
    ctx->pc = 0x2a59d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2a59d8: 0x2442e840  addiu       $v0, $v0, -0x17C0
    ctx->pc = 0x2a59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961216));
    // 0x2a59dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a59dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2a59e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a59e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59e4: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2a59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2a59e8: 0x26070064  addiu       $a3, $s0, 0x64
    ctx->pc = 0x2a59e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2a59ec: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2a59ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
label_2a59f0:
    // 0x2a59f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a59f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a59f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a59f8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2a59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a59fc: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x2a59fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a5a00: 0x0  nop
    ctx->pc = 0x2a5a00u;
    // NOP
    // 0x2a5a04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A5A04u;
    {
        const bool branch_taken_0x2a5a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A04u;
        // 0x2a5a08: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a04) {
            ctx->pc = 0x2A59F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a59f0;
        }
    }
    ctx->pc = 0x2A5A0Cu;
    // 0x2a5a0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a10: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x2a5a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2a5a14: 0x0  nop
    ctx->pc = 0x2a5a14u;
    // NOP
label_2a5a18:
    // 0x2a5a18: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a5a1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a5a20: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a5a24: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x2a5a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a5a28: 0x0  nop
    ctx->pc = 0x2a5a28u;
    // NOP
    // 0x2a5a2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A5A2Cu;
    {
        const bool branch_taken_0x2a5a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A2Cu;
        // 0x2a5a30: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a2c) {
            ctx->pc = 0x2A5A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5a18;
        }
    }
    ctx->pc = 0x2A5A34u;
    // 0x2a5a34: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x2a5a34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x2a5a38: 0x260800b4  addiu       $t0, $s0, 0xB4
    ctx->pc = 0x2a5a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x2a5a3c: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x2a5a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x2a5a40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a44: 0x0  nop
    ctx->pc = 0x2a5a44u;
    // NOP
label_2a5a48:
    // 0x2a5a48: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a5a4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a5a50: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2a5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2a5a54: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x2a5a54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a5a58: 0x0  nop
    ctx->pc = 0x2a5a58u;
    // NOP
    // 0x2a5a5c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A5A5Cu;
    {
        const bool branch_taken_0x2a5a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A5Cu;
        // 0x2a5a60: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a5c) {
            ctx->pc = 0x2A5A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5a48;
        }
    }
    ctx->pc = 0x2A5A64u;
    // 0x2a5a64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a68: 0x25070008  addiu       $a3, $t0, 0x8
    ctx->pc = 0x2a5a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2a5a6c: 0x0  nop
    ctx->pc = 0x2a5a6cu;
    // NOP
label_2a5a70:
    // 0x2a5a70: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a5a74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a5a78: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a5a7c: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x2a5a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a5a80: 0x0  nop
    ctx->pc = 0x2a5a80u;
    // NOP
    // 0x2a5a84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A5A84u;
    {
        const bool branch_taken_0x2a5a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A84u;
        // 0x2a5a88: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a84) {
            ctx->pc = 0x2A5A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5a70;
        }
    }
    ctx->pc = 0x2A5A8Cu;
    // 0x2a5a8c: 0xad000044  sw          $zero, 0x44($t0)
    ctx->pc = 0x2a5a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 0));
    // 0x2a5a90: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a5a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a5a94: 0xad000040  sw          $zero, 0x40($t0)
    ctx->pc = 0x2a5a94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 0));
    // 0x2a5a98: 0x2463dbb0  addiu       $v1, $v1, -0x2450
    ctx->pc = 0x2a5a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958000));
    // 0x2a5a9c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x2a5a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x2a5aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5aa4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2a5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a5aa8: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2a5aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2a5aac: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2a5aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2a5ab0: 0xc0a96ba  jal         func_2A5AE8
    ctx->pc = 0x2A5AB0u;
    SET_GPR_U32(ctx, 31, 0x2A5AB8u);
    ctx->pc = 0x2A5AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5AB0u;
    // 0x2a5ab4: 0xae050058  sw          $a1, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5AE8u, 0x2A5AB0u, 0x2A5AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AB8u;
label_2a5ab8:
    // 0x2a5ab8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5AB8u;
    {
        const bool branch_taken_0x2a5ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AB8u;
        // 0x2a5abc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ab8) {
            ctx->pc = 0x2A5AD8u;
            return;
        }
    }
    ctx->pc = 0x2A5AC0u;
}
