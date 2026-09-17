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

// Function: sub_004F99B0
// Address: 0x4f99b0 - 0x4f9a10
void sub_004F99B0_0x4f99b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F99B0_0x4f99b0");
#endif

    ctx->pc = 0x4f99b0u;

    // 0x4f99b0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x4f99b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4f99b4: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x4f99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x4f99b8: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x4f99b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x4f99bc: 0x2c855555  sltiu       $a1, $a0, 0x5555
    ctx->pc = 0x4f99bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21845) ? 1 : 0);
    // 0x4f99c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4F99C0u;
    {
        const bool branch_taken_0x4f99c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F99C0u;
        // 0x4f99c4: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f99c0) {
            ctx->pc = 0x4F99F0u;
            goto label_4f99f0;
        }
    }
    ctx->pc = 0x4F99C8u;
    // 0x4f99c8: 0x24035554  addiu       $v1, $zero, 0x5554
    ctx->pc = 0x4f99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21844));
    // 0x4f99cc: 0x65200a  movz        $a0, $v1, $a1
    ctx->pc = 0x4f99ccu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x4f99d0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4f99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4f99d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4f99d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f99dc: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x4f99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x4f99e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f99e4: 0x90631380  lbu         $v1, 0x1380($v1)
    ctx->pc = 0x4f99e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4992)));
    // 0x4f99e8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x4f99e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x4f99ec: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x4f99ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_4f99f0:
    // 0x4f99f0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x4f99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4f99f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f99f8: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x4f99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x4f99fc: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x4f99fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x4f9a00: 0x24215380  addiu       $at, $at, 0x5380
    ctx->pc = 0x4f9a00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 21376));
    // 0x4f9a04: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9A04u;
        // 0x4f9a08: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9A0Cu;
    // 0x4f9a0c: 0x0  nop
    ctx->pc = 0x4f9a0cu;
    // NOP
    ctx->pc = 0x4f9a10u;
}
