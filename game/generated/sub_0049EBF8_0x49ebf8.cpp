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

// Function: sub_0049EBF8
// Address: 0x49ebf8 - 0x49ec30
void sub_0049EBF8_0x49ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EBF8_0x49ebf8");
#endif

    switch (ctx->pc) {
        case 0x49ec10u: goto label_49ec10;
        default: break;
    }

    ctx->pc = 0x49ebf8u;

    // 0x49ebf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ebfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49ebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ec00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ec00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ec04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ec08: 0x8127ace  j           func_49EB38
    ctx->pc = 0x49EC08u;
    ctx->pc = 0x49EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EC08u;
    // 0x49ec0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB38u, 0x49EC08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49EC10u;
label_49ec10:
    // 0x49ec10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ec14: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49ec18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ec1c: 0xa440f9f8  sh          $zero, -0x608($v0)
    ctx->pc = 0x49ec1cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9F8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9F8u, _value); } while (0);
    // 0x49ec20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ec20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ec24: 0x8123392  j           func_48CE48
    ctx->pc = 0x49EC24u;
    ctx->pc = 0x49EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EC24u;
    // 0x49ec28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x49EC2Cu;
    // 0x49ec2c: 0x0  nop
    ctx->pc = 0x49ec2cu;
    // NOP
    ctx->pc = 0x49ec30u;
}
