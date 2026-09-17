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

// Function: sub_001F0E40
// Address: 0x1f0e40 - 0x1f0ee0
void sub_001F0E40_0x1f0e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0E40_0x1f0e40");
#endif

    switch (ctx->pc) {
        case 0x1f0e60u: goto label_1f0e60;
        default: break;
    }

    ctx->pc = 0x1f0e40u;

    // 0x1f0e40: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1f0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1f0e44: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f0e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f0e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e4c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1f0e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f0e50: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f0e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1f0e54: 0x24848818  addiu       $a0, $a0, -0x77E8
    ctx->pc = 0x1f0e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936600));
    // 0x1f0e58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f0e5c: 0x0  nop
    ctx->pc = 0x1f0e5cu;
    // NOP
label_1f0e60:
    // 0x1f0e60: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1f0e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f0e64: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1f0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1f0e68: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x1f0e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1f0e6c: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x1f0e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1f0e70: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1f0e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f0e74: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1f0e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1f0e78: 0x501fff9  bgez        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F0E78u;
    {
        const bool branch_taken_0x1f0e78 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1F0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E78u;
        // 0x1f0e7c: 0x43380b  movn        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e78) {
            ctx->pc = 0x1F0E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0e60;
        }
    }
    ctx->pc = 0x1F0E80u;
    // 0x1f0e80: 0x30e35000  andi        $v1, $a3, 0x5000
    ctx->pc = 0x1f0e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)20480);
    // 0x1f0e84: 0x24025000  addiu       $v0, $zero, 0x5000
    ctx->pc = 0x1f0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x1f0e88: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0E88u;
    {
        const bool branch_taken_0x1f0e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E88u;
        // 0x1f0e8c: 0x30e3a000  andi        $v1, $a3, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e88) {
            ctx->pc = 0x1F0E9Cu;
            goto label_1f0e9c;
        }
    }
    ctx->pc = 0x1F0E90u;
    // 0x1f0e90: 0x2402afff  addiu       $v0, $zero, -0x5001
    ctx->pc = 0x1f0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294946815));
    // 0x1f0e94: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x1f0e94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1f0e98: 0x30e3a000  andi        $v1, $a3, 0xA000
    ctx->pc = 0x1f0e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)40960);
label_1f0e9c:
    // 0x1f0e9c: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x1f0e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1f0ea0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0EA0u;
    {
        const bool branch_taken_0x1f0ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EA0u;
        // 0x1f0ea4: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ea0) {
            ctx->pc = 0x1F0EB4u;
            goto label_1f0eb4;
        }
    }
    ctx->pc = 0x1F0EA8u;
    // 0x1f0ea8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f0eac: 0x34425fff  ori         $v0, $v0, 0x5FFF
    ctx->pc = 0x1f0eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24575);
    // 0x1f0eb0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x1f0eb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_1f0eb4:
    // 0x1f0eb4: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x1f0eb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1f0eb8: 0x2783a868  addiu       $v1, $gp, -0x5798
    ctx->pc = 0x1f0eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944872));
    // 0x1f0ebc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f0ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f0ec0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1f0ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0ec4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1f0ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1f0ec8: 0xe61026  xor         $v0, $a3, $a2
    ctx->pc = 0x1f0ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x1f0ecc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1f0eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1f0ed0: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x1f0ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x1f0ed4: 0xac22a870  sw          $v0, -0x5790($at)
    ctx->pc = 0x1f0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944880), GPR_U32(ctx, 2));
    // 0x1f0ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0EE0u;
}
