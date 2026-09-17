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

// Function: sub_0050D120
// Address: 0x50d120 - 0x50d1a8
void sub_0050D120_0x50d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D120_0x50d120");
#endif

    ctx->pc = 0x50d120u;

    // 0x50d120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50d120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50d124: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50d124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50d128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50d12c: 0x8c45c674  lw          $a1, -0x398C($v0)
    ctx->pc = 0x50d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC674u));
    // 0x50d130: 0x84a3011e  lh          $v1, 0x11E($a1)
    ctx->pc = 0x50d130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 286)));
    // 0x50d134: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x50D134u;
    {
        const bool branch_taken_0x50d134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D134u;
        // 0x50d138: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d134) {
            ctx->pc = 0x50D1A0u;
            goto label_50d1a0;
        }
    }
    ctx->pc = 0x50D13Cu;
    // 0x50d13c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50d140: 0x84a3011a  lh          $v1, 0x11A($a1)
    ctx->pc = 0x50d140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 282)));
    // 0x50d144: 0x2484c65c  addiu       $a0, $a0, -0x39A4
    ctx->pc = 0x50d144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952540));
    // 0x50d148: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50d148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50d14c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x50d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC65Cu));
    // 0x50d150: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50d150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50d154: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50d154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50d158: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50d158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50d15c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x50d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x50d160: 0x84a30120  lh          $v1, 0x120($a1)
    ctx->pc = 0x50d160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x50d164: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50d164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50d168: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x50D168u;
    {
        const bool branch_taken_0x50d168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x50D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D168u;
        // 0x50d16c: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d168) {
            ctx->pc = 0x50D1A0u;
            goto label_50d1a0;
        }
    }
    ctx->pc = 0x50D170u;
    // 0x50d170: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50d170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50d174: 0x8c82c670  lw          $v0, -0x3990($a0)
    ctx->pc = 0x50d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952560)));
    // 0x50d178: 0x2463c668  addiu       $v1, $v1, -0x3998
    ctx->pc = 0x50d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952552));
    // 0x50d17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50d17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d180: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x50d180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x50d184: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x50d184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC668u, _value); } while (0);
    // 0x50d188: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x50d188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x50d18c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x50d18cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x50d190: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x50d190u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50d194: 0x8144c5a  j           func_513168
    ctx->pc = 0x50D194u;
    ctx->pc = 0x50D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D194u;
    // 0x50d198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    sub_00513168_0x513168(rdram, ctx, runtime); return;
    ctx->pc = 0x50D19Cu;
    // 0x50d19c: 0x0  nop
    ctx->pc = 0x50d19cu;
    // NOP
label_50d1a0:
    // 0x50d1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x50D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D1A0u;
        // 0x50d1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D1A8u;
}
