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

// Function: sub_004AD7C8
// Address: 0x4ad7c8 - 0x4ad800
void sub_004AD7C8_0x4ad7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD7C8_0x4ad7c8");
#endif

    ctx->pc = 0x4ad7c8u;

    // 0x4ad7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad7cc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4ad7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4ad7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad7d4: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4ad7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4ad7d8: 0x24422426  addiu       $v0, $v0, 0x2426
    ctx->pc = 0x4ad7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9254));
    // 0x4ad7dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ad7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad7e0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ad7e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72FAA6u));
    // 0x4ad7e4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x4ad7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4ad7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad7ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4ad7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4ad7f0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4ad7f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72FAA6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FAA6u, _value); } while (0);
    // 0x4ad7f4: 0x812b5bc  j           func_4AD6F0
    ctx->pc = 0x4AD7F4u;
    ctx->pc = 0x4AD7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD7F4u;
    // 0x4ad7f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6F0u, 0x4AD7F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AD7FCu;
    // 0x4ad7fc: 0x0  nop
    ctx->pc = 0x4ad7fcu;
    // NOP
    ctx->pc = 0x4ad800u;
}
