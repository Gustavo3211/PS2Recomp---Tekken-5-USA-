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

// Function: sub_003735EC
// Address: 0x3735ec - 0x373634
void sub_003735EC_0x3735ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003735EC_0x3735ec");
#endif

    switch (ctx->pc) {
        case 0x37361cu: goto label_37361c;
        default: break;
    }

    ctx->pc = 0x3735ecu;

    // 0x3735ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3735ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3735f0: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3735f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3735f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3735f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3735f8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3735f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735fc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3735fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x373600: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x373600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373604: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x373604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x373608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373608u;
    {
        const bool branch_taken_0x373608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373608) {
            ctx->pc = 0x37361Cu;
            goto label_37361c;
        }
    }
    ctx->pc = 0x373610u;
    // 0x373610: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x373610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373614: 0xc049a7a  jal         func_1269E8
    ctx->pc = 0x373614u;
    SET_GPR_U32(ctx, 31, 0x37361Cu);
    ctx->pc = 0x1269E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E8u, 0x373614u, 0x37361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37361Cu;
label_37361c:
    // 0x37361c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x37361cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373620: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x373620u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373624: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x373624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373628: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37362c: 0x3e00008  jr          $ra
    ctx->pc = 0x37362Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37362Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373634u;
}
