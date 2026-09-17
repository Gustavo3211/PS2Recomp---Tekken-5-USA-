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

// Function: sub_002F42E8
// Address: 0x2f42e8 - 0x2f4330
void sub_002F42E8_0x2f42e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F42E8_0x2f42e8");
#endif

    switch (ctx->pc) {
        case 0x2f42e8u: goto label_2f42e8;
        case 0x2f42ecu: goto label_2f42ec;
        case 0x2f42f0u: goto label_2f42f0;
        case 0x2f42f4u: goto label_2f42f4;
        case 0x2f42f8u: goto label_2f42f8;
        case 0x2f42fcu: goto label_2f42fc;
        case 0x2f4300u: goto label_2f4300;
        case 0x2f4304u: goto label_2f4304;
        case 0x2f4308u: goto label_2f4308;
        case 0x2f430cu: goto label_2f430c;
        case 0x2f4310u: goto label_2f4310;
        case 0x2f4314u: goto label_2f4314;
        case 0x2f4318u: goto label_2f4318;
        case 0x2f431cu: goto label_2f431c;
        case 0x2f4320u: goto label_2f4320;
        case 0x2f4324u: goto label_2f4324;
        case 0x2f4328u: goto label_2f4328;
        case 0x2f432cu: goto label_2f432c;
        default: break;
    }

    ctx->pc = 0x2f42e8u;

label_2f42e8:
    // 0x2f42e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f42e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f42ec:
    // 0x2f42ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f42ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f42f0:
    // 0x2f42f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f42f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2f42f4:
    // 0x2f42f4: 0xc0bbe28  jal         func_2EF8A0
label_2f42f8:
    if (ctx->pc == 0x2F42F8u) {
        ctx->pc = 0x2F42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42F4u;
        // 0x2f42f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F42FCu;
        goto label_2f42fc;
    }
    ctx->pc = 0x2F42F4u;
    SET_GPR_U32(ctx, 31, 0x2F42FCu);
    ctx->pc = 0x2F42F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F42F4u;
    // 0x2f42f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF8A0u, 0x2F42F4u, 0x2F42FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F42FCu;
label_2f42fc:
    // 0x2f42fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f4300:
    // 0x2f4300: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f4300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4304:
    // 0x2f4304: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2f4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2f4308:
    // 0x2f4308: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f4308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f430c:
    // 0x2f430c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f4310:
    // 0x2f4310: 0x60f809  jalr        $v1
label_2f4314:
    if (ctx->pc == 0x2F4314u) {
        ctx->pc = 0x2F4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4310u;
        // 0x2f4314: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4318u;
        goto label_2f4318;
    }
    ctx->pc = 0x2F4310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4318u);
        ctx->pc = 0x2F4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4310u;
        // 0x2f4314: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4310u, 0x2F4318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4318u;
label_2f4318:
    // 0x2f4318: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f4318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f431c:
    // 0x2f431c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2f431cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_2f4320:
    // 0x2f4320: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f4320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f4324:
    // 0x2f4324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f4324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f4328:
    // 0x2f4328: 0x3e00008  jr          $ra
label_2f432c:
    if (ctx->pc == 0x2F432Cu) {
        ctx->pc = 0x2F432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4328u;
        // 0x2f432c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4330u;
        goto label_fallthrough_0x2f4328;
    }
    ctx->pc = 0x2F4328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4328u;
        // 0x2f432c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f4328:
    ctx->pc = 0x2F4330u;
}
