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

// Function: sub_00127128
// Address: 0x127128 - 0x127188
void sub_00127128_0x127128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127128_0x127128");
#endif

    ctx->pc = 0x127128u;

    // 0x127128: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x127128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12712c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x12712cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x127130: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x127130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x127134: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x127134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127138: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x127138u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x12713c: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x12713cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x127140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x127140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127144: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x127144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x127148: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x127148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x12714c: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x12714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x127150: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127150u;
    {
        const bool branch_taken_0x127150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127150u;
        // 0x127154: 0x321c0  sll         $a0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127150) {
            ctx->pc = 0x127168u;
            goto label_127168;
        }
    }
    ctx->pc = 0x127158u;
    // 0x127158: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x127158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12715c: 0x3e00008  jr          $ra
    ctx->pc = 0x12715Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12715Cu;
        // 0x127160: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12715Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127164u;
    // 0x127164: 0x0  nop
    ctx->pc = 0x127164u;
    // NOP
label_127168:
    // 0x127168: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x127168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x12716c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127170: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x127170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x127174: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x127174u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x127178: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x127178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x12717c: 0x3e00008  jr          $ra
    ctx->pc = 0x12717Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12717Cu;
        // 0x127180: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12717Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127184u;
    // 0x127184: 0x0  nop
    ctx->pc = 0x127184u;
    // NOP
    ctx->pc = 0x127188u;
}
