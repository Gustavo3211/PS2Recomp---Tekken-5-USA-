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

// Function: sub_00373934
// Address: 0x373934 - 0x373994
void sub_00373934_0x373934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373934_0x373934");
#endif

    switch (ctx->pc) {
        case 0x373954u: goto label_373954;
        case 0x37397cu: goto label_37397c;
        default: break;
    }

    ctx->pc = 0x373934u;

    // 0x373934: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373938: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x373938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x37393c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x37393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x373940: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373940u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373944: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x373944u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x373948: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x373948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x37394c: 0xc0dcdf1  jal         func_3737C4
    ctx->pc = 0x37394Cu;
    SET_GPR_U32(ctx, 31, 0x373954u);
    ctx->pc = 0x3737C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737C4u, 0x37394Cu, 0x373954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373954u;
label_373954:
    // 0x373954: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373954u;
    {
        const bool branch_taken_0x373954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373954) {
            ctx->pc = 0x373964u;
            goto label_373964;
        }
    }
    ctx->pc = 0x37395Cu;
    // 0x37395c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37395Cu;
    {
        const bool branch_taken_0x37395c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37395c) {
            ctx->pc = 0x37397Cu;
            goto label_37397c;
        }
    }
    ctx->pc = 0x373964u;
label_373964:
    // 0x373964: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373968: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x373968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37396c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x37396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373970: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373974: 0xc0dcf81  jal         func_373E04
    ctx->pc = 0x373974u;
    SET_GPR_U32(ctx, 31, 0x37397Cu);
    ctx->pc = 0x373E04u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373E04u, 0x373974u, 0x37397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37397Cu;
label_37397c:
    // 0x37397c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x37397cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373980: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x373980u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373984: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x373984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373988: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37398c: 0x3e00008  jr          $ra
    ctx->pc = 0x37398Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37398Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373994u;
}
