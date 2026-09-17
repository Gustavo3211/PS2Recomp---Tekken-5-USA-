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

// Function: sub_0049B880
// Address: 0x49b880 - 0x49b8a8
void sub_0049B880_0x49b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B880_0x49b880");
#endif

    ctx->pc = 0x49b880u;

    // 0x49b880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49b884: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49b884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49b888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49b888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49b88c: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x49b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x49b890: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49b894: 0xa48201c2  sh          $v0, 0x1C2($a0)
    ctx->pc = 0x49b894u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b89c: 0xa4a3fa44  sh          $v1, -0x5BC($a1)
    ctx->pc = 0x49b89cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x49b8a0: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x49B8A0u;
    ctx->pc = 0x49B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B8A0u;
    // 0x49b8a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x49B8A8u;
}
