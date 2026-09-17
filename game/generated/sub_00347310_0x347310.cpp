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

// Function: sub_00347310
// Address: 0x347310 - 0x347380
void sub_00347310_0x347310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347310_0x347310");
#endif

    ctx->pc = 0x347310u;

    // 0x347310: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x347310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x347314: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x347314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x347318: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x347318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34731c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34731Cu;
    {
        const bool branch_taken_0x34731c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34731c) {
            ctx->pc = 0x347320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34731Cu;
            // 0x347320: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347338u;
            goto label_347338;
        }
    }
    ctx->pc = 0x347324u;
    // 0x347324: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x347324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x347328: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x347328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x34732c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34732cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x347330: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x347330u;
    {
        const bool branch_taken_0x347330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347330u;
        // 0x347334: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347330) {
            ctx->pc = 0x347348u;
            goto label_347348;
        }
    }
    ctx->pc = 0x347338u;
label_347338:
    // 0x347338: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x347338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x34733c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34733cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x347340: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x347340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x347344: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x347344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_347348:
    // 0x347348: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x347348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34734c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x34734cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347350: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x347350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x347354: 0x3c036804  lui         $v1, 0x6804
    ctx->pc = 0x347354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26628 << 16));
    // 0x347358: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x347358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x34735c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x347360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x347364: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x347364u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x347368: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x347368u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x34736c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x34736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x347370: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x347370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x347374: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x347374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x347378: 0x3e00008  jr          $ra
    ctx->pc = 0x347378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347378u;
        // 0x34737c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347380u;
}
