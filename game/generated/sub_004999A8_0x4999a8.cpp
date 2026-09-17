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

// Function: sub_004999A8
// Address: 0x4999a8 - 0x4999c0
void sub_004999A8_0x4999a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004999A8_0x4999a8");
#endif

    ctx->pc = 0x4999a8u;

    // 0x4999a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4999a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4999ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4999acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4999b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4999b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4999b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4999b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4999b8: 0x8129c54  j           func_4A7150
    ctx->pc = 0x4999B8u;
    ctx->pc = 0x4999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4999B8u;
    // 0x4999bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7150u;
    sub_004A7150_0x4a7150(rdram, ctx, runtime); return;
    ctx->pc = 0x4999C0u;
}
