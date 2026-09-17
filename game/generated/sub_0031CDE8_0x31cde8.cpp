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

// Function: sub_0031CDE8
// Address: 0x31cde8 - 0x31cea8
void sub_0031CDE8_0x31cde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CDE8_0x31cde8");
#endif

    switch (ctx->pc) {
        case 0x31ce38u: goto label_31ce38;
        default: break;
    }

    ctx->pc = 0x31cde8u;

    // 0x31cde8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x31cde8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cdec: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x31cdecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cdf0: 0x1140002a  beqz        $t2, . + 4 + (0x2A << 2)
    ctx->pc = 0x31CDF0u;
    {
        const bool branch_taken_0x31cdf0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDF0u;
        // 0x31cdf4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cdf0) {
            ctx->pc = 0x31CE9Cu;
            goto label_31ce9c;
        }
    }
    ctx->pc = 0x31CDF8u;
    // 0x31cdf8: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x31cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x31cdfc: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x31cdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x31ce00: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x31ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x31ce04: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x31ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x31ce08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ce0c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x31ce0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31ce10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31ce10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31ce14: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x31ce14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31ce18: 0x2443a  dsrl        $t0, $v0, 16
    ctx->pc = 0x31ce18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> 16);
    // 0x31ce1c: 0x47c3a  dsrl        $t7, $a0, 16
    ctx->pc = 0x31ce1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) >> 16);
    // 0x31ce20: 0x54c3a  dsrl        $t1, $a1, 16
    ctx->pc = 0x31ce20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) >> 16);
    // 0x31ce24: 0x33c3a  dsrl        $a3, $v1, 16
    ctx->pc = 0x31ce24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> 16);
    // 0x31ce28: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x31ce28u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce2c: 0x24194000  addiu       $t9, $zero, 0x4000
    ctx->pc = 0x31ce2cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x31ce30: 0x24183ff0  addiu       $t8, $zero, 0x3FF0
    ctx->pc = 0x31ce30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16368));
    // 0x31ce34: 0x0  nop
    ctx->pc = 0x31ce34u;
    // NOP
label_31ce38:
    // 0x31ce38: 0x25840008  addiu       $a0, $t4, 0x8
    ctx->pc = 0x31ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x31ce3c: 0x258c0400  addiu       $t4, $t4, 0x400
    ctx->pc = 0x31ce3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1024));
    // 0x31ce40: 0x1991026  xor         $v0, $t4, $t9
    ctx->pc = 0x31ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 25));
    // 0x31ce44: 0xd283e  dsrl32      $a1, $t5, 0
    ctx->pc = 0x31ce44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x31ce48: 0x302600a  movz        $t4, $t8, $v0
    ctx->pc = 0x31ce48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 24));
    // 0x31ce4c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31ce4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31ce50: 0xc183c  dsll32      $v1, $t4, 0
    ctx->pc = 0x31ce50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << (32 + 0));
    // 0x31ce54: 0x2582fff8  addiu       $v0, $t4, -0x8
    ctx->pc = 0x31ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
    // 0x31ce58: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x31ce58u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ce5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ce60: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31ce60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31ce64: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31ce64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31ce68: 0xd183e  dsrl32      $v1, $t5, 0
    ctx->pc = 0x31ce68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x31ce6c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x31ce6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x31ce70: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x31ce70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x31ce74: 0xaf2825  or          $a1, $a1, $t7
    ctx->pc = 0x31ce74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 15));
    // 0x31ce78: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x31ce78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x31ce7c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x31ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x31ce80: 0x1ca302b  sltu        $a2, $t6, $t2
    ctx->pc = 0x31ce80u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x31ce84: 0xfd640000  sd          $a0, 0x0($t3)
    ctx->pc = 0x31ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x31ce88: 0xfd650008  sd          $a1, 0x8($t3)
    ctx->pc = 0x31ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 5));
    // 0x31ce8c: 0xfd630010  sd          $v1, 0x10($t3)
    ctx->pc = 0x31ce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 3));
    // 0x31ce90: 0xfd620018  sd          $v0, 0x18($t3)
    ctx->pc = 0x31ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 24), GPR_U64(ctx, 2));
    // 0x31ce94: 0x14c0ffe8  bnez        $a2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x31CE94u;
    {
        const bool branch_taken_0x31ce94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE94u;
        // 0x31ce98: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce94) {
            ctx->pc = 0x31CE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ce38;
        }
    }
    ctx->pc = 0x31CE9Cu;
label_31ce9c:
    // 0x31ce9c: 0x3e00008  jr          $ra
    ctx->pc = 0x31CE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE9Cu;
        // 0x31cea0: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CEA4u;
    // 0x31cea4: 0x0  nop
    ctx->pc = 0x31cea4u;
    // NOP
    ctx->pc = 0x31cea8u;
}
