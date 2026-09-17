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

// Function: sub_001F0EE8
// Address: 0x1f0ee8 - 0x1f0fe8
void sub_001F0EE8_0x1f0ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0EE8_0x1f0ee8");
#endif

    switch (ctx->pc) {
        case 0x1f0f48u: goto label_1f0f48;
        default: break;
    }

    ctx->pc = 0x1f0ee8u;

    // 0x1f0ee8: 0x56080  sll         $t4, $a1, 2
    ctx->pc = 0x1f0ee8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f0eec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1f0eecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ef0: 0x2783a848  addiu       $v1, $gp, -0x57B8
    ctx->pc = 0x1f0ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944840));
    // 0x1f0ef4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1f0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1f0ef8: 0x8f84971c  lw          $a0, -0x68E4($gp)
    ctx->pc = 0x1f0ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940444)));
    // 0x1f0efc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0f00: 0x2786a850  addiu       $a2, $gp, -0x57B0
    ctx->pc = 0x1f0f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
    // 0x1f0f04: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1f0f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1f0f08: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1f0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1f0f0c: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x1f0f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x1f0f10: 0x483824  and         $a3, $v0, $t0
    ctx->pc = 0x1f0f10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1f0f14: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0F14u;
    {
        const bool branch_taken_0x1f0f14 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1F0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F14u;
        // 0x1f0f18: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f14) {
            ctx->pc = 0x1F0F24u;
            goto label_1f0f24;
        }
    }
    ctx->pc = 0x1F0F1Cu;
    // 0x1f0f1c: 0x2402f70f  addiu       $v0, $zero, -0x8F1
    ctx->pc = 0x1f0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965007));
    // 0x1f0f20: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1f0f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_1f0f24:
    // 0x1f0f24: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1f0f28: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1f0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1f0f2c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1f0f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1f0f30: 0x24a55580  addiu       $a1, $a1, 0x5580
    ctx->pc = 0x1f0f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
    // 0x1f0f34: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f0f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f0f38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f0f38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f0f3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f0f40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f44: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1f0f44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0f48:
    // 0x1f0f48: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x1f0f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x1f0f4c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1f0f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1f0f50: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1f0f50u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1f0f54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0F54u;
    {
        const bool branch_taken_0x1f0f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F54u;
        // 0x1f0f58: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f54) {
            ctx->pc = 0x1F0F68u;
            goto label_1f0f68;
        }
    }
    ctx->pc = 0x1F0F5Cu;
    // 0x1f0f5c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F0F5Cu;
    {
        const bool branch_taken_0x1f0f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F5Cu;
        // 0x1f0f60: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f5c) {
            ctx->pc = 0x1F0FBCu;
            goto label_1f0fbc;
        }
    }
    ctx->pc = 0x1F0F64u;
    // 0x1f0f64: 0x0  nop
    ctx->pc = 0x1f0f64u;
    // NOP
label_1f0f68:
    // 0x1f0f68: 0x30e28000  andi        $v0, $a3, 0x8000
    ctx->pc = 0x1f0f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x1f0f6c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0F6Cu;
    {
        const bool branch_taken_0x1f0f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f6c) {
            ctx->pc = 0x1F0F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0F6Cu;
            // 0x1f0f70: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0F88u;
            goto label_1f0f88;
        }
    }
    ctx->pc = 0x1F0F74u;
    // 0x1f0f74: 0xa0ad0000  sb          $t5, 0x0($a1)
    ctx->pc = 0x1f0f74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x1f0f78: 0x354a0001  ori         $t2, $t2, 0x1
    ctx->pc = 0x1f0f78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1);
    // 0x1f0f7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F0F7Cu;
    {
        const bool branch_taken_0x1f0f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F7Cu;
        // 0x1f0f80: 0x35290001  ori         $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f7c) {
            ctx->pc = 0x1F0FBCu;
            goto label_1f0fbc;
        }
    }
    ctx->pc = 0x1F0F84u;
    // 0x1f0f84: 0x0  nop
    ctx->pc = 0x1f0f84u;
    // NOP
label_1f0f88:
    // 0x1f0f88: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1f0f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0f8c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1f0f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1f0f90: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x1f0f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1f0f94: 0x2c660018  sltiu       $a2, $v1, 0x18
    ctx->pc = 0x1f0f94u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1f0f98: 0x2c630014  sltiu       $v1, $v1, 0x14
    ctx->pc = 0x1f0f98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f0f9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f0fa0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0FA0u;
    {
        const bool branch_taken_0x1f0fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FA0u;
        // 0x1f0fa4: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fa0) {
            ctx->pc = 0x1F0FBCu;
            goto label_1f0fbc;
        }
    }
    ctx->pc = 0x1F0FA8u;
    // 0x1f0fa8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1f0fa8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1f0fac: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0FACu;
    {
        const bool branch_taken_0x1f0fac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FACu;
        // 0x1f0fb0: 0x35290001  ori         $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fac) {
            ctx->pc = 0x1F0FBCu;
            goto label_1f0fbc;
        }
    }
    ctx->pc = 0x1F0FB4u;
    // 0x1f0fb4: 0x248200fc  addiu       $v0, $a0, 0xFC
    ctx->pc = 0x1f0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x1f0fb8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1f0fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_1f0fbc:
    // 0x1f0fbc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1f0fbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1f0fc0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1f0fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1f0fc4: 0x2d620010  sltiu       $v0, $t3, 0x10
    ctx->pc = 0x1f0fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f0fc8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1F0FC8u;
    {
        const bool branch_taken_0x1f0fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FC8u;
        // 0x1f0fcc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fc8) {
            ctx->pc = 0x1F0F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0f48;
        }
    }
    ctx->pc = 0x1F0FD0u;
    // 0x1f0fd0: 0x19c0821  addu        $at, $t4, $gp
    ctx->pc = 0x1f0fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 28)));
    // 0x1f0fd4: 0xac29a860  sw          $t1, -0x57A0($at)
    ctx->pc = 0x1f0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944864), GPR_U32(ctx, 9));
    // 0x1f0fd8: 0x19c0821  addu        $at, $t4, $gp
    ctx->pc = 0x1f0fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 28)));
    // 0x1f0fdc: 0xac2aa858  sw          $t2, -0x57A8($at)
    ctx->pc = 0x1f0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944856), GPR_U32(ctx, 10));
    // 0x1f0fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0FE8u;
}
