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

// Function: sub_002C76C0
// Address: 0x2c76c0 - 0x2c7728
void sub_002C76C0_0x2c76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C76C0_0x2c76c0");
#endif

    ctx->pc = 0x2c76c0u;

    // 0x2c76c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c76c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c76c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c76c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c76c8: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x2c76c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c76cc: 0x24e80006  addiu       $t0, $a3, 0x6
    ctx->pc = 0x2c76ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x2c76d0: 0x94e50002  lhu         $a1, 0x2($a3)
    ctx->pc = 0x2c76d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2c76d4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2c76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c76d8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2c76d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c76dc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2c76dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2c76e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2c76e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c76e4: 0xc5282a  slt         $a1, $a2, $a1
    ctx->pc = 0x2c76e4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c76e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C76E8u;
    {
        const bool branch_taken_0x2c76e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76E8u;
        // 0x2c76ec: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76e8) {
            ctx->pc = 0x2C76F4u;
            goto label_2c76f4;
        }
    }
    ctx->pc = 0x2C76F0u;
    // 0x2c76f0: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x2c76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_2c76f4:
    // 0x2c76f4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C76F4u;
    {
        const bool branch_taken_0x2c76f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c76f4) {
            ctx->pc = 0x2C76F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C76F4u;
            // 0x2c76f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7708u;
            goto label_2c7708;
        }
    }
    ctx->pc = 0x2C76FCu;
    // 0x2c76fc: 0x4c30003  bgezl       $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C76FCu;
    {
        const bool branch_taken_0x2c76fc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2c76fc) {
            ctx->pc = 0x2C7700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C76FCu;
            // 0x2c7700: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C770Cu;
            goto label_2c770c;
        }
    }
    ctx->pc = 0x2C7704u;
    // 0x2c7704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7708:
    // 0x2c7708: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c7708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2c770c:
    // 0x2c770c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7710: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c7710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c7714: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c7714u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c7718: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c7718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c771c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2c771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2c7720: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7720u;
        // 0x2c7724: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7728u;
}
