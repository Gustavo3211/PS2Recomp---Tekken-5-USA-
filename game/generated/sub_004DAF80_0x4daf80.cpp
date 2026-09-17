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

// Function: sub_004DAF80
// Address: 0x4daf80 - 0x4dafa0
void sub_004DAF80_0x4daf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAF80_0x4daf80");
#endif

    ctx->pc = 0x4daf80u;

    // 0x4daf80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4daf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4daf84: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4daf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4daf88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4daf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4daf8c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x4daf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x4daf90: 0xa462fa44  sh          $v0, -0x5BC($v1)
    ctx->pc = 0x4daf90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4daf94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4daf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4daf98: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x4DAF98u;
    ctx->pc = 0x4DAF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAF98u;
    // 0x4daf9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x4DAFA0u;
}
