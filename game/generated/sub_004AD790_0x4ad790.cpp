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

// Function: sub_004AD790
// Address: 0x4ad790 - 0x4ad7c8
void sub_004AD790_0x4ad790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD790_0x4ad790");
#endif

    ctx->pc = 0x4ad790u;

    // 0x4ad790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad794: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4ad794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4ad798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad79c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4ad79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4ad7a0: 0x24422316  addiu       $v0, $v0, 0x2316
    ctx->pc = 0x4ad7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8982));
    // 0x4ad7a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ad7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad7a8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ad7a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F996u));
    // 0x4ad7ac: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x4ad7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4ad7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad7b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4ad7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4ad7b8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4ad7b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F996u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F996u, _value); } while (0);
    // 0x4ad7bc: 0x812b5bc  j           func_4AD6F0
    ctx->pc = 0x4AD7BCu;
    ctx->pc = 0x4AD7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD7BCu;
    // 0x4ad7c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6F0u, 0x4AD7BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AD7C4u;
    // 0x4ad7c4: 0x0  nop
    ctx->pc = 0x4ad7c4u;
    // NOP
    ctx->pc = 0x4ad7c8u;
}
