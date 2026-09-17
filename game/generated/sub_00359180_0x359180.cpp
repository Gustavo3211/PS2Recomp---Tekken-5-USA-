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

// Function: sub_00359180
// Address: 0x359180 - 0x359198
void sub_00359180_0x359180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359180_0x359180");
#endif

    ctx->pc = 0x359180u;

    // 0x359180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359184: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35918c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35918cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359190: 0x80d7ade  j           func_35EB78
    ctx->pc = 0x359190u;
    ctx->pc = 0x359194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359190u;
    // 0x359194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB78u;
    sub_0035EB78_0x35eb78(rdram, ctx, runtime); return;
    ctx->pc = 0x359198u;
}
