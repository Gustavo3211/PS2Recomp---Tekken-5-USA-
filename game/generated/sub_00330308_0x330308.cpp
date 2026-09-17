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

// Function: sub_00330308
// Address: 0x330308 - 0x330324
void sub_00330308_0x330308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330308_0x330308");
#endif

    ctx->pc = 0x330308u;

    // 0x330308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x330308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33030c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x330310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x330310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330314: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x330314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x330318: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x330318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33031c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330320: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x330320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x330324u;
}
