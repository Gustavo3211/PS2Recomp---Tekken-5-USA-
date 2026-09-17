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

// Function: sub_0027A7C8
// Address: 0x27a7c8 - 0x27a828
void sub_0027A7C8_0x27a7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A7C8_0x27a7c8");
#endif

    ctx->pc = 0x27a7c8u;

    // 0x27a7c8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27a7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a7cc: 0x8cc300c4  lw          $v1, 0xC4($a2)
    ctx->pc = 0x27a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x27a7d0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x27a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x27a7d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27a7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x27a7d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27A7D8u;
    {
        const bool branch_taken_0x27a7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7D8u;
        // 0x27a7dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7d8) {
            ctx->pc = 0x27A808u;
            goto label_27a808;
        }
    }
    ctx->pc = 0x27A7E0u;
    // 0x27a7e0: 0x94c202b6  lhu         $v0, 0x2B6($a2)
    ctx->pc = 0x27a7e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 694)));
    // 0x27a7e4: 0x94c30216  lhu         $v1, 0x216($a2)
    ctx->pc = 0x27a7e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 534)));
    // 0x27a7e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27a7ec: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x27a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x27a7f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27a7f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27a7f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27a7f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x27a7f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x27a7fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a800: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x27a800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27a804: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x27a804u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
label_27a808:
    // 0x27a808: 0x8cc40310  lw          $a0, 0x310($a2)
    ctx->pc = 0x27a808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 784)));
    // 0x27a80c: 0x28e50042  slti        $a1, $a3, 0x42
    ctx->pc = 0x27a80cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x27a810: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x27a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x27a814: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x27a814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x27a818: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x27a818u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x27a81c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A81Cu;
        // 0x27a820: 0xa4c302b8  sh          $v1, 0x2B8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 696), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A824u;
    // 0x27a824: 0x0  nop
    ctx->pc = 0x27a824u;
    // NOP
    ctx->pc = 0x27a828u;
}
