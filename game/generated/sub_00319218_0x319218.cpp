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

// Function: sub_00319218
// Address: 0x319218 - 0x319278
void sub_00319218_0x319218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319218_0x319218");
#endif

    switch (ctx->pc) {
        case 0x31923cu: goto label_31923c;
        case 0x319250u: goto label_319250;
        case 0x31925cu: goto label_31925c;
        default: break;
    }

    ctx->pc = 0x319218u;

    // 0x319218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31921c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x319220: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x319220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x319224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x319228: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319228u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31922c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31922cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319230: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x319230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x319234: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x319234u;
    SET_GPR_U32(ctx, 31, 0x31923Cu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x319234u, 0x31923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31923Cu;
label_31923c:
    // 0x31923c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319240: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x319240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x319244: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x319244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x319248: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x319248u;
    SET_GPR_U32(ctx, 31, 0x319250u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x319248u, 0x319250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319250u;
label_319250:
    // 0x319250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319254: 0xc0c667a  jal         func_3199E8
    ctx->pc = 0x319254u;
    SET_GPR_U32(ctx, 31, 0x31925Cu);
    ctx->pc = 0x3199E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3199E8u, 0x319254u, 0x31925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31925Cu;
label_31925c:
    // 0x31925c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31925cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x319260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319264: 0xdfbe0008  ld          $fp, 0x8($sp)
    ctx->pc = 0x319264u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x319268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31926c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31926cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319270: 0x3e00008  jr          $ra
    ctx->pc = 0x319270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319278u;
}
