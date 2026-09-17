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

// Function: sub_00347070
// Address: 0x347070 - 0x3470e0
void sub_00347070_0x347070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347070_0x347070");
#endif

    ctx->pc = 0x347070u;

    // 0x347070: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x347070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x347074: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x347074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x347078: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x347078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34707c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34707Cu;
    {
        const bool branch_taken_0x34707c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34707c) {
            ctx->pc = 0x347080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34707Cu;
            // 0x347080: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347098u;
            goto label_347098;
        }
    }
    ctx->pc = 0x347084u;
    // 0x347084: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x347084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x347088: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x347088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x34708c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34708cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x347090: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x347090u;
    {
        const bool branch_taken_0x347090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347090u;
        // 0x347094: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347090) {
            ctx->pc = 0x3470A8u;
            goto label_3470a8;
        }
    }
    ctx->pc = 0x347098u;
label_347098:
    // 0x347098: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x347098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x34709c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34709cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3470a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3470a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3470a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3470a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3470a8:
    // 0x3470a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3470a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3470ac: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3470acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3470b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3470b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3470b4: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x3470b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x3470b8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3470b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3470bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3470bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3470c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3470c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3470c4: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x3470c4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3470c8: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x3470c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x3470cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3470ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3470d0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x3470d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3470d4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3470d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3470d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3470D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3470DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470D8u;
        // 0x3470dc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3470D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3470E0u;
}
