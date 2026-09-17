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

// Function: sub_0031E200
// Address: 0x31e200 - 0x31e258
void sub_0031E200_0x31e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E200_0x31e200");
#endif

    switch (ctx->pc) {
        case 0x31e200u: goto label_31e200;
        case 0x31e204u: goto label_31e204;
        case 0x31e208u: goto label_31e208;
        case 0x31e20cu: goto label_31e20c;
        case 0x31e210u: goto label_31e210;
        case 0x31e214u: goto label_31e214;
        case 0x31e218u: goto label_31e218;
        case 0x31e21cu: goto label_31e21c;
        case 0x31e220u: goto label_31e220;
        case 0x31e224u: goto label_31e224;
        case 0x31e228u: goto label_31e228;
        case 0x31e22cu: goto label_31e22c;
        case 0x31e230u: goto label_31e230;
        case 0x31e234u: goto label_31e234;
        case 0x31e238u: goto label_31e238;
        case 0x31e23cu: goto label_31e23c;
        case 0x31e240u: goto label_31e240;
        case 0x31e244u: goto label_31e244;
        case 0x31e248u: goto label_31e248;
        case 0x31e24cu: goto label_31e24c;
        case 0x31e250u: goto label_31e250;
        case 0x31e254u: goto label_31e254;
        default: break;
    }

    ctx->pc = 0x31e200u;

label_31e200:
    // 0x31e200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31e204:
    // 0x31e204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31e208:
    // 0x31e208: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31e20c:
    // 0x31e20c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31e20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e210:
    // 0x31e210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31e214:
    // 0x31e214: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x31e214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_31e218:
    // 0x31e218: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x31e218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31e21c:
    // 0x31e21c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_31e220:
    // 0x31e220: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31e220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31e224:
    // 0x31e224: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31e228:
    // 0x31e228: 0x40f809  jalr        $v0
label_31e22c:
    if (ctx->pc == 0x31E22Cu) {
        ctx->pc = 0x31E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E228u;
        // 0x31e22c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E230u;
        goto label_31e230;
    }
    ctx->pc = 0x31E228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E230u);
        ctx->pc = 0x31E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E228u;
        // 0x31e22c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E228u, 0x31E230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E230u;
label_31e230:
    // 0x31e230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31e234:
    if (ctx->pc == 0x31E234u) {
        ctx->pc = 0x31E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E230u;
        // 0x31e234: 0xde220038  ld          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E238u;
        goto label_31e238;
    }
    ctx->pc = 0x31E230u;
    {
        const bool branch_taken_0x31e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E230u;
        // 0x31e234: 0xde220038  ld          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e230) {
            ctx->pc = 0x31E240u;
            goto label_31e240;
        }
    }
    ctx->pc = 0x31E238u;
label_31e238:
    // 0x31e238: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x31e238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_31e23c:
    // 0x31e23c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31e23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_31e240:
    // 0x31e240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e244:
    // 0x31e244: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31e248:
    // 0x31e248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31e24c:
    // 0x31e24c: 0x3e00008  jr          $ra
label_31e250:
    if (ctx->pc == 0x31E250u) {
        ctx->pc = 0x31E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E24Cu;
        // 0x31e250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E254u;
        goto label_31e254;
    }
    ctx->pc = 0x31E24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E24Cu;
        // 0x31e250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E254u;
label_31e254:
    // 0x31e254: 0x0  nop
    ctx->pc = 0x31e254u;
    // NOP
    ctx->pc = 0x31e258u;
}
